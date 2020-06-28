#include <stdio.h>
#include <io.h>
#include <fcntl.h>     /* for _O_TEXT and _O_BINARY */  
#include <string>
#include <fstream>
#include <iostream>
#include <ostream>
#include <streambuf>
#include <cstdarg>
#include <vector>
#include <locale> 
#include <codecvt>
#include "SdkHeaders.h"
using namespace std;

typedef void(__thiscall *tProcessEvent)(class UObject *, class UFunction *, void *, void *);
tProcessEvent ProcessEvent = (tProcessEvent)0x00453120;

const std::string string_format(const char * const zcFormat, ...) {

	// initialize use of the variable argument array
	va_list vaArgs;
	va_start(vaArgs, zcFormat);

	// reliably acquire the size
	// from a copy of the variable argument array
	// and a functionally reliable call to mock the formatting
	va_list vaArgsCopy;
	va_copy(vaArgsCopy, vaArgs);
	const int iLen = std::vsnprintf(NULL, 0, zcFormat, vaArgsCopy);
	va_end(vaArgsCopy);

	// return a formatted string without risking memory mismanagement
	// and without assuming any compiler or platform specific behavior
	std::vector<char> zc(iLen + 1);
	std::vsnprintf(zc.data(), zc.size(), zcFormat, vaArgs);
	va_end(vaArgs);
	return std::string(zc.data(), iLen);
}

inline std::string ws2s(const std::wstring& wstr)
{
	using convert_typeX = std::codecvt_utf8<wchar_t>;
	std::wstring_convert<convert_typeX, wchar_t> converterX;

	return converterX.to_bytes(wstr);
}

class ME3TweaksASILogger
{
public:
	char* logfname;

	ME3TweaksASILogger(char* loggername, char* _logfname, bool console = true) {
		logfname = _logfname;
		fopen_s(&log, logfname, "w");

		if (console)
		{
			AllocConsole();
			AttachConsole(GetCurrentProcessId());

			// Get STDOUT handle
			HANDLE ConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
			int SystemOutput = _open_osfhandle(intptr_t(ConsoleOutput), _O_TEXT);
			FILE* COutputHandle = _fdopen(SystemOutput, "w");

			// Get STDERR handle
			HANDLE ConsoleError = GetStdHandle(STD_ERROR_HANDLE);
			int SystemError = _open_osfhandle(intptr_t(ConsoleError), _O_TEXT);
			FILE* CErrorHandle = _fdopen(SystemError, "w");

			// Redirect the CRT standard input, output, and error handles to the console
			freopen_s(&COutputHandle, "CONOUT$", "w", stdout);
			freopen_s(&CErrorHandle, "CONOUT$", "w", stderr);
		}

		boottime = GetTickCount64();
		writeToLog("ME3Tweaks ASI Logger - By Mgamerz\n"s, false);
		writeToLog(string(loggername) + "\n", false);
		writeToLog(string_format("Logging to %s%s\n", workingdir().c_str(), _logfname), true);
		writeToLog("--------------------------------------------------------\n", false);
	}

	void writeToDiskOnly(const wstring str, const bool bTimeStamp) {
		writeToDiskOnly(ws2s(str), bTimeStamp);
	}

	void writeToDiskOnly(string str, bool bTimeStamp) {
		if (bTimeStamp) {
			string timeStamp = getTimestampStr();
			fprintf(log, timeStamp.c_str());
			//free((char*)timeStamp);
		}

		fprintf(log, "%s", str.c_str());

		if (numLinesWritten > 10) {
			fflush(log);
			numLinesWritten = 0;
		}
	}

	void writeToConsoleOnly(const wstring str, const bool bTimeStamp) {
		writeToConsoleOnly(ws2s(str), bTimeStamp);
	}

	void writeToConsoleOnly(string str, bool bTimeStamp) {
		if (bTimeStamp) {
			string timeStamp = getTimestampStr();
			std::cout << timeStamp;
			//free((char*)timeStamp);
		}

		std::cout << str;
	}

	void writeToLog(const wstring str, const bool bTimeStamp) {
		writeToLog(ws2s(str), bTimeStamp);
	}

	void writeToLog(string str, bool bTimeStamp) {
		if (bTimeStamp) {
			string timeStamp = getTimestampStr();
			std::cout << timeStamp;
			fprintf(log, timeStamp.c_str());
			//free((char*)timeStamp);
		}
		/*if (!log) {
			std::cout << "LOG ISNT INITALIZED";
		}*/
		fprintf(log, "%s", str.c_str());
		std::cout << str;

		if (numLinesWritten > 10) {
			fflush(log);
			numLinesWritten = 0;
		}
	}

	void flush() {
		if (log) {
			fflush(log);
			numLinesWritten = 0;
		}
	}

private:
	int numLinesWritten = 0;
	FILE* log;
	ULONGLONG boottime = 0;

	std::string workingdir()
	{
		char buf[256];
		GetCurrentDirectoryA(256, buf);
		return std::string(buf) + '\\';
	}

	string getTimestampStr() {
		ULONGLONG currenttime = GetTickCount64();
		ULONGLONG secondsSinceBoot = (currenttime - boottime) / 1000;
		int ms = (currenttime - boottime) % 1000;
		return string_format("[%llu.%d] ", secondsSinceBoot, ms);
	}
};


/*Checks if w1 is part of w2*/
bool isPartOf(char* w1, char* w2)
{
	int i = 0;
	int j = 0;


	while (w1[i] != '\0') {
		if (w1[i] == w2[j])
		{
			int init = i;
			while (w1[i] == w2[j] && w2[j] != '\0')
			{
				j++;
				i++;
			}
			if (w2[j] == '\0') {
				return true;
			}
			j = 0;
		}
		i++;
	}
	return false;
}

std::string wchar2string(wchar_t* str)
{
	std::string mystring;
	while (*str)
		mystring += (char)*str++;
	return  mystring;
}

char GetBit(int value, int bit) {
	return (value >> bit) & 1;
}

std::string GuidToString(FGuid guid)
{
	char guid_cstr[39];
	snprintf(guid_cstr, sizeof(guid_cstr),
		"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
		guid.A, guid.B, guid.C,
		GetBit(guid.D, 0), GetBit(guid.D, 1), GetBit(guid.D, 2), GetBit(guid.D, 3),
		GetBit(guid.D, 4), GetBit(guid.D, 5), GetBit(guid.D, 6), GetBit(guid.D, 7));

	return std::string(guid_cstr);
}

template<typename T>
bool IsA(UObject* object) {
	return object->IsA(T::StaticClass());
}
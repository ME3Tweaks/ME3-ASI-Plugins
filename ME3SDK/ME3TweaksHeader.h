#include <stdio.h>
#include <io.h>
#include <fcntl.h>     /* for _O_TEXT and _O_BINARY */  
#include <string>
#include <fstream>
#include <iostream>
#include <ostream>
#include <streambuf>
#include "SdkHeaders.h"

typedef void(__thiscall *tProcessEvent)(class UObject *, class UFunction *, void *, void *);
tProcessEvent ProcessEvent = (tProcessEvent)0x00453120;


class teebuf
	: public std::streambuf {
	std::streambuf* d_sbuf1;
	std::streambuf* d_sbuf2;
public:
	teebuf(std::streambuf* sbuf1, std::streambuf* sbuf2)
		: d_sbuf1(sbuf1), d_sbuf2(sbuf2) {
	}
	int overflow(int c) {
		if (c != std::char_traits<char>::eof()) {
			this->d_sbuf1->sputc(c);
			this->d_sbuf2->sputc(c);
		}
		return std::char_traits<char>::not_eof(c);
	}
};

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
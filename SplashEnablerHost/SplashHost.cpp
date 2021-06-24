#include <chrono>
#include <iostream>
#include <Windows.h>
#include <libloaderapi.h>
#include <ostream>
#include <thread>

int main(int argc, char* argv[], char* envp[])
{
	std::cout << "Loading library" << std::endl;
	LoadLibrary(L"C:\\Users\\mgame\\source\\repos\\ME3-ASI-Plugins\\Debug\\SplashEnabler.dll");
	for (int k = 0; k < 1000; ++k)
		std::this_thread::sleep_for(std::chrono::milliseconds(20000));
	return 0;
}

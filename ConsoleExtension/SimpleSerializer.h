#pragma once
#include <fstream>


template<typename T>
void writeCamArray(const std::string& file_name, T* data)
{
	std::ofstream out;
	out.open(file_name, std::ios::binary);
	out.write(reinterpret_cast<char*>(data), sizeof(T) * 10);
	out.close();
};

template<typename T>
void readCamArray(const std::string& file_name, T* data)
{
	std::ifstream in;
	in.open(file_name, std::ios::binary);
	in.read(reinterpret_cast<char*>(data), 10 * sizeof(T));
	in.close();
};
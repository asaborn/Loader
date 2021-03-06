#pragma once

#include <sstream>
#include <string>

#define DEBUG

#ifdef DEBUG
	#define LOG(msg) logger.log(msg, __FILE__, __LINE__ )
#else
	#define LOG(msg) ;
#endif


class Debug {
public:
	static void log(const std::string&, const std::string&, const int);
	static void log(const std::string&);
	static void log(const int);
};

extern Debug logger;

template <class T>
std::string to_hexstring(T t)
{
	std::stringstream sstream;
	sstream << "0x" << std::hex << t;
	std::string result = sstream.str();
	return result;
}

#include <iostream>

class OutOfRange : public std::exception
{
public:
	OutOfRange(const char* msg) : std::exception(msg) {}
};
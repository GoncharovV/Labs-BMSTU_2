#include <iostream>

class SegmentationFault : public std::exception
{
public:
	SegmentationFault(const char* msg) : std::exception(msg) {}
};
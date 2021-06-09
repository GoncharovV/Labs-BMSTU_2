#include <iostream>

class OutOfRange : public std::exception
{
public:
	OutOfRange(const char* msg) : err(msg) {}

	const char* what() const override
	{
		std::cout << "Proizoshel method what() With msg: " << std::endl;
		return err;
	}

private:
	const char* err;
};
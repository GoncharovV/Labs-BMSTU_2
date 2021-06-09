#include <iostream>

class OverFlow : public std::exception
{
public:

	OverFlow(std::string what_str) : what_str(what_str) { }

	OverFlow(OverFlow& er) { };

	const char* what() const noexcept 
	{
		return what_str.c_str();
	}

	//const char* what() const noexcept override;

private:

	std::string what_str;
};

//const char* OverFlow::what() const noexcept
//{
//	return what_str.c_str();
//}
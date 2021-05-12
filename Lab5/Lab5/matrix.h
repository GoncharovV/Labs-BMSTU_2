#include <iostream>

template<typename T>
class matrix
{
public:

	matrix(unsigned int n, unsigned int m);

	matrix(matrix<T>& mat);

	matrix(matrix<T>&& mat);

	explicit matrix(std::initializer_list<std::initializer_list<T>> lst);

	~matrix();

	unsigned int get_n();

	unsigned int get_m();

	bool is_square();

	void set_elem(unsigned int n, unsigned int m, T& elem);

	T& get_elem(unsigned int n, unsigned int m);

private:
	unsigned int n, m;

	T **matr;
};



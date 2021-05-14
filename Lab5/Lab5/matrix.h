#include <iostream>
//#include "matrix_iterator.h"

template<typename T>
class matrix
{
public:

	matrix(unsigned int n, unsigned int m);

	matrix(matrix<T>& mat);

	//matrix(matrix<T>&& mat);

	//explicit matrix(std::initializer_list<std::initializer_list<T>> lst);

	~matrix();

	unsigned int get_n();

	unsigned int get_m();

	bool is_square();

	void set_elem(unsigned int n, unsigned int m, T& elem);

	T& get_elem(unsigned int n, unsigned int m);

	matrix<T>& operator=(matrix<T>& matr);

	matrix<T>& operator+=(matrix<T>& matr);

	matrix<T>& operator-=(matrix<T>& matr);

	friend matrix<T>& operator+(matrix<T>& m1, matrix<T>& m2);

	template<typename _T>
	friend matrix<_T> operator+(matrix<_T>& m1, matrix<_T>& m2);

	template<typename _T>
	friend matrix<_T> operator-(matrix<_T>& m1, matrix<_T>& m2);

	template<typename _T>
	friend matrix<_T> operator*(matrix<_T>& m1, matrix<_T>& m2);

	//template<typename _T>
	//friend matrix<_T> operator +(matrix<_T>& m1, double num);

	//template<typename _T>
	//friend matrix<_T> operator -(matrix<_T>& m1, double num);

	//template<typename _T>
	//friend matrix<_T> operator /(matrix<_T>& m1, double num);

	//template<typename _T>
	//friend matrix<_T> operator *(matrix<_T>& m1, double num);

	template<typename _T>
	friend std::ostream& operator<<(std::ostream& os, matrix<_T>& matr);

	T& operator ()(unsigned int i, unsigned int j);

	//Iterator<T> iterator_begin();

	//Iterator<T> iterator_end();

	//template<typename _T>
	//class Iterator
	//{
	//	Iterator<_T>(matrix<_T>& matr)
	//	{
	//		std::cout << "Использован констуктр";
	//	};
	//};



private:
	unsigned int n, m;

	T **_matrix;
};

template <typename T>
class Iterator
{
	template<typename _T>
	Iterator<T>(matrix<T>& matr)
	{
		std::cout << "Произошёл итератор";
	}

private: 
	int n_pos;
	int m_pos;

	int n;
	int m;

	bool change_pos(int value)
	{
		int sign = value / abs(value);

		value = abs(value);

		m_pos += (value / n) * sign;

		if ()

		n_pos += (value % n) * sign;
	}
};


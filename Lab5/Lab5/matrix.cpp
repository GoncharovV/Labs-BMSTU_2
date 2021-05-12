#include "matrix.h"

template<typename T>
matrix<T>::matrix(unsigned int n, unsigned int m)
{
	this->n = n;
	this->m = m;

	matr = new T* [n];

	for (int row = 0; row < n; row++)
	{
		matr[row] = new T[m];
	}
}

template<typename T>
matrix<T>::matrix(matrix<T>& mat)
{
	n = mat.get_n();
	m = mat.get_m();

	matr = new T * [n];

	for (int row = 0; row < n; row++)
	{
		matr[row] = new T[m];
	}

	for (int row = 0; row < mat.get_n(); row++)
	{
		for (int col = 0; col < mat.get_m(); col++)
		{
			matr.set_elem(row, col, mat.get_elem(row, col));
		}
	}
}

template<typename T>
matrix<T>::~matrix()
{
	for (int row = 0; row < n; row++)
	{
		delete[] matr[row];
	}

	delete [] matr;
}

template<typename T>
unsigned int matrix<T>::get_n()
{
	return n;
}

template<typename T>
unsigned int matrix<T>::get_m()
{
	return m;
}

template<typename T>
bool matrix<T>::is_square()
{
	return n == m;
}

template<typename T>
void matrix<T>::set_elem(unsigned int n, unsigned int m, T& elem)
{
	if (n < this->n && m < this->m)
		matr[n][m] = elem;
}

template<typename T>
T& matrix<T>::get_elem(unsigned int n, unsigned int m)
{
	return matr[n][m];
}

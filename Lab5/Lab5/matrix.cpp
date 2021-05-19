#include "matrix.h"

// Simple Constructor
template<typename T>
matrix<T>::matrix(unsigned int n, unsigned int m)
{
	this->n = n;
	this->m = m;

	this->size = n * m;

	_matrix = new T [this->size];
}

// Copy Constructor
template<typename T>
matrix<T>::matrix(matrix<T>& matr)
{
	n = matr.get_n();
	m = matr.get_m();

	size = n * m;

	_matrix = new T [size];

	for (int row = 0; row < matr.get_n(); row++)
	{
		for (int col = 0; col < matr.get_m(); col++)
		{
			this->set_elem(row, col, matr.get_elem(row, col));
		}
	}
}

// Transfer Constructor
template<typename T>
matrix<T>::matrix(matrix<T>&& mat) : n(mat.get_n()), m(mat.get_m()), size(mat.get_size()), _matrix(mat.get_matrix())
{
	_matrix = nullptr;
}

// Constructor with initializer_list
template<typename T>
matrix<T>::matrix(std::initializer_list<std::initializer_list<T>> lst)
{	
	this->n = lst.size();
	this->m = lst.size();

	this->size = n * m;

	_matrix = new T[this->size];

	Iterator<T> it(*this);

	for (auto row : lst)
	{
		for (auto elem : row)
		{
			*it = elem;
			it.next();
		}
	}
}

// Destructor
template<typename T>
matrix<T>::~matrix()
{
	delete [] _matrix;
}

// Get row count
template<typename T>
unsigned int matrix<T>::get_n()
{
	return n;
}

// Get column count
template<typename T>
unsigned int matrix<T>::get_m()
{
	return m;
}

// Get count of matrix elements 
template<typename T>
unsigned int matrix<T>::get_size()
{
	return size;
}

// Is matrix squeare
template<typename T>
bool matrix<T>::is_square()
{
	return n == m;
}

// Set matrix element
template<typename T>
void matrix<T>::set_elem(unsigned int n, unsigned int m, T& elem)
{
	if (n < this->n && m < this->m)
		_matrix[n * this->get_n() + m] = elem;
}

// Get matrix element by index (n, m)
template<typename T>
T& matrix<T>::get_elem(unsigned int n, unsigned int m)
{
	return _matrix[n * this->get_n() + m];
}

// Get matrix element by index (inx)
template<typename T>
T& matrix<T>::get_elem(unsigned int inx)
{
	return _matrix[inx];
}

template<typename T>
T* matrix<T>::get_matrix()
{
	return _matrix;
}

// Assignment operator overloading
template<typename T>
matrix<T>& matrix<T>::operator=(matrix<T>& matr)
{
	delete _matrix;

	this->n = matr.get_n();
	this->m = matr.get_m();

	this->size = matr.get_size();

	_matrix = new T [matr.get_size()];

	for (int row = 0; row < matr.get_n(); row++)
	{
		for (int col = 0; col < matr.get_m(); col++)
		{
			this->set_elem(row, col, matr.get_elem(row, col));
		}
	}

	return *this;
}

// += operator overloading
template<typename T>
matrix<T>& matrix<T>::operator+=(matrix<T>& matr)
{
	for (int row = 0; row < matr.get_n(); row++)
	{
		for (int col = 0; col < matr.get_m(); col++)
		{
			T value = this->get_elem(row, col) + matr.get_elem(row, col);
			this->set_elem(row, col, value);
		}
	}

	return *this;
}

// -= operator overloading
template<typename T>
matrix<T>& matrix<T>::operator-=(matrix<T>& matr)
{
	for (int row = 0; row < matr.get_n(); row++)
	{
		for (int col = 0; col < matr.get_m(); col++)
		{
			T value = this->get_elem(row, col) - matr.get_elem(row, col);
			this->set_elem(row, col, value);
		}
	}

	return *this;
}

// () operator overloading [ equivalent to get_elem(i, j) ]
template<typename T>
T& matrix<T>::operator()(unsigned int i, unsigned int j)
{
	return this->get_elem(i, j);
}

template<typename T>
Iterator<T> matrix<T>::iterator_begin()
{
	Iterator<T> it(*this);
	return it;
}

template<typename T>
Iterator<T> matrix<T>::iterator_end()
{
	Iterator<T> it(*this);
	
	for (int i = 0; i < it.get_size() - 1; i++)
	{
		it.next();
	}

	return it;
}

template<typename _T>
matrix<_T> operator +(matrix<_T>& m1, matrix<_T>& m2)
{
	unsigned int n = m1.get_n();
	unsigned int m = m1.get_m();

	matrix<_T> res(n, m);

	for (unsigned int row = 0; row < n; row++)
	{
		for (unsigned int col = 0; col < m; col++)
		{
			_T value = m1.get_elem(row, col) + m2.get_elem(row, col);
			res.set_elem(row, col, value);
		}
	}

	return res;
}

template<typename _T>
matrix<_T> operator -(matrix<_T>& m1, matrix<_T>& m2)
{
	matrix<_T> tmp(m1);

	tmp -= m2;

	return tmp;
}

template<typename _T>
matrix<_T> operator *(matrix<_T>& m1, matrix<_T>& m2)
{
	unsigned int n = m1.get_n();
	unsigned int m = m2.get_m();
	matrix<_T> tmp(n, m);

	int sum;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum = 0;
			for (int p = 0; p < m; p++)
			{
				sum += m1[i * n + p] * m2[p * n + j];
			}
			tmp[i * n + j] = sum;
		}
	}

	return tmp;
}

template<typename _T>
matrix<_T> operator/(matrix<_T>& m1, double num)
{
	unsigned int n = m1.get_n();
	unsigned int m = m1.get_m();


	matrix<_T> res(n, m);

	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < m; col++)
		{
			_T value = m1.get_elem(row, col) / num;
			res.set_elem(row, col, value);
		}
	}

	return res;
}

template<typename _T>
matrix<_T> operator*(matrix<_T>& m1, double num)
{
	unsigned int n = m1.get_n();
	unsigned int m = m1.get_m();

	matrix<_T> res(n, m);

	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < m; col++)
		{
			_T value = m1.get_elem(row, col) * num;
			res.set_elem(row, col, value);
		}
	}

	return res;
}

template<typename _T>
std::ostream& operator <<(std::ostream& os, matrix<_T>& matr)
{
	for (int row = 0; row < matr.get_n(); row++)
	{
		for (int col = 0; col < matr.get_m(); col++)
		{
			os << matr.get_elem(row, col) << " ";
		}
		os << std::endl;
	}
	return os;
}


template<typename T>
Iterator<T>::Iterator(matrix<T>& matr)
{
	this->matr = &matr;
	this->inx = 0;
	this->size = matr.get_size();
	this->currentValue = &(matr.get_elem(0, 0));
}

template<typename T>
Iterator<T> Iterator<T>::next()
{
	this->inx++;
	this->currentValue = &(matr->get_elem(inx));

	return *this;
}

template<typename T>
T Iterator<T>::value()
{
	return *(this->currentValue);
}

template<typename T>
unsigned int Iterator<T>::get_size()
{
	return size;
}

template<typename T>
bool Iterator<T>::is_end()
{
	return this->inx == this->size;
}

template<typename T>
Iterator<T> Iterator<T>::operator++()
{
	this->inx++;
	this->currentValue = &(matr->get_elem(inx));

	return *this;
}

template<typename T>
T& Iterator<T>::operator*()
{
	return *(this->currentValue);
}

template<typename T>
bool Iterator<T>::operator==(Iterator& b)
{
	return this->value() == b.value();
}

template<typename T>
bool Iterator<T>::operator!=(Iterator& b)
{
	return this->value() == b.value();
}

#include "matrix.h"

// Основной конструктор
template<typename T>
matrix<T>::matrix(unsigned int n, unsigned int m)
{
	this->n = n;
	this->m = m;

	_matrix = new T* [n];

	for (int row = 0; row < n; row++)
	{
		_matrix[row] = new T[m];
	}
}

// Конструктор копирования
template<typename T>
matrix<T>::matrix(matrix<T>& matr)
{
	n = matr.get_n();
	m = matr.get_m();

	_matrix = new T * [n];

	for (int row = 0; row < n; row++)
	{
		_matrix[row] = new T[m];
	}

	for (int row = 0; row < matr.get_n(); row++)
	{
		for (int col = 0; col < matr.get_m(); col++)
		{
			this->set_elem(row, col, matr.get_elem(row, col));
		}
	}
}

// Деструктор
template<typename T>
matrix<T>::~matrix()
{
	for (int row = 0; row < n; row++)
	{
		delete[] _matrix[row];
	}

	delete [] _matrix;
}

// Получить количество строк
template<typename T>
unsigned int matrix<T>::get_n()
{
	return n;
}

// Получить количество столбцов
template<typename T>
unsigned int matrix<T>::get_m()
{
	return m;
}

// Проверить является ли матрица квадратной
template<typename T>
bool matrix<T>::is_square()
{
	return n == m;
}

// Установить значение элементу матрицы
template<typename T>
void matrix<T>::set_elem(unsigned int n, unsigned int m, T& elem)
{
	if (n < this->n && m < this->m)
		_matrix[n][m] = elem;
}

// Получить элемент матрицы по индексам
template<typename T>
T& matrix<T>::get_elem(unsigned int n, unsigned int m)
{
	return _matrix[n][m];
}

// Перегрузка оператора присваивания
template<typename T>
matrix<T>& matrix<T>::operator=(matrix<T>& matr)
{
	delete _matrix;

	n = matr.get_n();
	m = matr.get_m();

	_matrix = new T * [n];

	for (int row = 0; row < n; row++)
	{
		_matrix[row] = new T[m];
	}

	for (int row = 0; row < matr.get_n(); row++)
	{
		for (int col = 0; col < matr.get_m(); col++)
		{
			this->set_elem(row, col, matr.get_elem(row, col));
		}
	}

	return *this;
}

// Перегрузка оператора +=
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

template<typename T>
matrix<T>& matrix<T>::operator-=(matrix<T>& matr)
{
	for (int row = 0; row < matr.get_n(); row++)
	{
		for (int col = 0; col < matr.get_m(); col++)
		{
			_matrix.set_elem(row, col, this->get_elem(row, col) - matr.get_elem(row, col));
		}
	}

	return *this;
}

template<typename T>
T& matrix<T>::operator()(unsigned int i, unsigned int j)
{
	return this->get_elem(i, j);
}

template<typename _T>
matrix<_T> operator+(matrix<_T>& m1, matrix<_T>& m2)
{
	matrix<_T> tmp(m1);

	tmp += m2;

	return tmp;
}

template<typename _T>
matrix<_T> operator-(matrix<_T>& m1, matrix<_T>& m2)
{
	matrix<_T> tmp(m1);

	tmp -= m2;

	return tmp;
}

template<typename _T>
matrix<_T> operator*(matrix<_T>& m1, matrix<_T>& m2)
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
				sum += m1[i][p] * m2[p][j];
			}
			tmp[i][j] = sum;
		}
	}

	return tmp;
}

template<typename _T>
std::ostream& operator<<(std::ostream& os, matrix<_T>& matr)
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

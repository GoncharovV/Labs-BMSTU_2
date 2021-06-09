#include <iostream>

template<typename T>
class Iterator;

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

	unsigned int get_size();

	bool is_square();

	T* relese();

	void set_elem(unsigned int n, unsigned int m, T& elem);

	T& get_elem(unsigned int n, unsigned int m);

	T& get_elem(unsigned int inx);

	matrix<T>& operator=(matrix<T>& matr);

	matrix<T>& operator+=(matrix<T>& matr);

	matrix<T>& operator-=(matrix<T>& matr);

	template<typename _T>
	friend matrix<_T> operator +(matrix<_T>& m1, matrix<_T>& m2);

	template<typename _T>
	friend matrix<_T> operator -(matrix<_T>& m1, matrix<_T>& m2);

	template<typename _T>
	friend matrix<_T> operator *(matrix<_T>& m1, matrix<_T>& m2);

	template<typename _T>
	friend matrix<_T> operator +(matrix<_T>& m1, double num);

	template<typename _T>
	friend matrix<_T> operator -(matrix<_T>& m1, double num);

	template<typename _T>
	friend matrix<_T> operator /(matrix<_T>& m1, double num);

	template<typename _T>
	friend matrix<_T> operator *(matrix<_T>& m1, double num);

	template<typename _T>
	friend std::ostream& operator<<(std::ostream& os, matrix<_T>& matr);

	T& operator ()(unsigned int i, unsigned int j);

	Iterator<T> iterator_begin();

	Iterator<T> iterator_end();

private:
	unsigned int n, m;
	unsigned int size;

	T *_matrix;
};

template<typename T>
class Iterator
{
public:

	Iterator<T>(matrix<T>& matr);

	Iterator next();

	T value();

	unsigned int get_size();

	bool is_end();

	Iterator operator++();

	T& operator*();

	bool operator==(Iterator& b);

	bool operator!=(Iterator& b);

private:
	matrix<T>* matr;

	T* currentValue;

	unsigned int inx;
	unsigned int size;
};
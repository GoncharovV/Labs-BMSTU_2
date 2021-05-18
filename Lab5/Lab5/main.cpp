#include "matrix.cpp"

using namespace std;

int main()
{
	matrix<int> matr1(5, 5);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			matr1.set_elem(i, j, j);
		}
	}

	matrix<int> matr2(5, 5);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			matr2.set_elem(i, j, i);
		}
	}

	//matrix<int> matr3(matr);

	//matr1 = matr1 + matr2;

	matrix<int>::Iterator it(matr1);

	

	//Iterator<int> it(matr1);

	cout << matr1;

	cout << endl; 

	cout << matr2;

}
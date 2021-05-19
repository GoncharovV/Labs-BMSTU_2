#include "matrix.cpp"

using namespace std;

int main()
{
	matrix<int> matr1(5, 5);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int x = (rand() % 10);
			matr1.set_elem(i, j, x);
		}
	}

	cout << "Simple constructor" << endl;
	cout << matr1;
	cout << endl;

	matrix<int> matr2{ {1,2,3}, {4,5,6}, {7,8,9} };
	cout << "Initializer_list" << endl;
	cout << matr2;
	cout << endl;

	matrix<int> matr3(matr2);
	cout << "Copy" << endl;
	cout << matr3;
	cout << endl;

	matr1 = matr3;
	cout << "matr1 = matr3" << endl;
	cout << matr1;
	cout << endl;

	matr1 -= matr3;
	cout << "matr1 -= matr3" << endl;
	cout << matr1;
	cout << endl;
	
	for (auto it = matr1.iterator_begin(); !it.is_end(); ++it)
	{
		*it = rand() % 10;
	}
	cout << "matr1 after iterating" << endl;
	cout << matr1;
	cout << endl;


	matrix<int> matr4 = matr1 + matr2;

	cout << matr4;
	cout << endl;

	matrix<int> matr5 = matr1 * 10;

	cout << matr4;

}
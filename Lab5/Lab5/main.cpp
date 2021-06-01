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
	cout << "Copy Constructor (matr2 to matr3)" << endl;
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


	matrix<int> matr4 = matr1 + matr3;
	cout << "matr4 = matr1 + matr3" << endl;
	cout << matr4;
	cout << endl;

	matrix<int> matr5 = matr1 + 200;
	cout << "matr5 = matr1 + 100" << endl;
	cout << matr5;
	cout << endl;

	matrix<int> matr6 = matr1 * 10;
	cout << "matr6 = matr1 * 10" << endl;
	cout << matr6;
	cout << endl;



	try
	{
		matr4.get_elem(48190); 
	}
	catch (OutOfRange& error)
	{
		cout << error.what() << endl;
	}

	try
	{
		matr4.get_elem(48190);
	}
	catch (SegmentationFault& error)
	{
		cout << error.what() << endl;

	}
	catch (exception& err)
	{
		cout << "Catched with default exception class: " << err.what() << endl;
	}


	try
	{
		matr4.relese();
		matr4.get_elem(1);
	}
	catch (SegmentationFault& error)
	{
		cout << error.what() << endl;

	}

}
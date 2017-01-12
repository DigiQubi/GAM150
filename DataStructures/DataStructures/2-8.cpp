#include <iostream>
using namespace std;

// server
void For_each(int * begin, int * end, void(*pf)(int))
{
	while (begin != end)
	{
		pf(*begin++); // callback
	}
}

// client
void Print1(int n)
{
	cout << n << ' ';
}

void Print2(int n)
{
	cout << n*n << " ";
}

void Print3(int n)
{
	cout << "Integer : " << n << endl;
}

int main(void)
{
	int arr[5] = { 10,20,30,40,50 };

	For_each(arr, arr + 5, Print1);
	cout << endl << endl;

	For_each(arr, arr + 5, Print2);
	cout << endl << endl;

	For_each(arr, arr + 5, Print3);
	return 0;
}
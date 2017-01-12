#include <iostream>
#include <algorithm>
using namespace std;

// client
struct Functor1
{
	void operator() (int n)
	{
		cout << n << " ";
	}
};

struct Functor2
{
	void operator() (int n)
	{
		cout << n*n << " ";
	}
};

struct Functor3
{
	void operator() (int n)
	{
		cout << "Integer: " << n << endl;
	}
};

int main(void)
{
	int arr[5] = { 10,20,30,40,50 };

	for_each(arr, arr + 5, Functor1());
	cout << endl << endl;

	for_each(arr, arr + 5, Functor2());
	cout << endl << endl;

	for_each(arr, arr + 5, Functor3());
	cout << endl << endl;

	return 0;
}
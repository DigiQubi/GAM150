#include <iostream>
using namespace std;

void Print()
{
	cout << "static function" << endl;
}

void Print(int a, int b)
{
	cout << "Static function: " << a << ',' << b << endl;
}

struct Functor
{
	void operator() ()
	{
		cout << "Function Object" << endl;
	}
	void operator()(int a, int b)
	{
		cout << "Function: " << a << ',' << b << endl;
	}
};

int main(void)
{
	Functor functor;

	Print(10, 20);
	functor(10, 20);

	return 0;
}
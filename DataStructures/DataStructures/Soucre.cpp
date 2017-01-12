#include <iostream>
using namespace std;

void Print(int n)
{
	cout << "Static Print: " << n<< endl;
}

namespace A
{
	void Print(int n)
	{
		cout << "namespace A static Print: " << n << endl;
	}
}

class Point
{
public:
	static void Print(int n)
	{
		cout << "Point class Static Member Print()"<< n << endl;
	}
};

int main(void)
{
	void(*pf)(int);
	
	Print(10);
	A::Print(10);
	Point::Print(10);

	pf = Print;
	pf(10);
	pf = A::Print;
	pf(10);
	pf = Point::Print;
	pf(10);
	return 0;
}
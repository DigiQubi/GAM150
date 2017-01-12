#include <iostream>
using namespace std;
class Equal
{
public:
	bool operator()(int a, int b)
	{
		return a == b;
	}
};

class Adder
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

int main(void)
{
	Adder add;

	int sum = add(10, 20);
	cout << "sum= " << sum << endl;

	return 0;
}
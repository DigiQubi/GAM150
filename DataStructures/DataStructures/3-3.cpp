#include <iostream>
using namespace std;

int Get(int n)
{
	static int a = 0;
	
	if (n == 0)
		return 0;
	return a++ + Get(n-1);
}

class Adder
{
	int total;
public:
	explicit Adder(int n=0):total(n){}
	int operator()(int n)
	{
		return total += n;
	}
};


int main(int argc, char* argv[])
{
	Adder add(0);

	cout << add(10) << endl;
	cout << add(20) << endl;
	cout << add(30) << endl;
	cout << Get(10) << endl;
	return 0;
}
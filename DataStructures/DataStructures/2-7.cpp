#include <iostream>
using namespace std;
void Client();

//Server
void PrintHello()
{
	cout << "Hello!" << endl;
	Client(); //callback
}

//Client
void Client()
{
	cout << "client" << endl;
}

int main()
{
	PrintHello();
	return 0;
}
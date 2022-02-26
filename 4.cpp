// initialization of variables 

#include <iostream>
using namespace std;

int main()
{
	int foo = 0;
	auto bar = foo;
	decltype(foo) yosi;
	yosi = 9;
	cout << yosi;
	cout << bar;
	return 0;
}

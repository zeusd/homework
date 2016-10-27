#include <iostream>
#include <cmath>

using namespace std;

double area(int r){

	double pi=3.14159265;

	return pi*r*r; //If I was not as lazy and it reqired a more complex equation, it could be done more elegantly, buuuuuuut ¯\_(ツ)_/¯
}

int main ()
{
	int r;

	cin >> r;
	cout << area(r) << endl;

	return 0;
}
#include <iostream>
// #include <stdio.h>  using for "printf"
#include <cmath> // using for c++ math
using namespace std;

double func(double p, double y){
	double num = pow(sin(p + 0.25), 2);
	double den = pow(y, 2) + 7.32 * p;
	double result = num / den;
	return result;
}

int main(){

	double p, y;

	cout << "Enter p: " << endl;
	cin >> p;

	cout << "Enter y: " << endl;
	cin >> y;

	cout << "Your result: " << func(p, y) << endl;

	return 0;
}
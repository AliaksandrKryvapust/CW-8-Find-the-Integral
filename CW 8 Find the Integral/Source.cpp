#include<iostream>
#include <string>
using namespace std;

string integrate(const int& coefficient, const int& exponent) {
	return to_string(coefficient / (exponent + 1)) + "x^" + to_string(exponent + 1);
}
int main() {
	int coef = 3;
	int exp = 2;
	integrate(coef, exp);
	return 0;
}
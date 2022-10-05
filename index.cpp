#include <iostream>
#include <string>
#include <cmath>
//pow() возведение к степени

int operations(int num1, int num2) {
	int division = num1 % num2;
	return pow(division, 4);
}

#include "test.h"
#include "../index.h"
#include "termcolor.hpp"

#include <iostream>
#include <string>

using namespace std;

void test() {
	struct Option {
			long toBe;
			int num1;
			int num2;
	};

	Option options[] = {
			{
					625,
					25,
					10
			},
			{
					0,
					6,
					2
			},
			{
					2085136,
					80,
					42
			},
			{
					6561,
					120,
					111
			},
			{
					0,
					180,
					4
			}
	};

	int optionsLength = sizeof(options) / sizeof(options[0]);

	for (int i = 0; i < optionsLength; i++) {
		Option option = options[i];

		long result = operations(option.num1, option.num2);

		cout << endl;

		if (result == options[i].toBe) {
			cout << termcolor::green << "TEST " << "\"" << options[i].num1 << " " << options[i].num2 << "\"" << " PASSED! RESULT: " << result;
		} else {
			cout << termcolor::red << "TEST " << "\"" << options[i].num1 << " " << options[i].num2 << "\"" << " FAILED! EXPECTED \"" << options[i].toBe << "\" INSTEAD OF " << "\"" << result << "\"!";
		}

		cout << endl;
	}
}
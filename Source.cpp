/*
Author: Ammar Ahmed
*/

#include <iostream>

using namespace std;

bool is5(int num) {

	if (num % 5 == 0) {
		return true;
	}
	return false;
}

bool is3(int num) {
	if (num % 3 == 0) {
		return true;
    }
	return false;
}

void calculate() {
	int i, sum = 0;
	for (i = 1; i < 1000; i++) {
		if (is5(i) || is3(i)) {
			sum = sum + i;
		}
	}
	cout << "The sum of multiples of 3 and 5 between " << 1 << " and " << 10 << " is: " << sum << endl;
}
int main() {
	calculate();
	cout << endl;
	system("PAUSE");
	return 0;
}

#include <iostream>
using namespace std;
int main() {

	float a, b;
	string sign;
	cout << "Give number a: ";
	cin >> a;
	cout << "Give number b: ";
	cin >> b;

	cin >> "Enter sign: ";

	if (sign == "+") {
		cout << a << sign << b << "=" << a + b;
	}
	else if (sign == "-") {
		cout << a << sign << b << "=" << a - b;
	}
	else if (sign == "*") {
		cout << a << sign << b << "=" << a * b;
	}
	else if (sign == "/") {
		cout << a << sign << b << "=" << a / b;
	}
	else {
		cout << "Something is wrong :(";
	}
}
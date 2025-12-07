#include <iostream>
#include <math.h>
using namespace std;

int main() {

	bool loop = true;
	int i = 0;
	cout << "Enter a number: ";
	// cin >> a;
	while (loop && i < 200) {
		i++;
		if (i % 2 == 0) {
			continue;
		}
		else {
			cout << i << endl;
		}
	}
}
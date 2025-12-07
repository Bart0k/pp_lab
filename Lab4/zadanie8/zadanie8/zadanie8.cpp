#include <iostream>
using namespace std;

int even(int n) {
	return n / 2;
}
int odd(int n) {
	n = n - 1;
	return n / 2;
}

int main()
{
	int n;
	for (int i = 0; i <= 100; i++) {
		n = i;
		if (n % 2 == 0) {
			int even_res = even(n);
			cout << even_res<<endl;
		}
		else {
			int odd_res = odd(n);
			cout << odd_res << endl;
		}
	}

}

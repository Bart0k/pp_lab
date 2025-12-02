#include <iostream>
using namespace std;

int n = 0; int m = 0;

int counter(int n, int m) {
	//counter(n,m,int sum);
	int  sum = 0;
	for (int i = 0; i < m; i++) {
		cout << "Enter an intiger number: ";
		cin >> n;
		sum += n;
	}
	return sum;
}
int main()
{
	//int n;
	cout << "Enter a number: ";
	cin >> m;
	int result = counter(n, m);
	cout << "The total sum of given numbers is: " << result;
	//counter(n,m);
	

}


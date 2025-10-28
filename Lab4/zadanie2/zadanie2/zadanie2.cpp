#include <iostream>
using namespace std;

void check(int n);

int main()
{
    int n;
    cout << "Enter number N: ";
    cin >> n;
    check(n);
}
void check(int n) {
    for (int i = 1; i <= 100; i++) {
        if (n % i == 0) {
            cout << i << endl;
        }
        else {
            continue;
        }
    }
}
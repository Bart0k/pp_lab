#include <iostream>
using namespace std;
int result = 1;
int power(int a, int b, int result) {
    for (int i = 0; i < b; i++) {
        result = result * a;
    }
    return result;
}
int main()
{
    int a, b;
    cout << "Enter the numebr of base: ";
    cin >> a;
    cout << "Enter the number of exponent: ";
    cin >> b;
    result = power(a, b, result);
    cout << result;
}


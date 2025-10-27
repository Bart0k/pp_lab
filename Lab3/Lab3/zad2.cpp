#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Give number A: ";
    cin >> a;
    cout << "Give number B: ";
    cin >> b;

    if (a == b) {
        cout << a << "=" << b << endl;
        cout << "A is equal to B";
    } else {
        if (a > b) {
            cout << a << ">" << b << endl;
            cout << "A is greater than B";
        }
        else {
            cout << a << "<" << b << endl;
            cout << "B is greater than A";
        }
    }
}
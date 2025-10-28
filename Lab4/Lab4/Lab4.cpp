#include <iostream>
using namespace std;

void great(int a, int b);

int main()
{
    int a, b;
    cout << "Enter number A: ";
    cin >> a;
    cout << "Enter number B: ";
    cin >> b;
    great(a, b);

}
void great(int a, int b) {
    //int c;
    if (a > b) {
        cout << "A is greater than B";
    }
    else if (a < b) {
        cout << "B is greater than A";
    }
    else {
        cout << "Numbers are equal";
    }
}


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
        cout << "A is equal to B";
    }
    else if (a > b) {
        cout << "A is greater than B";
    }
    else {
        cout << "B is greater than A";
    }
}

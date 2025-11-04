#include <iostream>
using namespace std;

int main()
{
    int tab[10];

    cout << "Enter 5 numbers: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "\nNumber " << i + 1 << ": ";
        cin >> tab[i];

    }
    cout << "Given numbers: \n";
    for (int i=0; i < 10; i++) {
        cout << tab[i] << endl; 

    }
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int tab[10];
    for (int i = 0; i < 10; i++) {
        int new_number;
        cout << "Enter a number: ";
        cin >> new_number;
        tab[i] = new_number;
        cout << "Number " << new_number << " has been added to the table!\n";
    }
    cout << "Your table: [ ";
    for (int i = 0; i < 10; i++)
        cout << tab[i] << " "; cout << "]" << endl;
    int n = sizeof(tab) / sizeof(tab[0]);
    sort(tab, tab + n);

    cout << "Your sorted table: [ ";
    for (int i = 0; i < 10; i++)
        cout << tab[i] << " "; cout << "]";


}

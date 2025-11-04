#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number n: ";
    cin >> n;
    int* tab = new int[n];
    tab[0] = 0;
    tab[1] = 1;
    cout << tab[0] << endl << tab[1] << endl;
    for (int i = 2; i < n; i++) { 
        
        tab[i] = tab[i - 1] + tab[i - 2];
        cout << tab[i] << endl;

    }
}


#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    float k=0;
    int tab[10]{};
    //int n = rand() % 10;
    for (int i = 0; i < 10; i++) {
        int n = rand() % 10;
        tab[i] = n;
        cout << tab[i] << endl;
        //k = tab[i];
        k = k + tab[i];      
    }
    
    cout << "Sum: " << k << endl;
    k = k / 10;
    cout << "Mean: " << k << endl;
    for (int i = 0; i < 10; i++) {
        if (tab[i] < k) {
            cout << tab[i] << " is less than mean" << endl;
        }
        else {
            continue;
        }
    }
   
}

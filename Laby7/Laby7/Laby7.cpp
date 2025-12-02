#include <iostream>
using namespace std;

int choinka(int n) {
    if (n == 0) return 0;
    else {
        choinka(n - 1);
        for (int j = -1; j < n; j++) {
            cout << " ";
        }
        for (int i = 0; i < n; i++) {
            cout << "*";      
    }
        cout << endl;

    }
    
}
int main()
{
    int n;
    cout << "Enter numebr n: ";
    cin >> n;
    choinka(n);
    
}



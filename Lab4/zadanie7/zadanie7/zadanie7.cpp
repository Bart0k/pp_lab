#include <iostream>
#include <ctime>
using namespace std;

int generator(int number, int tab[11]) {
    int n=0;
    for (int i = 0; i <= 10; i++) {
        int random_number = rand() % 10 + 1;
        tab[i] = random_number;
        if (random_number == number) {
            n += 1;
        }
        cout << tab[i]<<" ";
    }
    return n;
}
int main()
{
    int number; int tab[11];
    int sec = time(NULL);
    srand(sec);

    cout << "Enter a random number from 1 to 10: ";
    cin >> number;
    int result = generator(number,tab);
    cout << "\nYour number " << number << " appeared " << result << " times!";
}


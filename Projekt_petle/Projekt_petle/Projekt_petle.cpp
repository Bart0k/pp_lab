#include <iostream>
#include <stdio.h>
using namespace std;
//int main()
//{
//    for (int i = 10; i <= 10; i++) {
//        cout << i << endl;
//        i = i++;
//    }
//    return 0;
//}

//zad 6

//int main() {
//   int fahr, celsius; 
//    int start, limit, krok; 
//    start = 0;
//    cout << "Enter the limit: ";
//   cin >> limit; 
//    cout << "Enter the step: ";
//    cin >> krok;
//    for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)  
//    {
//        float celsius = (5.0 / 9.0) * (fahr - 32.0);
//     cout << fahr << "\t" << celsius << endl;
//  }

//	}

//zad 7 ale zapomnialem i przez przypadek zamiast czy dodatnia sprawdza czy parzysta

//int main() {
//	int n;
//	for (int i = 0; i < 10; i++) {
//		cout << "Give a number: ";
//		cin >> n;
//		if (n % 2 == 0) {
//			cout << n << endl;
//		}
//		else {
//			continue;
//		}
//	}
//
//}

//zad 7

//int main() {
//	int n;
//	for (int i = 0; i < 10; i++) {
//		cout << "Give a number: ";
//		cin >> n;
//		if (n>0) {
//			cout << n << endl;
//		}
//		else {
//			continue;
//		}
//	}
//
//}

//zad_8

//int main() {
//	for (int i=0; i<=100; i++)
//		if (i % 2 == 0) {
//			cout << i << endl;
//		}
//		else {
//			continue;
//		}
//
//}

//zad 9 i 10

int main() {
	int n, m=0;
	cout << "Give a number: ";
	cin >> n;
	if (n == 0) {
		cout << "You cannot divide by 0!" << endl;
	}
	for (int i = 0; i <= 100; i++) {
		if (i % n == 0) {
			cout << i << endl;
			m = m++;
		}
		else {
			continue;
		}
	}
	cout << "Your number divides by " << m << " times in range [1;100]" << endl;
}

#include <iostream>
using namespace std;
int main() {
	
	float r;
	cout << "Give R:";
	cin >> r
		if (0.7 <= r && r <= 1) {
			cout << "Very strong positive corelation";
		}
		else if (r >= 0.5 && r < 0.7) {
			cout << "Strong positive corelation";
		}
		else if (r >= 0.3 && r < 0.5) {
			cout << "Medium positive corelation";
		}
		else if (r >= 0.2 && r < 0.3) {
			cout << "Weak positive corelation";
		}
		else {
			cout << "No corelation";
		}
}
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n % 4 != 0) {
		cout << "No";
	}
	if ((n + 1) % 4 != 0) {
		cout << "No";
	}
	else {
		cout << "Yes" << endl;
		if (n % 4 == 0)
		{
			cout << n / 2 << endl;
			for (int i = 1; i <= (n - i); i += 2) {
				cout << i << " " << n + 1 - i << " ";
			}
			cout << endl;
			cout << n / 2 << endl;
			for (int i = 2; i <= (n - i); i += 2) {
				cout << i << " " << n + 1 - i << " ";
			}
		}
		else {
			cout << (n / 2) + 1 << endl;
			for (int i = 1; i <= (n - i - 1); i += 2) {
				cout << i << " " << n - i << " ";
			}
			cout << endl;
			cout << n / 2 << endl;
			for (int i = 2; i <= (n - i - 1); i += 2) {
				cout << i << " " << n - i << " ";
			}
			cout << n;
		}
	}
} 

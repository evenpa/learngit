#include <iostream> 
using namespace std;
int n = 1, m = 1, a = 0,b = 0;
int main() {
	while (n <=16) {
		while (m <=16) {
			a = n;
			b = m * 2;
			if (b>=(16-a)&&b<(16+a))
				cout << "*";
			else
				cout << " ";
			++m;
		}
		cout << endl;
		m = 1;
		n += 2;
	}
	return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
int log_count(long double val_1, long double val_2) {
	return log(val_2) / log(val_1);
}
int main() {
    long double a, b;
	cin >> a >> b;
	cout << log_count(a, b);
	return 0;

}
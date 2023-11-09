#include<iostream>
using namespace std;
int fibonacci(int val) {
	if (val == 1 || val == 2)
		return 1;
	else
		return fibonacci(val - 1) + fibonacci(val - 2);
}
int main() {
	int n;
	cin >> n;
	int test;
	while (n--) {
		cin >> test;
		cout << fibonacci(test) << endl;

}
	return 0;

}
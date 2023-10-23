#include <iostream> 
using namespace std;
int number, n=0, last_number;
int main() {
cin >> number;
do {
	last_number = number % 10;
	number /= 10;
	cout << last_number;
	n += 1;
} while (number > 0);
cout <<"该数的位数为：" << n << endl;
return 0;
}

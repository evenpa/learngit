#include<iostream>
#include<math.h>
using namespace std;
double a, b, c, delta,x_1,x_2;
int main() {
	cin >> a >> b >> c;
	if (a) {
		delta = b * b - 4 * a * c;
		if (delta > 0) {
			cout << "��������ͬʵ��" << endl;
			x_1 = (-b + sqrt(delta)) / 2 * a;
			x_2 = (-b - sqrt(delta)) / 2 * a;
			cout << "x_1=" << x_1 << "x_2=" << x_2;
		}
		else if (delta == 0) {
			cout << "��������ͬʵ��" << endl;
			cout << "x_1=x_2=" << -b / 2 * a;
		}
			
		else
			cout << "��ʵ��";
	}	
	else
	cout << "a����0";

	return 0;


}

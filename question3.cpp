#include <iostream> 
using namespace std;
int number, remainder_number=0;
int main(){
	cin >> number;
	remainder_number = number % 7;
	switch (remainder_number) {
	case 1:
		cout << "星期一" << endl;
		break;
	case 2:
		cout << "星期二" << endl;
		break;
	case 3:
		cout << "星期三" << endl;
		break;
	case 4:
		cout << "星期四" << endl;
		break;
	case 5:
		cout << "星期五" << endl;
		break;
	case 6:
		cout << "星期六" << endl;
		break;
	case 0:
		cout << "星期天" << endl;
		break;
	}
	return 0;

}
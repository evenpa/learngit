#include <iostream> 
using namespace std;
int number, remainder_number=0;
int main(){
	cin >> number;
	remainder_number = number % 7;
	switch (remainder_number) {
	case 1:
		cout << "����һ" << endl;
		break;
	case 2:
		cout << "���ڶ�" << endl;
		break;
	case 3:
		cout << "������" << endl;
		break;
	case 4:
		cout << "������" << endl;
		break;
	case 5:
		cout << "������" << endl;
		break;
	case 6:
		cout << "������" << endl;
		break;
	case 0:
		cout << "������" << endl;
		break;
	}
	return 0;

}
#include<iostream>
using namespace std;
int player = 0, computer = 0, result,choice=1;
int main() {
	do {
		computer = rand() % 3;
		cout << "���������Կ�ʼ��Ϸ��0Ϊʯͷ��1Ϊ������2Ϊ��";
		cin >> player;
		if (player <= 1 || player >= 3) {
			cout << "��������ȷ�����֣�";
			continue;
		}
		result = player - computer;
		switch (result) {
		case 0:
			cout << "ƽ�֣�";
			break;
		case 1:case -2:
			cout << "�����ˣ�";
			break;
		case -1:case 2:
			cout << "��Ӯ�ˣ�";
			break;
		}
		if (result == 0)
			continue;
		else {
			cout << "�Ƿ������Ϸ������1�Լ�������������������������Ϸ";
			cin >> choice;
		}
			
			
	}while(choice==1);
	return 0;
}
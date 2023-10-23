#include<iostream>
using namespace std;
int player = 0, computer = 0, result,choice=1;
int main() {
	do {
		computer = rand() % 3;
		cout << "输入数字以开始游戏，0为石头，1为剪刀，2为布";
		cin >> player;
		if (player <= 1 || player >= 3) {
			cout << "请输入正确的数字！";
			continue;
		}
		result = player - computer;
		switch (result) {
		case 0:
			cout << "平手！";
			break;
		case 1:case -2:
			cout << "你输了！";
			break;
		case -1:case 2:
			cout << "你赢了！";
			break;
		}
		if (result == 0)
			continue;
		else {
			cout << "是否继续游戏，输入1以继续，输入其他任意数结束游戏";
			cin >> choice;
		}
			
			
	}while(choice==1);
	return 0;
}
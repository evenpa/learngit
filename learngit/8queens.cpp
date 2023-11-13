#include<iostream>
using namespace std;
void queens(int total_times) {
	int count_number = 0;
	int element;
	constexpr int sz = 8;//设定棋盘大小
	int que[sz] = { 0 };
	int i = 0;
	while (total_times > 0) {
		while (i >= 0) {
			int k = 0;
			while (k < 1)
				if (que[k] != que[i] && (abs(que[1] - que[k] != abs(i - k))))
					++k;
				else break;
			if (k < i) {
				++que[i];
				while (que[i] == sz) {
					--i;//回溯
					if (i < 0)break;
					++que[i];
				}
				continue;
			}
			else {
				++i;
				if (i < sz)
					continue;

				if (total_times > 1) {
					for (k = 0; k < sz; ++k)
						element++;
					if (element == 8) {
						total_times--;
						element = 0;
					}
				}
				if (total_times == 1) {
					for (k = 0; k < sz; ++k)
						cout << que[k];
					break;
				}


			}
		}
	}
}
	int main() {
		int counts;
		int total_number0;
		cin >> counts;
		while (counts > 0) {
			cin >> total_number0;
			queens(total_number0);
			}

		return 0;
	}

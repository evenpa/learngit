#include<iostream>
#include<string>
using namespace std;
int n;//学生总数
char western, leader;
int grade=0, average=0, paper_count=0, boun=0, bouns=0;
string name, best_student;
int heighest = 0;//储存最高奖学金金额
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name >> grade >> average >> leader >> western >> paper_count;
		if (grade > 80 && paper_count > 0) {
			boun += 8000;
			bouns += 8000;
		}
		if (grade > 85 && average > 80) {
			boun += 4000;
			bouns += 4000;
		}
		if (grade > 90) {
			boun += 2000;
			bouns += 2000;
		}
		if (grade > 85 && western == 'Y') {
			boun += 1000;
			bouns += 1000;
		}
		if (average > 80 && leader == 'Y') {
			boun += 850;
			bouns += 850;
		}
		if (boun > heighest) {
			heighest = boun;
			best_student = name;
		}
		boun = 0;
	}
	cout << best_student << endl;
	cout << heighest << endl;
	cout << bouns;
	return 0;
}

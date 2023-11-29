#include<iostream>
#include<string>
using namespace std;

static int counts = 0;
class Student
{
private:
	string name;
	int Class;
	int id;
	int score;


public:
	void get_infor()//迭代获取学生信息；
	{
		cin >> name;
		if (name != "end")
		{
			cin >> Class;
			cin >> id;
			cin >> score;
			divide();
			counts += 1;
			get_infor();
		}
		else
		{
			cout << "一共输入了" << counts << "个学生" << endl;
		}
	}
	void divide()
	{
		if (score >= 90)
		{
			cout << name << "成绩为A" << endl;
		}
		else if (score < 90 && score >= 70)
		{
			cout << name << "成绩为B" << endl;
		}
		else if (score < 70 && score >= 60)
		{
			cout << name << "成绩为C" << endl;
		}
		else
		{
			cout << name << "成绩为D" << endl;
		}
	}

};
int main()
{
	cout << "请输入学生数据，以end结束" << endl;
	Student b;
	int a = 0;
	b.get_infor();
	return 0;
}
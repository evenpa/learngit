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
	void get_infor()//������ȡѧ����Ϣ��
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
			cout << "һ��������" << counts << "��ѧ��" << endl;
		}
	}
	void divide()
	{
		if (score >= 90)
		{
			cout << name << "�ɼ�ΪA" << endl;
		}
		else if (score < 90 && score >= 70)
		{
			cout << name << "�ɼ�ΪB" << endl;
		}
		else if (score < 70 && score >= 60)
		{
			cout << name << "�ɼ�ΪC" << endl;
		}
		else
		{
			cout << name << "�ɼ�ΪD" << endl;
		}
	}

};
int main()
{
	cout << "������ѧ�����ݣ���end����" << endl;
	Student b;
	int a = 0;
	b.get_infor();
	return 0;
}
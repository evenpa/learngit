#include<iostream>
using namespace std;
class Triangle {
public:
	void set_Triangle(float lin_1,float lin_2,float lin_3);
	void judgement();
private:
	float D_1, D_2, D_3;
};
void Triangle::set_Triangle(float lin_1, float lin_2, float lin_3){
	D_1 = lin_1;
	D_2 = lin_2;
	D_3 = lin_3;
}
void Triangle::judgement() {
	if (D_1 == D_2 == D_3)
		cout << "��������Ϊ�ȱ�������" << endl;
	else if (D_1 == D_2 || D_1 == D_3 || D_2 == D_3)
		cout << "��������Ϊ����������" << endl;
	else
		cout << "��������Ϊ���ȱ�������" << endl;
}
int main() {
	float L1 = 0, L2 = 0, L3 = 0;
	cin >> L1 >> L2 >> L3;
	Triangle myTriangle;
	cout << "������һ�������ζ���" << endl;
	myTriangle.set_Triangle(L1,L2,L3);
	myTriangle.judgement();
	return 0;
}
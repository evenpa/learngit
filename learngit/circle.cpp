#include<iostream>
using namespace std;
class Circle {
public:
	void set_circle(float radius);
	void get_area_perimeter();
private:
	float Ra, PI = 3.141592;
	
};
void Circle::set_circle(float radius) {
	Ra = radius;
}
void Circle::get_area_perimeter() {
	cout << "该圆面积为" << PI * Ra * Ra << endl;
	cout << "该圆周长为" << 2 * PI * Ra << endl;
}
int main() {
	float R = 0;
	cin >> R;
	Circle mycircle;
	cout << "创建了一个圆对象" << endl;
	mycircle.set_circle(R);
	mycircle.get_area_perimeter();
	return 0;
}
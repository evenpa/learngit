#include<iostream>
#include<math.h>
using namespace std; 
class Point {
public:
	void init_point(float x = 0, float y = 0) {
		this->x = x; this->y = y;
	}
	void move(float moveX,float moveY) {
		x += moveX; y += moveY;
	}
	float get_x()const {
		return x;
	}
	float get_y()const {
		return y;
	}
private:
	float x, y;
};
class Rectangle :public Point {
public:
	void init_rectangle(float x, float y,float a,float b){
		init_point(x, y);
		this->a = a;
		this->b = b;
	}
	float get_a() { 
		return a;
	}
	float get_b() { 
		return b;
	}
	float get_square() {
		return abs((get_x() - a) * (get_y() - b));
	}
	float get_perimeter() {
		return 2 * (abs(get_x() - a) + abs(get_y() - b));
	}
private:
	float a, b;
};
int main() {
	Rectangle my_rectangle;
	my_rectangle.init_rectangle(1, 2, 3, 4);
	my_rectangle.move(1, 4);
	cout << "四边形面积为" << my_rectangle.get_square() << endl;
	cout << "四边形周长为" << my_rectangle.get_perimeter() << endl;
	cout << my_rectangle.get_x() << "，" << my_rectangle.get_y() << ";" << my_rectangle.get_a() << "，" << my_rectangle.get_b() << endl;
	return 0;

}
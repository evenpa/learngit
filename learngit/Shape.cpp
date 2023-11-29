#include<iostream>
using namespace std;
const double PI = 3.141592;
class Shape {
public:
    Shape() {};
    virtual ~Shape() {};
    virtual void calculate_area() const = 0;
    virtual void calculate_perimeter() const = 0;
};
class Rectangle : public Shape {
public:
    Rectangle(double a1, double a2) :Shape() {
        a = a1;
        b = a2;
    }
    ~Rectangle() {};
    void calculate_area() const {
        cout << "面积为：" << a * b << endl;
    }
    void calculate_perimeter() const {
        cout << "周长为：" << 2 * (a + b) << endl;
    }
private:
            double a, b;
    };
class Triangle : public Shape {
public:
    Triangle(double a1, double a2) :Shape() {
        a = a1;
        b = a2;
    }
    ~Triangle() {}
    void calculate_area() const {
        cout << "面积为：" << a * b * 0.5 << endl;
    }
    void calculate_perimeter() const {
        cout << "周长为：" << (a + b) + sqrt(a * a + b * b) << endl;
    }
private:
    double a, b;
};
class Circle : public Shape {
public:
    Circle(double a1) :Shape() {
        a = a1;
    }
    ~Circle() {}
    void calculate_area() const {
        cout <<"面积为：" << PI * a * a << endl;
    }
    void calculate_perimeter() const {
        cout << "周长为：" << 2 * a * PI << endl;
    }
private:
    double a;
};
int main() {
    Shape* shape1 = new Rectangle(2, 4);
    Shape* shape2 = new Triangle(2, 4);
    Shape* shape3 = new Circle(4);
    cout << "创建shape1为四边形" << endl;
    shape1->calculate_area();
    shape1->calculate_perimeter();
    cout << "创建shape2为三角形（直角）" << endl;
    shape2->calculate_area();
    shape2->calculate_perimeter();
    cout << "创建shape3为圆形" << endl;
    shape3->calculate_area();
    shape3->calculate_perimeter();
    return 0;
}
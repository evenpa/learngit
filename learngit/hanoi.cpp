#include<iostream>
using namespace std;
void move(char X, int n, char Z) {
	cout << n << ":" << X << "->" << Z << endl;
}
	void hanoi(int n, char x, char y, char z){
		if (n == 1)
			move(x, 1, z);
		else {
			hanoi(n - 1, x, z, y);
			move(x, n, z);
			hanoi(n - 1, y, x, z);
		}
	}
int main(){
	int n = 0;
	char A,B,C;
	cin >> n >> A >> B >> C;
	hanoi(n,A,B,C);
	return 0;
}
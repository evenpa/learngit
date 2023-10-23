#include <iostream>
using namespace std;
int fun(int number) {
	int factor = 2;
	for (factor = 2; factor * factor <= 300; factor++)
		if (number % factor==0)return 0;
	return 1 ;
}
int main() {
	int i=200;
	for (i = 200; i <= 300; i++)
		if (fun(i))
			cout << i << endl;
	return 0;
	
}
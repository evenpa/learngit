#include<iostream>
#include<string>
using namespace std;
void letter_swap(string sentence) {
	
	for (char i:sentence){
		if (i <= 90 && i >= 65)
			cout << char(i + 32);
		else if (i >= 97 && i <= 122)
			cout << char(i - 32);
		else
			cout << i;
	}

}
int main() {
	string s;
	getline(cin, s);
	letter_swap(s);
	return 0;

	
}

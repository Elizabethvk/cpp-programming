#include <iostream>
using namespace std;

int main() {
	//char c = 'a';
	cout << "char" << '\t' << "int value\n";
	
	for (char m = 'A'; m <= 'Z'; ++m) {
		cout << m << '\t' << int(m) << '\n';
	}
	
	for (char c = 'a'; c <= 'z'; ++c) {
		cout << c << '\t' << int(c) << '\n';
	}
	
	for (char n = '0'; n <= '9'; ++n) {
		cout << n << '\t' << int(n) << '\n';
	}
	
	/*while (c <= 'z'){
		cout << c << '\t' << int(c) << '\n' ;
		++c;
	}*/
}

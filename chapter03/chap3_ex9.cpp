#include <iostream>

using namespace std;

int main() {
	cout << "4islo mi dai s dumi: \n";
	string n;
	cin >> n;
	
	if (n == "one")
		cout << n << " e 1";
	else if (n == "two")
		cout << n << " e 2";
	else if (n == "three")
		cout << n << " e 3";
	else if (n == "four")
		cout << n << " e 4";
	else if (n == "zero")
		cout << n << " e 0";
	else
		cout << n << " tui 4islo nz koe e tbh, shtot dotuk ma nauchiha, sori maikal";
}

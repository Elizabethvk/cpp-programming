
#include <iostream>

using namespace std;

int main() {
	cout << "3 4isla mi dai: \n";

	string n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	if (n1 >= n2 && n1 >= n3)
		if (n2 >= n3)
			cout << n1 << " " << n2 << " " << n3; 
		else
			cout << n1 << " " << n3 << " " << n2;
	else if (n1 >= n2 && n1 <= n3)
		cout << n3 << " " << n1 << " " << n2;
	else if (n1 <= n2 && n1>=n3)
		cout << n2 << " " << n1 << " " << n3;
	else if ( n1 <= n2 && n2 <= n3)
		cout << n3 << " " << n2 << " " << n1;
	else 
		cout << n2 << " " << n3 << " " << n1;
}

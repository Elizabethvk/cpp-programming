#include <iostream>

using namespace std;

int main() {
	cout << "2 4isla mi dai: \n";

	double n1, n2;
	cin >> n1 >> n2;
	if (n1 > n2)
		cout << n1 << " is bigger than " << n2 << "\n" << n1 - n2 << " their difference\n" <<  n1/n2 << " tje ratio\n";
	else if (n1 < n2)
		cout << n1 << " is smaller than " << n2 << "\n" << n2 - n1 << " their difference\n" << n2 / n1 << " tje ratio\n";
	else cout << n1 << " is equal to " << n2 << "\n" << n1 - n2 << " their difference\n";
	cout << n1 + n2 << " their sum\n" << n1 * n2 << " their product\n";
}

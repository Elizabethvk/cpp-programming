#include <iostream>

using namespace std;

int main() {
	cout << "4islo mi dai: \n";
	int n;
	cin >> n;
	
	if (n % 2 == 0 && n != 0)
		cout << n << " e 4etno 4islo";
	else if (n == 0)
		cout << "0 ne e nikakwo 4islo n.n.n.4.";
	else
		cout << n << " e ne4etno chislo";
}

#include <iostream>
using namespace std;

int main() {
	cout << "operaciq i 2 4isla mi dai: \n";
	char opp;
	double n1, n2;
	cin >> opp >> n1 >> n2;

	if (opp == '+')
		cout << n1 << " " << opp << " " << n2 << " = " << n1 + n2;
	else if (opp == '-')
		cout << n1 << " " << opp << " " << n2 << " = " << n1 - n2;
	else if (opp == '*')
		cout << n1 << " " << opp << " " << n2 << " = " << n1 * n2;
	else if (opp == '/')
		if (n1 >= n2 && n1 != 0 && n2 != 0)
			cout << n1 << " " << opp << " " << n2 << " = " << n1 / n2;
		else if (n2 >= n1 && n1 != 0 && n2 != 0)
			cout << n1 << " " << opp << " " << n2 << " = " << n2 / n1;
		else
			cout << "canny div by 0";
	else
		cout << n1 << opp << n2 << " tui 4islo nz koe e tbh, shtot dotuk ma nauchiha, sori maikal/ moje i operatora da ne poznawam";
}

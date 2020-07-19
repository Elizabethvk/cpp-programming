#include <iostream>
using namespace std;

int main() {
	cout << "Pennies, how much uve got?\n";
	int pennies;
	cin >> pennies;

	cout << "Now nickels, how much uve got?\n";
	int nickels;
	cin >> nickels;

	cout << "Dimes, how much uve got?\n";
	int dimes;
	cin >> dimes;

	cout << "Quaeters, how much uve got?\n";
	int quarters;
	cin >> quarters;

	cout << "Half dolelrs, how much uve got?\n";
	int half;
	cin >> half;

	cout << "DOlla dolla, how much uve got?\n";
	int dollars;
	cin >> dollars;

	if (pennies > 0)
		cout << "You hab " << pennies;
		if (pennies == 1)
			cout << " penny.";
		cout << " pennies.";
	cout << "You hab not pennies. sowwy\n";

	if (nickels > 0)
		cout << "You hab " << nickels;
	if (nickels == 1)
		cout << " nickel.";
	cout << " nickels.";
	cout << "You hab no nicks. sowwy\n";

	if (dimes> 0)
		cout << "You hab " << dimes;
	if (dimes == 1)
		cout << " dime.";
	cout << " dimes.";
	cout << "You hab no dimis . sowwy\n";

	if (quarters> 0)
		cout << "You hab " << quarters;
	if (quarters== 1)
		cout << " quarter.";
	cout << " quartels.";
	cout << "You hab not quarts. sowwy\n";

	if (half> 0)
		cout << "You hab " << half;
	if (half== 1)
		cout << " half doller.";
	cout << " half dollers.";
	cout << "You hab no halfis. sowwy\n";

	if (dollars> 0)
		cout << "You hab " << dollars;
	if (dollars== 1)
		cout << " dollar.";
	cout << " dollars.";
	cout << "You hab not dollars. sowwy\n";

	int total;
	total = pennies + 5 * nickels + 10 * dimes + 25 * quarters + 50 * half + 100 * dollars;
	double totalMixed;
	totalMixed = total / 100;
	cout << "You have " << total << " pennies.\n"
		<< "and " << totalMixed << " dollars and " << total%100 << " pennies.";
}

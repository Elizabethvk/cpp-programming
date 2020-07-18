#include <iostream>

using namespace std;

int main() {
	cout << "Pliz enter nam, we gun wrait to this hooman:\n";
	string name;
	string anotherName;
	char sex=0;
	//char male = 'm';
	//char female = 'f';
	//int m = male;
	//int f = female;
	//int s = sex;
	cin >> name;

	cout << "Enter oshte edno ime:\n";
	cin >> anotherName;

	cout << "Na kolko godini e wtoroto ime?\n";
	int age;
	cin >> age;
	if (age <= 0 || age >= 110)
		cout << "Probwai pak, bez da lajesh we\n";
		

	cout << "Dear gen " << name << ",\n"
		<< "How are you ? I am fine.I miss you.\n What else? Ami nz, towa e random pismo prosto, a btw, wypros.\n\n";
	cout << "Wijdal li si " << anotherName << " latelty???\n\n";
	cout << "Kakuv pol e priqtelcheto? f/m \n";
	cin >> sex;
		if (sex == 'm')
			cout << "Please, if u see " << anotherName << " tell him to call me!\n";
		else if (sex == 'f')
			cout << "If you see " << anotherName << " tell her to kol mi mejbe.\n";
		else 
			cout << "Ai sq mi dai istinski pol m/f";

		cout << "Maj imashe na skoro rd a a a " << age << " golqm si wecheee\n";
		if (age < 12)
			cout << "Next yea  u will be " << ++age << "OLE";
		else if (age == 17)
			cout << "izbori next year kato si na " << ++age;
		else if (age >= 70)
			cout << " staar4e\n";
		cout << "Kak e jiwota\n\n" << "mi da tuj to majki bb44!";
}

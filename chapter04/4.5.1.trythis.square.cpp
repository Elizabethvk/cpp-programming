//nikwa ideq shto ne ba4ka tbh

#include <iostream>
#include <string>
#include <numeric>
using namespace std;

void square(int n) {
	return n * n;
	//double s{ 0 };
	//for (int i = 0; i < n; ++i) {
	//	s = i*n;
	//}
	//return s;
}

int main() {
	//cout << "Ennter a value to be squared: \n";
	//int n = 0;
	//while (cin >> n) {
	cout << square(5) << '\n';
	//}
	//for (int i = 0; i < 100; ++i) {
	//	cout << square(i);
	//}
	return 0;
}

// no towa bachka for some reason
int square(int x)
{
    int s {0};

    for (int i=0; i<x; ++i)
        s += x;

    return s;
}

int main()
{
    cout << "Number" << '\t' << "Square" << '\n';

    for (int i=0; i<100; ++i)
        cout << i << '\t' << square(i) << '\n';

    return 0;
}

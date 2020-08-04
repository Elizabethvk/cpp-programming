//meine kleine shoine warianten 1 BA4ka nai nakraq rfabeushusek BORO BACHKAI!
#include <iostream>
//#include <string>
//#include <numeric>
using namespace std;

int square(int n) {
	int s{ 0 };
	for (int i = 0; i < n; ++i) {
		s += n;
	}
	return s;
}

int main() {
	cout << "Ennter a value to be squared: \n";
	int n = 0;
	while (cin >> n) {
		cout << n << " na koren e " << square(n) << '\n';
	}
	//for (int i = 0; i < 100; ++i) {
	//	cout << square(i);
	//}
	return 0;
}

// vol2
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

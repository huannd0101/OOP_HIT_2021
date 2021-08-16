#include <bits/stdc++.h>
using namespace std;

class Math {
public:
	static int abs_M(int x) {
		return x < 0 ? -x : x;
	}

	static int add_M(int x, int y) {
		return x + y;
	}

	static int subtract_M(int x, int y) {
		return x - y;
	}

	static int min_M(int x, int y) {
		return x < y ? x : y;
	}

	static int max_M(int x, int y) {
		return x > y ? x : y;
	}

	static int pow_M(int x, int y) {
		int power = 1;
		for (int i = 0; i < y; i++) {
			power *= x;
		}
		return power;
	}
};

int main(int argc, char const *argv[])
{
    cout << Math::abs_M(-2) << endl;
	cout << Math::add_M(2, 3) << endl;
	cout << Math::subtract_M(2, 3) << endl;
	cout << Math::min_M(2, 3) << endl;
	cout << Math::max_M(2, 3) << endl;
	cout << Math::pow_M(2, 3) << endl;
    return 0;
}

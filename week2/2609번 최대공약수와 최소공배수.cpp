#include <iostream>
using namespace std;

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	int gcd = 1;
	for (int i = 2; i <= b; i++) {
		if (a % i == 0 && b % i == 0) {
			gcd = i;
		}
	}

	int lcd = (a*b) / gcd;
	printf("%d\n%d\n", gcd, lcd);
}
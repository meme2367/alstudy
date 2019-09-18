#include <iostream>
using namespace std;
int main() {
	int N;
	int small = 123123123;
	int big = -1;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int num;
		scanf("%d", &num);
		if (big < num) {
			big = num;
		}
		if (small > num) {
			small = num;
		}
	}
	printf("%d", big * small);
	return 0;
}
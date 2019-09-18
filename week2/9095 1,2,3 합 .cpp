#include<iostream>
using namespace std;
int N;
int solve(int sum) {
	if (sum > N) {
		return 0;
	}
	else if (sum == N) {
		return 1;
	}
	else {
		return solve(sum + 1) + solve(sum + 2) + solve(sum + 3);
	}
}
int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &N);
		printf("%d\n", solve(0));
	}
	return 0;
}
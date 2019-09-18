#include <iostream>
using namespace std;
int N;
int row[16];
bool isPossible(int rowIdx) {
	for (int i = 0; i < rowIdx; i++) {
		if (row[rowIdx] == row[i] || rowIdx - i == abs(row[rowIdx] - row[i])) {
			return false;
		}
	}
	return true;
}
int solve(int rowIdx) {
	if (rowIdx == N) {
		return 1;
	}
	else {
		int cnt = 0;
		for (int i = 0; i < N; i++) {
			// row[0] = i; i번째 열에 퀸이 있음.
			row[rowIdx] = i;
			if (isPossible(rowIdx)) {
				cnt +=solve(rowIdx + 1);
			}
		}
		return cnt;
	}
}
int main() {
	scanf("%d", &N);
	int ret = 0;
	ret = solve(0);
	printf("%d", ret);
}
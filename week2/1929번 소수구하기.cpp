#include <iostream>
using namespace std;
int arr[1000001];
int main() {
	int M, N;
	scanf("%d %d", &M, &N);
	for (int i = 2; i <= N; i++) {
		for (int j = i + i; j <= N; j += i) {
			arr[j] = 1;
		}
	}
	for (int i = M; i <= N; i++) {
		if (arr[i] != 1 && i != 1) {
			printf("%d\n", i);
		}
	}
	return 0;
}
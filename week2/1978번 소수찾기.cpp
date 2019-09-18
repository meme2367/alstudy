#include <iostream>
using namespace std;
int arr[1001];
int main() {
	//arr[4] == 1 소수가 아닌 것
	int n;
	int cnt = 0;
	scanf("%d", &n);
	for (int i = 2; i <= 1000; i++) {
		if (arr[i] == 1) continue;
		for (int j = i + i; j <= 1000; j += i) {
			arr[j] = 1;
		}
	}
	for (int i = 0; i < n; i++) {
		int num;
		scanf("%d", &num);
		if (num == 1) cnt--;
		if (arr[num] != 1) {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}
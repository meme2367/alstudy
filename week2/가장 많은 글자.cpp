#include <iostream>
#include <algorithm>
using namespace std;
int arr1[500001];
int arr2[500001];
int n, m;
bool Checking(int num) {
	//num 을 2진탐색해서 arr1에 있으면 1, 없으면 0 을 반환하는 함수
	int start = 0;
	int end = n - 1;
	if (arr1[start] == num) {
		return 1;
	}
	if (arr1[end] == num) {
		return 1;
	}
	while (start +1 != end) {
		int mid = (start + end) / 2;
		if (arr1[mid] == num) {
			return 1;
		}
		else if (arr1[mid] > num) {
			end = mid;
		}
		else {
			start = mid;
		}
	}
	return 0;
}
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr1[i]);
	}
	sort(arr1, arr1 + n);
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &arr2[i]);
		if (Checking(arr2[i])) {
			printf("1 ");
		}
		else {
			printf("0 ");
		}
	}
	
	return 0;
}
#include <iostream>
#include <string>
using namespace std;
bool checkVPS(string str) {
	int cnt = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			cnt++;
		}
		else {
			cnt--;
			if (cnt < 0) {
				return false;
			}
		}
	}
	if (cnt == 0) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	int N;
	string str;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (checkVPS(str)) {
			printf("YES");
		}
		else {
			printf("NO");
		}
		printf("\n");
	}
	return 0;
}
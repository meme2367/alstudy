#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	int T;
	string cmd;
	scanf("%d", &T);
	while (T--) {
		cin >> cmd;
		int n;
		bool isError = false;
		int cmdSize = 0;
		deque<int> v;
		bool flag = false;
		scanf(" %d", &n);
		if (n != 0) {
			for (int i = 0; i < n; i++) {
				int num;
				scanf(" %*c%d", &num);
				v.push_back(num);
			}
			scanf("%*c");
		}
		else {
			scanf(" %*c%*c");
		}
		cmdSize = cmd.length();
		for (int i = 0; i < cmdSize; i++) {
			if (cmd[i] == 'R') {
				if (flag == false) {
					flag = true;
				}
				else {
					flag = false;
				}
			}
			else {
				if (v.empty()) {
					isError = true;
					break;
				}
				if (flag == true) {
					v.pop_back();
				}
				else {
					v.pop_front();
				}
			}
		}
		if (isError) {
				printf("error\n");
		}
		else {
			int vSize = v.size();
			printf("[");
			if (flag == true) {
				for (int i = vSize-1; i>=0; i--) {
					printf("%d", v[i]);
					if (i != 0) {
						printf(",");
					}
				}
			}
			else {
				for (int i = 0; i < vSize; i++) {
					printf("%d", v[i]);
					if (i != vSize-1) {
						printf(",");
					}
				}
			}
			printf("]\n");
		}
	}
	return 0;
}

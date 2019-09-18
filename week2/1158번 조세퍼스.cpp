#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> v;
	vector<int> ans;
	int n, k;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++) {
		v.push_back(i);
	}
	vector<int>::iterator it = v.begin();
	for (int i = 0; i < k - 1; i++) {
		it++;
	}


	while (1) {
		ans.push_back(*it);
		it = v.erase(it);
		if (it == v.end()) {
			if (it == v.begin()) {
				break;
			}
			else {
				it = v.begin();
			}
		}
		
		for (int i = 0; i < k - 1; i++) {
			it++;
			if (it == v.end()) {
				it = v.begin();
			}
		}
	}
	printf("<");
	for (int i = 0; i < ans.size(); i++) {
		if (i == ans.size() - 1) {
			printf("%d", ans[i]);
		}
		else {
			printf("%d, ", ans[i]);
		}
	}
	printf(">");
	return 0;
}

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> v;
vector<int> lotto;
int k;
void printLotto(int listIdx, int now) {
	if (now == k) {
		if (lotto.size() == 6) {
			for (vector<int>::iterator it = lotto.begin(); it != lotto.end(); it++) {
				cout << *it << ' ';
			}
			printf("\n");
		}
	}
	else {
		lotto.push_back(v[listIdx][now]);
		printLotto(listIdx, now + 1);
		lotto.pop_back();
		printLotto(listIdx, now + 1);
	}
}
int main() {	
	int idx = 0;
	scanf("%d", &k);
	while (k != 0) {
		vector<int> S;
		for (int i = 0; i < k; i++) {
			int num;
			scanf("%d", &num);
			S.push_back(num);
		}
		v.push_back(S);
		printLotto(idx, 0);
		lotto.clear();
		printf("\n");
		idx++;
		scanf("%d", &k);
	}
	return 0;
}
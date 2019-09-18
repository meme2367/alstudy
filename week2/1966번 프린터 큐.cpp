#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
queue<pair<int, int>> q;
vector<int> v;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	int T;
	scanf("%d", &T);
	
	while (T--) {
		int n;
		int cnt = 0;
		int ans = 0;
		int vIdx = 0;
		int targetPos;
		scanf("%d %d", &n, &targetPos);
		for (int i = 0; i < n; i++) {
			int num;
			scanf("%d", &num);
			v.push_back(num);
			q.push(make_pair(num, i)); // 중요도, 인덱스
		}
		sort(v.begin(), v.end(), cmp);
		while (!q.empty()) {
			int topImptant = q.front().first;
			int topIdx = q.front().second;
			if (v[vIdx] == topImptant) {
				if (topIdx == targetPos) {
					cnt++;
					ans = cnt;
					q.pop();
				}
				else {
					q.pop();
					cnt++;
					vIdx++;
				}
			}
			else {
				if (ans > 0) {
					q.pop();
				}
				else {
					q.push(q.front());
					q.pop();
				}
			}
		}
		v.clear();
		printf("%d\n", ans);
	}
}
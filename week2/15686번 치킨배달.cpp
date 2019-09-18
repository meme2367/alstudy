#include<iostream>
#include<vector>
using namespace std;
int N, M;
int board[51][51];
vector<pair<int, int>> chicken; //{1,2} {3,4}
vector<pair<int, int>> home;  // {0,0}, {4,4}, {3,5}
vector <int> choicedChicken;   // 0,1
int getCountingResult() {
	int homeSize = home.size();
	int choicedSize = choicedChicken.size();
	int Sum = 0;
	for (int i = 0; i < homeSize; i++) {
		int Min = 123123123;
		for (int j = 0; j < choicedSize; j++) {
			int tmp = abs(chicken[choicedChicken[j]].first - home[i].first) + abs(chicken[choicedChicken[j]].second - home[i].second);
			if (Min > tmp) {
				Min = tmp;
			}
		}
		Sum += Min;
	}
	return Sum;
}
int main() {
	int Min = 123123123;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &board[i][j]);
			if (board[i][j] == 2) {
				chicken.push_back({ i,j });
			}
			else if (board[i][j] == 1) {
				home.push_back({ i, j });
			}
		}
	}
	int chickenSize = chicken.size();


	for (int i = 1; i < (1 << chickenSize); i++) {
		int cnt = 0;
		for (int j = 0; j < chickenSize; j++) {
			if (i & (1 << j)) {
				cnt++;
				choicedChicken.push_back(j); // Ä¡Å² ÁÂÇ¥°¡ ÀÖ´Â ÀÎµ¦½º »ðÀÔ
			}
		}
		if (cnt == M) {
			int ret = getCountingResult();
			if (Min > ret) {
				Min = ret;
			}
		}
		choicedChicken.clear();
	}

	printf("%d", Min);
	return 0;
}
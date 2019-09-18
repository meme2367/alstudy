#include <iostream>
#include <map>
using namespace std;
map<int, int> m;
int main() {
	int N, M;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int num;
		scanf("%d", &num);
		if (m.find(num) == m.end()) {
			m.insert({ num,1 });
		}
		else {
			m.find(num)->second++;
		}
	}
	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		int num;
		scanf("%d", &num);
		if (m.find(num) != m.end()) {
			cout << m.find(num)->second << ' ';
		}
		else {
			cout << "0 ";
		}
	}
	return 0;
}
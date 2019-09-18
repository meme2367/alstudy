#include <iostream>
#include <stack>
using namespace std;
int arr[100001];
int stackArr[100001];
int N;
string strFunc;
stack<int> s;
bool pushAndPop(int end) {
	//1부터 end 까지 숫자를 push 하고 pop 하는 함수
	bool isPush = false;
	for (int i = 1; i <= end; i++) {
		if (arr[i] == 1) {
			s.push(i);
			isPush = true;
			strFunc.append("+");
			arr[i] = 0; //스택 넣음.
		}
	}
	if (isPush == false) {
		return false;
	}
	else{
		s.pop();
		strFunc.append("-");
		return true;
	}
}
int main() {
	bool flag = false;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &stackArr[i]);
		arr[stackArr[i]] = 1;
	}
	
	for (int i = 0; i < N; i++) {
		if (s.empty()) {
			flag = pushAndPop(stackArr[i]);
		}
		else if (s.top() == stackArr[i]) {
			s.pop();
			strFunc.append("-");
		}
		else {
			flag = pushAndPop(stackArr[i]);
		}

		if (flag == false) {
			break;
		}
	}
	if (flag == false) {
		printf("NO");
	}
	else {
		int strLength = strFunc.length();
		for (int i = 0; i < strLength; i++) {
			printf("%c", strFunc[i]);
			printf("\n");
		}
	}
	return 0;
}
#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool Checking(string str) {
	int sum = 0;
	int strSize = str.length();
	for (int i = 0; i < strSize; i++) {
		if (str[i] == '(') {
			sum += 1;
		}
		else {
			sum -= 1;
			if (sum < 0) {
				return false;
			}
		}
	}
	if (sum == 0) {
		return true;
	}
	else {
		return false;
	}
}
string solution(string w) {
	if (w == "") {
		return "";
	}
	int wSize = w.length();
	string u = "";
	string v = "";
	int findIdx = 0;
	stack<char> s; // 1 : ( , 0 : )
	s.push(w[0]);
	for (int i = 1; i < wSize; i++) {
		if (s.top() == w[i]) {
			s.push(w[i]);
		}
		else {
			s.pop();
			if (s.empty()) {
				findIdx = i;
				break;
			}
		}
	}
	u = w.substr(0, findIdx+1);
	if (findIdx == wSize - 1) {
		v = "";
	}
	else {
		v = w.substr(findIdx + 1, wSize - 1);
	}
	if (Checking(u)) {
		// 올바른 문자열이면
		return u.append(solution(v));
	}
	else {
		string tmp = "";
		tmp.append("(");
		tmp.append(solution(v));
		tmp.append(")");
		u.erase(u.begin()+0);
		u.erase(u.begin() + (u.length() - 1));
		for (int i = 0; i < u.length(); i++) {
			if (u[i] == '(') u[i] = ')';
			else if (u[i] == ')') u[i] = '(';
			else {
				break;
			}
		}
		tmp.append(u);
		return tmp;
	}
}
int main() {
	string inputData = "()))((()";
	string outputString = solution(inputData);
	cout << outputString;
	return 0;
}
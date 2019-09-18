#include <iostream>
#include <string>
#include <sstream>
#include <list>
using namespace std;

string getUpdatedString(int cmdCnt, list<char> myList) {
	// 명령 모두를 수행한 후의 문자열을 반환하는 함수
	list<char>::iterator it; // list 반복자 .
	stringstream ss;
	it = myList.end(); // 마지막 이터레이터
	char ch;
	scanf("%d", &cmdCnt);
	for (int i = 0; i < cmdCnt; i++) {
		scanf(" %c", &ch);
		if (ch == 'L'){
			if (it == myList.begin()) {
				continue;
			}
			else {
				it--;
			}
		}
		else if (ch == 'D') {
			if (it == myList.end()) {
				continue;
			}
			else {
				it++;
			}
		}
		else if (ch == 'P') {
			char addChar;
			scanf(" %c", &addChar);
			myList.insert(it, addChar);
		}
		else {
			if (it == myList.begin()) {
				continue;
			}
			else {
				it--;
				it = myList.erase(it);
			}
		}
	}

	for (list<char>::iterator i = myList.begin(); i != myList.end(); i++) {
		ss << *i;
	}
	string ret = ss.str();
	return ret;
}
int main() {
	string str;
	int cmdCnt = 0;
	list<char> List;
	cin >> str;
	int strSize = str.length();
	for (int i = 0; i < strSize; i++) {
		List.push_back(str[i]);
	}
	cout << getUpdatedString(cmdCnt, List);

	return 0;
}
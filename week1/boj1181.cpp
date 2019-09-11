#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(const string &str1, const string &str2) {
  if(str1.length() < str2.length()) return true;
  else if(str1.length() == str2.length()) {
    if(str1 < str2) return true;
    else return false;
  }
  else return false;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int N, i;
  string tmp;
  vector<string> words;
  cin>>N;
  for(i=0; i<N; i++){
    cin>>tmp;
    if(find(words.begin(), words.end(), tmp) == words.end()) words.push_back(tmp);
  }
  sort(words.begin(), words.end(), cmp);
  for(i=0; i<words.size(); i++) cout<<words[i]<<endl;
}

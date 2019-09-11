#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
  int N, i, temp;
  vector<int> ret;
  cin>>N;
  for(i=0; i<N; i++){
    cin>>temp;
    if(find(ret.begin(), ret.end(), temp) == ret.end()) ret.push_back(temp);
  }
  sort(ret.begin(), ret.end());
  for(i=0; i<ret.size(); i++) printf("%d ", ret[i]);
  return 0;
}

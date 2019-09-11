#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
  int i, N, M, temp;
  scanf("%d", &N);
  vector<int> card;
  for(i=0; i<N; i++) {
    scanf("%d", &temp);
    card.push_back(temp);
  }
  sort(card.begin(), card.end());
  scanf("%d", &M);
  for(i=0; i<M; i++) {
    int start, end;
    scanf("%d", &temp);
    start = lower_bound(card.begin(), card.end(), temp) - card.begin() + 1;
    end = upper_bound(card.begin(), card.end(), temp) - card.begin();
    if(start > end) {
      printf("0 ");
      continue;
    }
    printf("%d ", end - start + 1);
  }
  return 0;
}

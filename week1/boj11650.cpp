#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef class point {
public: int x, y;
}Point;

bool cmp(const Point &p1, const Point &p2) {
  if(p1.x < p2.x) return true;
  else if(p1.x == p2.x) {
    if(p1.y < p2.y) return true;
    else return false;
  }
  else return false;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int i, N;
  vector<Point> point;
  cin>>N;
  for(i=0; i<N; i++) {
    Point temp;
    cin>>temp.x>>temp.y;
    point.push_back(temp);
  }
  sort(point.begin(), point.end(), cmp);
  for(i=0; i<point.size(); i++) cout<<point[i].x<<" "<<point[i].y<<"\n";
}


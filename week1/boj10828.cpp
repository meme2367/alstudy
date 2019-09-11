#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin>>N;
    string tmp;
    vector<int> ret;
    for(int i=0; i<N; i++){
        cin>>tmp;
        if(tmp == "push") {
            cin>>tmp;
            ret.push_back(stoi(tmp));
        }
        else if(tmp == "top" || tmp == "pop") {
            if(ret.size()) cout<<ret.back()<<"\n";
            else cout<<"-1\n";
            if(ret.size() && tmp == "pop") ret.pop_back();
        }
        else if(tmp == "size") cout<<ret.size()<<"\n";
        else if(tmp == "empty") cout<<!(ret.size())<<"\n";
    }
    return 0;
}

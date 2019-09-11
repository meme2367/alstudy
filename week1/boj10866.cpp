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
        if(tmp == "size") cout<<ret.size()<<"\n";
        else if(tmp == "empty") cout<<!(ret.size())<<"\n";
        else if(tmp == "push_front") {
            cin>>tmp;
            ret.insert(ret.begin(), stoi(tmp));
        }
        else if(tmp == "push_back") {
            cin>>tmp;
            ret.push_back(stoi(tmp));
        }
        else if(tmp == "pop_front" || tmp == "front") {
            if(ret.size()) {
                cout<<ret.front()<<"\n";
                if(tmp == "pop_front") ret.erase(ret.begin());
            }
            else cout<<"-1\n";
        }
        else if(tmp == "pop_back" || tmp == "back") {
            if(ret.size()){
                cout<<ret.back()<<"\n";
                if(tmp == "pop_back") ret.pop_back();
            }
            else cout<<"-1\n";
        }
    }
    return 0;
}

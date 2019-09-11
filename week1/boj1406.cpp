#include <iostream>
#include <list>
#include <stdio.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    string str, cmd;
    list<char> ret;
    int N, i;
    cin>>str>>N;
    for(i=0; i<str.size(); i++) {
        ret.push_back(str[i]);
    }
    list<char>::iterator iter = ret.end();
    for(i=0; i<N; i++) {
        cin>>cmd;
        list<char>::iterator start = ret.begin(), end = ret.end();
        if(cmd == "L" && iter != start) iter--;
        else if(cmd == "D" && iter != end) iter++;
        else if(cmd == "B") {
            if(iter != start) iter = ret.erase(--iter);
        }
        else if(cmd == "P") {
            cin>>cmd;
            ret.insert(iter, cmd[0]);
        }
    }
    for(list<char>::iterator it=ret.begin(); it!=ret.end(); it++){
        printf("%c", *it);
    }
    return 0;
}

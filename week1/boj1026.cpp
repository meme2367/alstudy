#include <iostream>
#include <algorithm>
#include <functional>
#include <stdio.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int N, i, ret = 0;
    cin>>N;
    int A[N], B[N];
    for(i=0; i<N; i++) cin>>A[i];
    for(i=0; i<N; i++) cin>>B[i];

    sort(A, A+N);
    sort(B, B+N, greater<int>());
    for(i=0; i<N; i++){
        ret += A[i]*B[i];
    }
    printf("%d", ret);
    return 0;
}

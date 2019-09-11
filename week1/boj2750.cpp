#include <algorithm>
#include <stdio.h>

using namespace std;

int main(void) {
    int N;
    
    scanf("%d", &N);
    int *arr = new int[N];
    
    for(int i=0; i<N; i++) scanf("%d", &arr[i]);
    sort(arr, arr+N);
    for(int i=0; i<N; i++) printf("%d\n", arr[i]);
    
    delete[] arr;
    arr = NULL;
    
    return 0;
}

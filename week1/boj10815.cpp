#include <algorithm>
#include <stdio.h>

using namespace std;

int binSearch(int val, int A[], int start, int end) {
    if(start > end) return 0;
    int mid = (end + start) / 2;
    if(val == A[mid]) return 1;
    else {
        if(val > A[mid]) {
            return binSearch(val, A, mid + 1, end);
        }
        else {
            return binSearch(val, A, start, mid - 1);
        }
    }
}

int main() {
    int N, M;
    int i, j;
    
    scanf("%d", &N);
    
    int *A = new int[N];
    for(i=0; i<N; i++) {
        scanf("%d", &A[i]);
    }
    scanf("%d", &M);
    int *num = new int[M];
    for(j=0; j<M; j++) {
        scanf("%d", &num[j]);
    }
    sort(A, A+N);
    for(j=0; j<M; j++) {
        if(num[j] > A[N-1] || num[j] < A[0]) printf("0\n");
        else printf("%d ", binSearch(num[j], A, 0, N-1));
    }
    
    delete[] A;
    delete[] num;
    A = num = NULL;
    
    return 0;
}


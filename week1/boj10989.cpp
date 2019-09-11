#include <stdio.h>

int main() {
    int N, tmp = 0;
    scanf("%d", &N);
    int count[10001] = {0};
    for(int i=0; i<N; i++) {
        scanf("%d", &tmp);
        count[tmp]++;
    }
    for(int i=1; i<10001; i++) {
        for(int j=0; j<count[i]; j++) printf("%d\n", i);
    }
    return 0;
}

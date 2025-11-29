#include<stdio.h>
int main() {
    int N=0, Q = 0;
    cin >> N >> Q;
    int A[N];
    int L[Q], R[Q];
    for(int i = 0;i < N-1;N++){
        scanf("%d",&A[i]);
    }
    int guest[Q];
    for(int i = 0;i <= Q;i++){
        scanf("%d ,%d",&L[i],&R[i]);
        guest[i] = R[i] - L[i];
        printf("%d",guest);
    }
}
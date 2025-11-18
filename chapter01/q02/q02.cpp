#include<stdio.h>
int main () {
    int N, X;
    int A[100];
    int how=0;

    scanf("%d %d",&N,&X);
    for(int i=0; i<N-1;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<N-1;i++){
        if(A[i] == X){
            how = 1;           
        }
    }
    if(how == 1) printf("Yes");
    else printf("No");
}
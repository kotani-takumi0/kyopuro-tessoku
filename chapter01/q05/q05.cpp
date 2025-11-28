#include<stdio.h>

int main() {
    int N, K;
    int count=0;
    scanf("%d %d",&N,&K);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                if(i + j + k == K)
                    count ++;
            }
        }
    }
    printf("%d",count);
    
}
#include<stdio.h>

int main() {
    int N, K;
    int count=0;
    cin >> N >> K;
    for(int x = 1; x <= N; x++){
        for(int y = 1 y <= N;y++){
            int z = K - x - y; //白いカードに書かれるべき整数
            //白いカードに書かれるべき数字zが1以上であり、N以下（条件より）の時にcountを一つ足す
            if(z >= 1 && z <= N) count +=1;
        }
    }
    //出力
    cout << Answer << endl;
    return 0;
    
}
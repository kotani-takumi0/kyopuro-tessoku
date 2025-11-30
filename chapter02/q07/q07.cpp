#include<iostream>
using namespace std;

int main() {
    int D, N;
    int L[100009], R[100009];
    //入力を受け取る
    cin >> D;
    cin >> N;
    for(int i = 1;i <= N;i++){
        cin >> L[i] >> R[i];
    }
    //累積和を表す配列を作る
    int S[100009];
    S[0] = 0;
    for(int i = 1;i <= D;i++){
        S[i] = S[i] + S[i-1];
    }
    //出力
    int num = 0;
    for(int i = 1;i <= N;i++){
        num = S[R[i]] - S[L[i] - 1];
        cout << num << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    //上の桁から順番に「2進法に変換した値」を求める
    for(int x = 9; x >= 0; x--){
        int wari = (1 << x);
        cout << (N / wari) % 2;
    }
    cout << endl;
    return 0;
}
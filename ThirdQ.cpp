#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int A[N], B[N], X[N];
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N; i++) cin >> B[i];

    for(int i = 0; i < N; i++){
        for(int j; j <= 1000000000; j++){
        if(j == A[i] || j == B[i]){
             X[i] = j;
             break;
            }
        }
    }

    bool check(int[] X){
    for(int i = 0; i < N - 1; i++){
        bool Second = true;
        if(abs(X[i] - X[i+1]) > K) Second = false;
        return Second;
    }
    }

    if(Second) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
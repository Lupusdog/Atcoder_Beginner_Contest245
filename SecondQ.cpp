#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    int num[2100];
    int ans;

    cin >> N;
    for(int i = 0; i < N; i++) cin >> num[i];

    bool pass = true;

    for(int i = 0; i <= 2000; i++){
        for(int j = 0; j < N; j++){
            if(i == num[j]) pass = false;
        }
        if(pass){
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
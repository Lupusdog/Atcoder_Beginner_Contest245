#include <iostream>
using namespace std;

int main() {
    int t_h, t_m, a_h, a_m;
    cin >> t_h >> t_m >> a_h >> a_m;

    bool T_First = true;
    if (t_h > a_h) T_First = false;
    else if (t_h == a_h){
        if (t_m > a_m) T_First = false;
    }

    if(T_First) cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;

    return 0;
}
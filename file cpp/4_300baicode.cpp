#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    long double b;
    cin >> a;
    if(a > 1000000000){
        cout << "ko hop le!";
        return 0;

    }
    b = (long double)a / 3;
    cout << fixed << setprecision(2) << b;
    return 0;
}

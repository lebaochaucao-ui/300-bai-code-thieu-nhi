#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    int B1, B2;
    cin >> a;
    if(a >= 1000000){
        cout << "ko hop le! \n";
        return 0;
    }
    B1 = pow(a, 2);
    B2 = pow(a, 5);
    cout << B1 << '\n' << B2 << '\n';

}

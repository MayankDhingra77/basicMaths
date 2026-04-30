#include <bits/stdc++.h>
using namespace std;
// gcd - gretest common divisor it will be from 1 to min(a,b) TC O(min(a,b))
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b ;
    cin >> a >> b ;
    if(a == 0 || b == 0){ cout << max(a,b) ; return 0; }
    if(a == b){ cout << a ; return 0; }
    int gcd = 1 ;
    for(int i = 1 ; i<=min(a,b) ; i++){
        if(a%i == 0 && b%i == 0){
            gcd = i ;
        }
    }
    return 0;
}
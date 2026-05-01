#include <bits/stdc++.h>
using namespace std;
// if a is 0 then b is gcd and if b is 0 then a is gcd
// gcd(a,b) = gcd(a-b , b) ; (a>b) and vice versa do it unit one become 0
int gcdRec(int a , int b){
    if(b==0) return 0 ;
    return gcdRec(b , a%b) ;
} 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a , b ;
    cin >> a >>  b;
    cout << gcdRec(24,53) ;
    

    return 0;
}
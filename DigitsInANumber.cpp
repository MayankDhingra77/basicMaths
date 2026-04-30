// base 10 number take modulo 10 and then divide it by ten
# include <bits/stdc++.h>
using namespace std ;
void solve(int n){
    while(n!=0){
        int rem = n%10 ;
        cout << rem << " " ;
        n = n/10 ;
    }
}
int main(){
    int n = 3568 ;
    solve(n) ;
    return 0 ;
}
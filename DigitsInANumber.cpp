// base 10 number take modulo 10 and then divide it by ten
# include <bits/stdc++.h>
using namespace std ;
// TC - O(log n base 10) as number is getting divide by 10  if numner is getting divide by 3 then tc will be log n base 3
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
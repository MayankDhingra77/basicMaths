// Short summary - to find prime no
// Factors pair me aate hain → (a, b)
// Ek factor hamesha √n se chhota ya equal hota hai
// Isliye √n tak check karna enough hai 
# include <bits/stdc++.h>
using namespace std ;
// bool isPrime(int n){
//     if(n== 0 ||  n==1) return false ;
//     if(n==2 ) return true ;
//     if(n%2 ==0) return false ;
//     for(int i = 3 ; i*i < n ; i+=2){
//         if(n%i == 0) return false ;
//     }
//     return true ;
// }


//Count Primes
//Sieve of Eratosthenes - assume all nummbers as prime remove all multiples of 2 and 3 and 5 and 7 
bool isPrime(int n){
    if(n<=1) return false ;

}
int main(){
    int n = 42 ;
    cout << isPrime(n) ;
    return 0 ;
}
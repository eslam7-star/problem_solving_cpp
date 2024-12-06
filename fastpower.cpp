#include <bits/stdc++.h>

using namespace std;


long long recur(long long n, long long m){
    if( m == 0 ){
        return 1;
    }
    
    long long half = recur(n,m/2)% 1000000007;
    half = (half * half) % 1000000007;

    if( m % 2 == 0 ){
        return half;
    }else{
        return (( n% 1000000007) *half )% 1000000007;
    }
    
}


int main(int argc, char const *argv[])
{
    long long M,N;
    cin>>N>>M;

    cout<<recur(N,M)<<endl;

    return 0;
}

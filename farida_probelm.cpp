#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

long long farida(vector<long long> &dp,const vector<long long> &arr,int i,int n){
    if( i >= n ){
        return 0;
    }
    if( dp[i] != -1 ){
        return dp[i];
    }
    dp[i] = max(farida(dp,arr,i+1,n) , farida(dp,arr,i+2,n)+arr[i] );

    return dp[i];
}


int main()
{
    int x;
    cin>>x;
    for (size_t i = 0; i < x; i++)
    {
        int n;
        cin>>n;
        if( n == 0){
            cout << "Case " << i + 1 << ": 0" << endl;
            continue;   
        }
        vector<long long> arr(n);
        for (size_t j = 0; j < n; j++)
        {
            cin>>arr[j];
        }
        vector<long long> dp(n,-1);
        //cout<<"Case "<<i+1<<":"<<farida(dp,arr,0,n)<<endl;
        dp.push_back(0);
        
        for (int p = n-1 ; p >= 0; p--)
        {
            dp[p] = max(dp[min(p+1,n)],dp[min(p+2,n)]+arr[p]);
        }
        cout<<"Case "<<i+1<<":"<<dp[0]<<endl;
    }

  


    return 0;
}

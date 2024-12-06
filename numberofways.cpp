#include <iostream>
#include <vector>

#define ll long long

int main()
{
    int n,l;
    std::cin>>n;
    std::vector<int> arr(n+1);
    std::vector<ll> sum(n+1);

    
    
    sum[0] = 0;

    for (size_t i = 1; i <= n; i++)
    {
        std::cin>>l;
        arr[i] = l;
        sum[i] = sum[i-1] + l;

    }
    
    if ( sum[n]%3 != 0 ){
        std::cout<<0<<std::endl;
        return 0;
    }

    ll c1=0;
    ll ways = 0;

    for (size_t i = 1; i <= n; i++)
    {
        if( sum[i] == 2*(sum[n]/3) ){
            if(! (sum[n] == 0 && i == n ) ){
                ways+= c1;
            }
        }

        if( sum[i] == sum[n]/3 )
        {
            c1++;
        }
        
    }
    
    std::cout<<ways<<std::endl;
    return 0;
}

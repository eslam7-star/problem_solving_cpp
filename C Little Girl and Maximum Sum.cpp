#include <bits/stdc++.h>


int main(int argc, char const *argv[])
{
    long long x,n,l,m;
    std::cin>>x>>n;

    std::vector<long long>arr(x);
    std::vector<long long>psum(x+1,0);


    for (size_t i = 0; i < x; i++)
    {
        std::cin>>arr[i];
    }
    
    for (size_t i = 0; i < n; i++)
    {
        std::cin>>l>>m;
        psum[l-1]++;
        psum[m]--;

    }
    
    for (size_t i = 1; i < x; i++)
    {
        psum[i] += psum[i-1];
    }
    
    psum.pop_back();

    sort(arr.rbegin(),arr.rend());
    sort(psum.rbegin(),psum.rend());

    long long maxSum = 0;
    for (size_t i = 0; i < x; i++)
    {
        maxSum += psum[i]*arr[i];
    }

    std::cout<<maxSum<<std::endl;
    std::cout<<"finished"<<std::endl;

    return 0;
}

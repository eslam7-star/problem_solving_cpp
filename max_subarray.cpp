#include <bits/stdc++.h>


// brute force approach


int main(int argc, char const *argv[])
{
    std::vector<std::vector<int>> subarrays;
    std::vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    std::vector<int> sub_sums;

    for (size_t i = 0; i < arr.size(); i++)
    {
        subarrays.push_back({arr[i]});
        sub_sums.push_back({arr[i]});
        for (size_t j = i+1; j < arr.size(); j++)
        {
            std::vector<int> temp = subarrays[subarrays.size()-1];
            temp.push_back(arr[j]);
            subarrays.push_back(temp);
            sub_sums.push_back(sub_sums[sub_sums.size()-1]+arr[j]);
        }
        
    }

    int* max = &sub_sums[0];
    int *i = max;
    int *end = i + sub_sums.size();
    while ( i < end)
    {
        if ( *i > *max )
        {
            max = i;
        }
        i++;
    }
    
    std::cout<<"largest subarray \"sum "<<*max<<"\" at index :"<<int(max-sub_sums.data())<<"\n";
    


    // printing permutations array
    for (size_t i = 0; i < subarrays.size(); i++)
    {
        std::cout<<"[";
        for (size_t k = 0; k < subarrays[i].size(); k++)
        {
            std::cout<<subarrays[i][k]<<",";
        }
        std::cout<<"], ";
    }
    std::cout<<"\n";

    return 0;
}

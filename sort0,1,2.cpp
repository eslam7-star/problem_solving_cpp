#include <bits/stdc++.h>


int main(int argc, char const *argv[])
{
    std::vector<int> nums = {2,0,1};

    int zeros= 0;
    int first_two = nums.size();
    int i = 0;
    while( i < first_two ){
        if( nums[first_two -1] < nums[i] ){
            std::swap(nums[first_two-1],nums[i]);
            if( nums[first_two-1] == 2 )
                first_two--;
        }else if( nums[i] == 0){
            zeros++;
        }
        if( i+1 > zeros){
            i++;
        }
    }
    std::cout<<1;

    return 0;
}

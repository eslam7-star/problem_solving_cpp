#include <bits/stdc++.h>

using namespace std;

void nextPermutation(vector<int>& nums) {
    int k = nums.size()-1 ;

    if( k <= 0)
        return;
    
    int i = k;
    while( i > 0 && nums[i-1] > nums[i] ){
        i--;
    }

    if( i == 0){
        reverse(nums.begin(), nums.end());
        return;
    }
    
    while(i <= k){
        if( i == k){
            swap(nums[i],nums[i-1]);
            break;
        }
        if( nums[k] <= nums[i-1] ){
            if( nums[k-1] > nums[i-1]){
                swap(nums[i-1],nums[k-1]);
                break;
            }
        }else{
            swap(nums[i-1],nums[k]);
            break;
        }
        k--;
    }
    
    sort(nums.begin() + i, nums.begin() + nums.size());
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1,3,2};

    nextPermutation(arr);
    
    cout<<"[";
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"]\n";
    return 0;
}

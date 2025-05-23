#include <bits/stdc++.h>

std::vector<std::vector<int>> permutations;


void rec(std::vector<int> arr,std::vector<int> p){
    if ( arr.size() == 0 )
    {
        permutations.push_back(p);
        return;
    }

    for (size_t i = 0; i < arr.size(); i++)
    {
        std::vector<int> arr2 = arr;
        std::vector<int> p2 = p;

        p2.push_back(arr2[i]);
        arr2.erase(arr2.begin()+i);
        rec(arr2,p2);
    }
}


void call(int i , std::vector<int> arr){
        std::vector<int> p = {arr[i]};
        arr.erase(arr.begin()+ i);
        
        rec(arr,p);
}

int main(int argc, char const *argv[])
{
    std::vector<int> arr = {1,2,3,4};
    int s = arr.size(); 
    
    for (size_t i = 0; i < s; i++)
    {
        call(i,arr);
    }

    // printing permutations array
    for (size_t i = 0; i < permutations.size(); i++)
    {
        std::cout<<"[";
        for (size_t k = 0; k < s; k++)
        {
            std::cout<<permutations[i][k]<<",";
        }
        std::cout<<"], ";
    }
    std::cout<<"\n";

    return 0;
}

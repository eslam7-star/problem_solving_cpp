#include <bits/stdc++.h>

using namespace std;



void recur(vector<vector<int>>& vectors1, vector<vector<int>>& vectors2, int index, int c1, int c2 ,int r1){
    if( index > r1 ){
        return;
    }

    for (int i=0; i < c2; i++)
    {
        cout<<multiply(vectors1[index],vectors2[i],c1)<<" ";
    }
    
    

}

int multiply(vector<int>& vec1, vector<int>& vec2 ,int size){
    int res=0;
    for (size_t i = 0; i < size; i++)
    {
        res += vec1[i]*vec2[i];
    }
    return res;
}



int main(int argc, char const *argv[])
{   
    int r1,c1,r2,c2;
    cin>>r1>>c1;
    int k;


    vector<vector<int>> vectors1;
    for (size_t i = 0; i < r1; i++)
    {
        vector<int> tmp;
        for (size_t j = 0; j < c1; j++)
        {
            cin>>k;
            tmp.push_back(k);
        }
        vectors1.push_back(tmp);
    }
     

    cin>>r2>>c2;
    vector<int> vec(r2, 0); 
    vector<vector<int>> arrayOfVectors(c2, vec);

    for (size_t i = 0; i < r2; i++)
    {
        for (size_t j = 0; j < c2; j++)
        {
            cin>>k;
            arrayOfVectors[j][i]=k;       
        }

    }


    
    recur(vectors1,arrayOfVectors,0,c1,c2,r1);
    
     

    


    
    return 0;
}

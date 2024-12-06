#include <bits/stdc++.h>

using namespace std;


void recur(int k,const vector<int>& arr,int low,int high){
    
    int index = low + (high - low )/2 ;

    if( arr[index] == k){
        cout<<index+1<<endl;
        return;
    }else if( low > high ){
        cout<<-1<<endl;
        return;
    }else if( arr[index] < k ){
        recur(k,arr,index+1,high);
    }else{
        recur(k,arr,low,index-1);
    }
    
}



int main(int argc, char const *argv[])
{
    int l,k,s;
    vector<int> arr;
    cin>>l;

    for (size_t i = 0; i < l; i++)
    {
        cin>>k; 
        arr.push_back(k);
    }
    
    cin>>s;
    for (size_t i = 0; i < s; i++)
    {
        cin>>k;
        recur(k,arr,0,l-1);
    }
    
    return 0;
}

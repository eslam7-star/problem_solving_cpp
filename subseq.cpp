#include <bits/stdc++.h>

using namespace std;



void recur(string str,string l,int m){

    if( l.size() > 0 ){
        cout<<l<<endl;
    }
    
    for (size_t i = m; i < str.size(); i++)
    {
        recur(str,l+str[i],i+1);
    }
    
}


int main(int argc, char const *argv[])
{
    string str;
    cin>>str;

    recur(str,"",0);    
    return 0;
}

#include <bits/stdc++.h>

using namespace std;



void recur(int line,int input){
    if(line == 0){
        return;
    }
    
    recur(line-1,input);
    

    for (size_t i = 0; i < input-line ; i++)
    {
        cout<<" ";
    }
    for (size_t i = 0; i < 2*line - 1; i++)
    {
        cout<<'*';
    }
    cout<<endl;

}
    
    



int main(int argc, char const *argv[])
{
    int x;
    cin>>x;
    recur(x,x);

    return 0;
}

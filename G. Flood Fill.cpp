#include <bits/stdc++.h>

using namespace std;

void recur(const vector<char>& matrix, int x, int y, int w_vol){
    
    int matrix_index = x+8*y;
    if( matrix[matrix_index] == '*'){
        return;
    }

    recur(matrix,x+1,y,w_vol+1);
    recur(matrix,x-1,y,w_vol+1);
    recur(matrix,x,y+1,w_vol+1);
    recur(matrix,x,y-1,w_vol+1);
    
    cout<<w_vol<<endl;
}



int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;

    vector<char> matrix;

    for (size_t i = 1; i <= n*m; i++)
    {
        char c;
        cin>>c;
        matrix.push_back(c);
    }
    int x,y;
    cin>>x>>y;

    recur(matrix,x,y,0);

    
    return 0;
}

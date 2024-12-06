#include <bits/stdc++.h>

using namespace std;

int recur(const vector<char>& matrix, int x, int y, int w_vol, int n, int m, vector<int>& covered){
    
    int matrix_index = x+n*(y-1) - 1;
    if( x > n || y > m || matrix_index >= n*m || matrix_index < 0 || matrix[matrix_index] == '*' || covered[matrix_index]  ){
        return 0;
    }

    covered[matrix_index]++;
    return 1 + recur(matrix,x+1,y,w_vol+1,n,m,covered) + recur(matrix,x-1,y,w_vol+1,n,m,covered) + recur(matrix,x,y+1,w_vol+1,n,m,covered) + recur(matrix,x,y-1,w_vol+1,n,m,covered);
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

    vector<int> covered(n*m,0);
    cout<<recur(matrix,x,y,0,n,m,covered)<<endl;
    
   
    
    return 0;
}

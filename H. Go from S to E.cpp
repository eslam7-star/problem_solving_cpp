#include <bits/stdc++.h>

using namespace std;

bool recur(const vector<vector<char>>& matrix, int x, int y, int n,int m, vector<vector<bool>>& covered){
    if( x < 0 || x >= n || y < 0 || y >= m || covered[x][y] || matrix[x][y] == '*'){
        return 0;
    }if( matrix[x][y] == 'E' ){
        return 1;
    }
    
    covered[x][y] = 1;
    return recur(matrix,x+1,y,n,m,covered) || recur(matrix,x-1,y,n,m,covered) || recur(matrix,x,y+1,n,m,covered) || recur(matrix,x,y-1,n,m,covered);
}


int main()
{
    int n,m;
    cin>>n>>m;
    int x=0,y=0;

    vector<vector<char>> matrix(n,vector<char>(m));
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cin>> matrix[i][j];
            if( matrix[i][j] == 'S' ){
                y = j;
                x = i;
            }
        }
        
    }

    vector<vector<bool>> covered(n,vector<bool>(m,false));
    recur(matrix,x,y,n,m,covered)? cout<<"YES":cout<<"NO";
    cout<<endl;

    return 0;
}

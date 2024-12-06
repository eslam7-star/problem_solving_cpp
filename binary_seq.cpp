#include <iostream>
#include <string>

void bin_seq(int k, std::string s){
    
    if ( k == 0 )
    {
        std::cout<<s<<std::endl;
        return;
    }
    k--;
    bin_seq(k,s+"0");
    bin_seq(k,s+"1");
}

void rec(int h){
    if ( !h )
    {
        return;
    }
    int l;
    std::cin>>l;
    bin_seq(l,"");
    rec(--h);
}

int main(int argc, char const *argv[])
{
    int n;
    std::cin>>n;
    rec(n);

    return 0;
}

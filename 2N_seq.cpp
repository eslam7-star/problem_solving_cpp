#include <iostream>
#include <string>

void bin_seq(int k, std::string s,int sum,int sum2){
    
    if ( s.size() == 2*k )
    {
        if( sum == sum2 ){
            std::cout<<s<<std::endl;
        }
        return;
    }

    bin_seq(k,s+"0",sum,sum2);
    if( s.size() < k ){
        bin_seq(k,s+"1",sum+1,sum2);    
    }else{
        bin_seq(k,s+"1",sum,sum2+1);
    }
}

void rec(int h){
    if ( !h )
    {
        return;
    }
    int l;
    std::cin>>l;
    bin_seq(l,"",0,0);
    rec(--h);
}

int main(int argc, char const *argv[])
{
    int n;
    std::cin>>n;
    rec(n);

    return 0;
}

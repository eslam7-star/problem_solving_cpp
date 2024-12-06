#include <iostream>


int main(int argc, char const *argv[])
{
    std::string s;
    std::getline(std::cin,s);

    std::string w = "hello";
    int completed = 0;
    
    const char* wptr = w.c_str();
    const char* sptr = s.c_str();

    while (*sptr && *wptr)
    {   
        if( *sptr == *wptr ){
            wptr++;
        }

        sptr++;
    }


    if (!*wptr){
        completed = 1;
    }

    (completed)? std::cout<<"YES":std::cout<<"NO";
    std::cout<<std::endl;
    return 0;
}

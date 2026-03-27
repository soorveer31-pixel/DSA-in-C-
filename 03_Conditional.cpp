#include <iostream>
using namespace std;

int main(){
    int a, b;
    std::cout<<"Enter number a: ";
    std::cin>>a;
    std::cout<<"Enter number b: ";
    std::cin>>b;
    if (a>b)
    {
        std::cout<<"a is greater then b";
    }
    else{
        std::cout<<"b is greater then a";
    }
    return 0;
}
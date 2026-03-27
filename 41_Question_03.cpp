#include <iostream>
using namespace std;

int main(){
    int num;
    long long binary=0,reverse=0;
    cout<<"Enter the number: ";
    cin>>num;

    while (num!=0)
    {
        binary = binary*10 + (num&1);
        num = num>>1;
    }
    while (binary!=0)
    {
        reverse = reverse*10 + (binary % 10);
        binary/=10;
    }
    
    cout<<reverse;
    return 0;
}
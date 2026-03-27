#include <iostream>
using namespace std;

int main(){
    int num,org;
    long long reverse=0;
    cout<<"Enter the number: ";
    cin>>num;
    org = num;

    if (num<0){
        num = -num;
    }
    while (num!=0)
    {
        reverse = reverse*10 + (num%10);
        num = num/10;
    }

    if (reverse > INT32_MAX){
        reverse = 0;
    }

    if (org<0)
    {
        cout<<"The reversed number is "<<(-reverse);
    }
    else{
        cout<<"The reversed number is "<<reverse;
    }
    return 0;
}
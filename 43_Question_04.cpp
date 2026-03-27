#include <iostream>
using namespace std;

int bi(int n){
    int m = n;
    int mask = 0;

    if (m==0)
    {
        return 1;
    }
    while (m!=0)
    {
        mask = (mask << 1) | 1;
        m >>= 1;
    }
    int ans = (~n) & mask;
    return ans;
}

int main(){
    int num,ans;
    cout<<"Enter the number: ";
    cin>>num;

    ans = bi(num);
    cout<<"The compliment of "<<num<< " in base 10 is "<<ans;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n,sum=0,prd=1;

    cout<<"Enter the value of n: ";
    cin>>n;

    while (n>0)
    {
        sum += (n%10);
        prd *= (n%10);
        n /= 10;
    }
    cout<<"The diffrence of product and sum is "<<(prd-sum);
    
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n;
    int a=0,b=1;

    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<"Printing Febonacci series"<<endl;
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i < n-1; i++)
    {
        int sum = a+b;
        cout<<sum<<" ";
        a = b;
        b = sum;
    }
    
    return 0;
}
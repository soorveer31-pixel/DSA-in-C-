#include <iostream>
using namespace std;

int power(int a,int b){
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans*a;
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<"Enter the power of the number: ";
    cin>>b;

    int result = power(a,b);
    cout<<"The answer is "<<result;
    return 0;
}
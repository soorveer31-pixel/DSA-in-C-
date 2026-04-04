#include<iostream>
using namespace std;

int bit_count(int num){
    int a = num;
    int count = 0;
    while (a!=0)
    {
        int mask = a&1;
        count += mask;
        a >>= 1;
    }
    return count;
}
int main(){
    int a,b,result;
    cout<<"Enter number a: ";
    cin>>a;
    cout<<"Enter number b: ";
    cin>>b;
    
    result = bit_count(a) + bit_count(b);

    cout<<"The sum of number of bits in the two numbers is "<<result;

    return 0;
}
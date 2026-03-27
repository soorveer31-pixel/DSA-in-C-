#include <iostream>
using namespace std;

int main(){
    int num,i=1;
    cout<<"Enter the number: ";
    cin>>num;

    while (i<=num)
    {
        int j=1;
        while (j<=(num-i+1))
        {
            cout<<j<<" ";
            j++;
        }

        int k=1;
        while (k<=i-1)
        {
            cout<<"* * ";
            k++;
        }
        
        int l=1,value=num-i+1;
        while (l<=(num-i+1))
        {
            cout<<value<<" ";
            value--,l++;
        }
        cout<<endl;
        i++; 
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int num,i=1;
    cout<<"Enter the number: ";
    cin>>num;

    while (i<=num)
    {
        int j=1,count=i;
        while (j<=i)
        {
            cout<<count<<" ";
            j++,count++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}
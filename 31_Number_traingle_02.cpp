#include <iostream>
using namespace std;

int main(){
    int num,i=1;
    cout<<"Enter the number: ";
    cin>>num;

    while (i<=num)
    {
        int j=1,count=i;
        while (j<=(num-i+1))
        {
            cout<<count;
            count++,j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}
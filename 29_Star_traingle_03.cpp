#include <iostream>
using namespace std;

int main(){
    int num,i=1;
    cout<<"Enter the number: ";
    cin>>num;

    while (i<=num)
    {
        int j=1;
        while (j<=(i-1))
        {
            cout<<"  ";
            j++;
        }
        
        int k=1;
        while (k<=(num-i+1))
        {
            cout<<"* ";
            k++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}
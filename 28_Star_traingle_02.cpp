#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int i=num;
    
    while (i>0)
    {
        int j=1;
        while (j<=i)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i--;
    }

    return 0;
}
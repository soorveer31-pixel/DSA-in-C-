#include <iostream>
using namespace std;

int main(){
    int n,i=1;
    cout<<"Enter the number n: ";
    cin>>n;

    for(;;){
        if (i<=n)
        {
            cout<<i<<" ";
        }else
        {
            break;
        }

        i++;
        
    }
    return 0;
}
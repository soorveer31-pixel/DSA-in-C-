#include <iostream>
using namespace std;

int main(){
    int num,i=1;
    char ch = 'A';
    cout<<"Enter the number: ";
    cin>>num;

    while (i<=num)
    {
        int j=1;
        while (j<=num)
        {
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        ch += 1,i++;
    }
    
    return 0;
}
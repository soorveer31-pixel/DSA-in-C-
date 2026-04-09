#include <iostream>
using namespace std;

bool search(int *arr,int size,int key){
    for (int i = 0; i < size; i++)
    {
        if (key==arr[i])
        {
            return true;
        } 
    }
    return false; 
}

int main(){
    int arr[10] = {1,5,-2,10,8,-3,12,17,-9,-1};
    int key;
    cout<<"Enter the key you want to search: ";
    cin>>key;

    bool found = search(arr,10,key);
    if (found)
    {
        cout<<"Key is present";
    }
    else{
        cout<<"Key is not present";
    }
    return 0;
}
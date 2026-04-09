#include <iostream>
using namespace std;

void reversedArray(int *arr, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        arr[i] = arr[i] ^ arr[size - 1 - i];
        arr[size - 1 - i] = arr[i] ^ arr[size - 1 - i];
        arr[i] = arr[i] ^ arr[size - 1 - i];
    }
}

void printingArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Before Reverse:" << endl;
    printingArray(arr, 10);
    reversedArray(arr, 10);
    cout << "After Reverse:" << endl;
    printingArray(arr, 10);
    return 0;
}
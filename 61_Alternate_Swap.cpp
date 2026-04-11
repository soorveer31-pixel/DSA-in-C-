#include <iostream>
using namespace std;

void swapAlternate(int *arr, int size)
{
    for (int i = 0; i < size-1; i+=2)
    {
        swap(arr[i], arr[i+1]);
    }
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Before swap:\n";
    printArray(arr, 9);
    swapAlternate(arr, 9);
    cout << "After Alternate Swap:\n";
    printArray(arr, 9);
    return 0;
}
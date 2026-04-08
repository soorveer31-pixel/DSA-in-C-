#include <iostream>
using namespace std;

int sumOfArray(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int size, arr[100];
    cout << "Enter the size of the Array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of Array: ";
        cin >> arr[i];
    }

    cout << "The sum of all element of an array is " << sumOfArray(arr, size);
    return 0;
}
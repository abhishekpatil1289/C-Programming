#include <iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    int start = 0;
    int end = iSize - 1;
    int temp = 0;

    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}   
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << "\t"; // 10 20 30 10 30 40 10 40 10
    }
    cout << "\n";
    Reverse(arr, 9);
    
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << "\t"; // 10 40 10 40 30 10 30 20 10
    }
    return 0;
}
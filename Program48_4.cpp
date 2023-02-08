#include <iostream>
using namespace std;

template <class T>
int SearchLast(T *arr, int iSize, T iNo)
{
    int temp = 0;
    for (int i = 0; i < iSize; i++)
    {
        if (arr[i] == iNo)
        {
            temp = i + 1;
        }
    }
    return temp;
}
int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = SearchLast(arr, 9, 40);
    printf("%d", iRet); // 8
    return 0;
}
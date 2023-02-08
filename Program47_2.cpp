#include <iostream>
using namespace std;

template <class T>
T Mult(T No, T No2, T No3)
{
    T icnt = 0;

    if (No > No2)
    {
        icnt = No;
    }
    else
    {
        icnt = No2;
    }
    
    if (icnt > No3)
    {
        return icnt;
    }
    else
    {
        return No3;
    }
        
}

int main()
{
    float No = 0, No2 = 0, No3 = 0;
    cout << "Enter the first Number \n";
    cin >> No;

    cout << "enter the second Number\n";
    cin >> No2;

    cout << "enter the second Number\n";
    cin >> No3;

    float fret = Mult(No, No2, No3);

    cout << "Grater Number is :- \n"
         << fret << "\n";
}

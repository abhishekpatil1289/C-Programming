#include<iostream>
using namespace std;

template <class T>
T Mult (T No,T No2)
{
    T ans = 0;
    ans = No * No2;
    return ans;
}

int main()
{
    float No = 0, No2 = 0;
    cout<<"Enter the first Number \n";
    cin >> No;

    cout << "enter the second Number\n";
    cin>>No2;

    float fret = Mult(No,No2);

    cout << "Multiplaction of float is \n" << fret << "\n";
}

// Bai14_GiaiThua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Tinh Giai Thua " << endl;
    int so, giaithua = 1;
    cout << "Nhap so de tih giai thua:";
    cin >> so;
    for ( int i =1; i<= so; i++)
    {
        giaithua *= i;
    }
    cout << so << " ! = " << giaithua;
    return 0;
}


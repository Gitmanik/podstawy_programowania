#include <iostream>
using namespace std;

int main()
{
    int rozmiar = 10;

    for (int x = 0; x < rozmiar; x++)
        cout << "#";
    cout << endl;


    cout << "#";
    for (int x =0; x < rozmiar - 2; x++)
        cout << "*";
    cout << "#";
    cout << endl;

    for (int y = 0; y < rozmiar; y++)
    {
        if (y < rozmiar/2)
        {
            for (int x = 0; x < rozmiar; x++)
            {
                if (x == y)
                {
                    cout << "\\";
                }
                else
                    cout << "*";
            }
            cout << endl;
        }
        else if (y > (rozmiar - 1)/2) //wieksze
        {
            for (int x = 0; x < rozmiar; x++)
            {
                if (x == rozmiar - y - 1)
                {
                    cout << "/";
                }
                else
                    cout << "*";
            }
            cout << endl;
        }
        else if (rozmiar % 2 == 1)
        {
            for (int x = 0; x < rozmiar; x++)
            {
                if (x == y)
                {
                    cout << "#";
                }
                else
                    cout << "*";
            }
            cout << endl;
        }
    }
    
    cout << "#";
    for (int x =0; x < rozmiar - 2; x++)
        cout << "*";
    cout << "#";
    cout << endl;

    for (int x = 0; x < rozmiar; x++)
        cout << "#";
    cout << endl;

}
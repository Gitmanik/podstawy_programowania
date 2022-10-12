#include <iostream>
using namespace std;
int main()
{
    int rozmiar = 0;
    // cout << "wprowadz rozmiar: ";
    // cin >> rozmiar;
    // while (rozmiar % 2 != 0)
    // {
    //     cout << "rozmiar nie moze byc nieparzysty, wprowadz nowy rozmiar: ";
    //     cin >> rozmiar;
    // }
    rozmiar = 6;


    for (int diament=0; diament < rozmiar; diament++)
    {
        for (int wysokosc=0; wysokosc<rozmiar/2; wysokosc++)
        {
            for (int szerokosc=0; szerokosc<rozmiar;szerokosc++)
            {
                if (wysokosc == rozmiar / 2 - szerokosc-1)
                {
                    cout << "/";
                }
                else if (wysokosc == szerokosc-rozmiar/2)
                {
                    cout << "\\";
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
        for (int wysokosc=0; wysokosc<rozmiar/2; wysokosc++)
        {
            for (int szerokosc=0; szerokosc<rozmiar;szerokosc++)
            {
                if (wysokosc == szerokosc)
                {
                    cout << "\\";
                }
                else if (wysokosc == rozmiar - szerokosc-1)
                {
                    cout << "/";
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
    }
}
//Paweł Reich, ACiR4
#include <iostream>
#include <limits.h>

#define SIZE 10

int main()
{
    int tab[SIZE];

    //Wprowadzanie wartości
    int liczba_wartosci;
    for (liczba_wartosci = 1; liczba_wartosci <= SIZE; liczba_wartosci++)
    { // liczba_wartosci = 1 jako korekta do lacznej liczby pozycji w tablicy
        int temp = 0;
        std::cin >> temp;
        tab[liczba_wartosci - 1] = temp;
        if (temp == 0)
            break;
    }

    //Wyznaczanie max, min, sredniej
    int max = -INT_MAX, min = INT_MAX;
    double suma = 0;
    for (int idx = 0; idx < liczba_wartosci; idx++)
    {
        int liczba = tab[idx];
        if (liczba > max)
            max = liczba;

        if (liczba < min)
            min = liczba;

        suma += liczba;
    }

    std::cout << "Tablica wartosci = [";
    for (int idx = 0; idx < liczba_wartosci; idx++)
            std::cout << " " << tab[idx] << " " << ((idx < liczba_wartosci - 1) ? "," : "");

    std::cout << "]" << std::endl;
    std::cout << "a) " << liczba_wartosci << std::endl;
    std::cout << "b) " << max << std::endl;
    std::cout << "c) " << min << std::endl;
    std::cout << "d) " << suma/liczba_wartosci << std::endl;

    return 0;
}
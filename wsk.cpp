#include <iostream>
int main()
{
    int x = 5;
    int *pi = &x; // pi wskazuje na x
    int **ppi = &pi; // ppi wskazuje na pi
    int y = x;



    
    // y lezy na 0x61ff10 (przykładowo)
    // pi wskazuje na adres 0x61ff10 (y)
    // ppi wskazuje na adres 0x61ff14 (pi)

    // *ppi odnosi się do adresu na który wskazuje ppi (0x61ff14 - pi)
    // **ppi odnosi się do adresu na który wskazuje pi (ppi -> pi -> y)


    *ppi = &y; // pi = &y;
    *pi = 6;   // y = 6;
    **ppi = 7; // *pi = 7; y = 7;

    const char* str = "gowno";

    str++;
    char c = *str; //o (dereferencja adresu do wartości char) (przesunelismy wskaznik o jeden w prawo, wiec 'g' znika)
    std::cout << c << std::endl; 
    std::cout << str; //owno (przesunelismy wskaznik o jeden w prawo, wiec 'g' znika)

}
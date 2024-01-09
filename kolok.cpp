#include <iostream>

using namespace std;

void zmienne(int a, int b) {
    float x = 6.01f;
    b *= a - 3;
    cout << a++ << endl;
    cout << ++a << endl;
    cout << b << endl;
    cout << x / 2 / 4 << endl;
    cout << a + b + x << endl;
}

#define DL_NAPIS 20

int fun1(float *px, int &n) {
    *px += px[2] + *(px+n-1);
    return n--;
}

char *fun2(char *sour, char *dest)
{
    while(*sour != ' ' && *sour != '\0')
        *(dest++) = *(sour++);
    *dest = '\0';
    return sour;
}

int main()
{
    float tab[] = {7,5,3,1};
    int n = 4;
    n = fun1(tab, n);
    cout << n << endl;
    cout << *tab << endl;
    char nap1[] = "jeden dwa trzy";
    char nap2[DL_NAPIS];
    char *nap3;
    nap3 = fun2(nap1,nap2);
    cout << nap3 << endl;
    cout << nap2 << endl;
    cout << nap3[2] << endl;
    cout << fun2(nap3,nap2) << endl;


    // zmienne(2,2);
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
 
    long long a, n, k;
    //a^n mod k
 
    a = 8;
    n = 100000000 ;
    k = 19;

    // while (cin >> a >> n >> k)
    // {
        //a^2 mod k = ( (a mod k)^2 ) mod k
        long long wynik = 1;
 
        while (true)
        {
            for (int i = n - 1; i > 0; i--)
            {
                if ((long long) n / i == (float) n / i)
                {
                    cout << i << " " << n << endl;
                    for (int b = 0; b < i; b++)
                    {
                        // cout << n % i << endl;
                        // cout << n / i;
                        int pot = n/i;
                        // cout << "pot=" << pot <<  "wynik=" << wynik << " n=" << n << " i=" << i << " " << a << "^" << pot << "%" << k << "=" << ((long long) pow(a, pot)) % k << "*" << wynik << "=" << ((long long) pow(a, pot)) % k * wynik <<endl;
                        wynik = wynik * (long long) pow(a, pot) % k;
                    }
                    n = n/i;
                    break;
                }
            }
            if (n == 2)
                break;
        }
        wynik = wynik % k;
 
         cout << wynik << endl;
    // }
 
    return 0;
}
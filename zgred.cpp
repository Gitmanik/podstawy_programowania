#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>
#include <limits.h>

using namespace std;

int main()
{
    int n;
    double srednia, suma=0, mini, maks;
    cin >> n;

    double* jeden = (double*)malloc(sizeof(double)*n);

    for (int i=0; i<n; i++)
    {
        cin >> jeden[i];
    }

    for (int i=0; i<n; i++)
    {
        suma+=jeden[i];
    }
    srednia=suma/n;

    mini=INT_MAX;
    maks=-INT_MAX;

    for (int i=0; i<n; i++){
        if (jeden[i]<mini)
            mini=jeden[i];
        else if (jeden[i]>maks)
            maks=jeden[i];
    }
    if ((maks+mini)==(2*srednia)){
        cout << fixed << setprecision(1) << mini << endl;
        cout << fixed << setprecision(1) << maks << endl;
    }
    else if ((maks+mini)<(2*srednia))
        cout << fixed << setprecision(1) << mini;
    else if ((maks+mini)>(2*srednia))
        cout << fixed << setprecision(1) << maks;

    free(jeden);
    return 0;
}

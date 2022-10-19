#include <iostream>
using namespace std;

int main()
{
    int rozmiar = 9;

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
        else
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
    cout << endl;gfjfxkugfj dsfhvjbsdf
    fbsdkhfgtdsrifguhdfug hdifkij
     jg hjdkfghug dhiughidfhg 
     rdbkjdsfgbeduiastgarsiut hgbsdaxjg bargjnge sio 
      b asregf kju.asfhisaeibj 
       egbdr bdrrbjse
        bvg bhagagr]
        [teg 
        
         
          d gbdfjkhg hgdrjkf;lk_(sfgsfd
          []gf
           po0)()FV980-eSD
        ]  BKJFGY)(WEFuVBS))]
        |{}g-9yu aw97 hjkasgbegef s.jsdo
        |&(IU) pSF BJJ
        |
        +}90 (OIBp00_IP)09
        KGuX>LJ<O{|)(*}{})}

        kjhv.B 79080+}
        _{
            ' :IU(HVn;n FS
            
            89-0mF(PIBKJ|
            () 9oipuZJBFHIOAIFOU:890A=]{P'
            {I_P{)FP{DF(A)_Wfdvjhfnbj 
            | 
            ]+}}}

    for (int x = 0; x < rozmiar; x++)
        cout << "#";
    cout << endl;

}
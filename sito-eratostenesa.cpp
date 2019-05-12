//sito Eratostenesa - generowanie liczb pierwszych
#include <iostream>
#include <math.h>
using namespace std;
const int MAX=10000;

void sito (int T[], int n)
{
    int i, m;
    for (i=2;i<=n;i++)
    {
        T[i]=1;
    }
    i=2;
    while (i<=sqrt(n))
    {
        m=2*i;
        while (m<=n)
        {
            T[m]=0;
            m+=i; //m=m+i;
        }
        do i++; while (T[i]==0 && i<=n);
    }
}

int main()
{
    int n, T[MAX];
    cout << "Podaj liczbe naturalna: ";
    cin >> n;
    sito (T,n);
    for (int i=2;i<=n;i++)
        if (T[i]==1) cout << i << " ";
    cout<<endl;
    return 0;
}

/*/
Plus Minus
Learnt : use of double and precision
Note: This challenge introduces precision problems. The test cases are scaled to six decimal places,
though answers with absolute error of up to 10^-4 are acceptable.

/*/

#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int ar[n];
    int i,k1,k2,k3;

    float sum1,sum2,sum3;
    k1 = k2 = k3 = 0;
    sum1 = sum2 = sum3 = 0;

    for(i=0; i<n; i++)
    {
        cin>>ar[i];
    }

    for(i=0; i<n; i++)
    {
        if(ar[i]>0)
        {
            k1++;
        }
        else if(ar[i]<0)
        {
            k2++;
        }
        else if(ar[i]==0)
        {
            k3++;
        }
    }

    sum1 = (double)n/k1;
    sum2 = (double)n/k2;
    sum3 = (double)n/k3;
    cout<<1/sum1<<endl<<1/sum2<<endl<<1/sum3;

    //printf("%0.06lf\n%0.06lf\n%0.06lf\n", 1/sum1, 1/sum2, 1/sum3);

    //cout<<k1<<" "<<k2<<" "<<k3;

    return 0;
}



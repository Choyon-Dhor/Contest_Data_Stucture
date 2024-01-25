#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b;
    while(cin>>a)
    {
        if(a<0)
        {
            break;
        }
        b= ((a*a)+a+2)/2;
        cout<<b<<endl;
    }
    return 0;
}

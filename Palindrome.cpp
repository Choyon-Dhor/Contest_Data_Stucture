#include <bits/stdc++.h>
using namespace std;
int Reverse(int n)
{
    int rev=0, reminder=0;
    while(n>0)
    {
        reminder = n%10;
        rev = rev * 10 + reminder;
        n/=10;
    }
    return rev;
}

int main()
{
    int t,ce=1;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        if(n==Reverse(n))
        {
            cout<<"Case "<<ce<<": Yes"<<endl;
        }
        else{
            cout<<"Case "<<ce<<": No"<<endl;
        }
        ce++;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int count=0;
    if(a.size()==b.size())
    {
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if(a[i]==b[j])
            {
                count++;
            }
        }
        
    }
    if(count==a.size())
        {
            cout<<"Yes"<<endl;
        }
    else{
            cout<<"No"<<endl;
    }
    }
    else
    {
        cout<<"No"<<endl;
    }
    
    return 0;
}

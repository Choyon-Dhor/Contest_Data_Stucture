#include <bits/stdc++.h>
using namespace std;
/*Record breaking days, if in n park n numbers of visitors visits per day then find out the record breaking days if following conditions are matched- 
1: if the number is the strictly largest number from its previous number
2: if the number is larger than the next number  */
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    arr[n]=-1;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if(n==0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    int mx=-1;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>mx && arr[i]>arr[i+1]) ans++;
        mx= max(arr[i],mx);
    }
    cout<<"Record breaking days are: "<<ans<<endl;

    
    return 0;
}
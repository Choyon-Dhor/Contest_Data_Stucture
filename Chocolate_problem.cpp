#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int choco=n;
    int wrappers=choco/3;
    choco+=wrappers;
    wrappers+=(wrappers%3);
    choco+=(wrappers/3);
    cout<<choco<<endl;
}
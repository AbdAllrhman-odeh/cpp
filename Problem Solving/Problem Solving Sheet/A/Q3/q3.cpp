#include<iostream>
using namespace std;
 
void solve()
{
    int a=0,b=0;
    int count=0;
 
    cin>>a>>b;
 
    for(;a<=b;)
    {
        count++;
        a=a*3;
        b=b*2;
    }
 
 
    cout<<count;
}
 
int main()
{
    solve();
    return 0;
}
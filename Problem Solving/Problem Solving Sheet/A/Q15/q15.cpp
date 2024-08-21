//question link: https://codeforces.com/contest/732/problem/A
#include<iostream>
using namespace std;

void solve()
{
    int k,r;
    cin>>k>>r;
    
    int min=1;
    
    for(int i=1;;i++)
    {
        int totalPrice=i*k;
        if(totalPrice%10==0) break;
        else if((totalPrice%10)-r==0) break;
        
        min++;
    }
    
    cout<<min;
}

int main()
{
    solve();
    
    return 0;   
}
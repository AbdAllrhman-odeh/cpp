#include<iostream>
using namespace std;
 
void solve()
{
    int n=0,count=0,sum=0,c=0;
 
    
    cin>>n;
    
    for(int i=1;i<=n*3;i++)
    {   
        int num;
        cin>>num;
 
        if(i%3==0)
        {
            sum+=num;
            if(sum>1) count++; 
            sum=0;
        }
        else
        {
            sum+=num;
        }
    }
 
    cout<<count;
}
 
int main()
{
    solve();
    return 0;
}
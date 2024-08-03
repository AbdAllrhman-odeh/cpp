#include<iostream>
using namespace std;
 
void solve()
{
    int n=0,h=0,minWidth=0;
 
    cin>>n>>h;
    int *arr=new int[n];
 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>h) //bla bla bla
        {
            minWidth+=2;
        }
        else
        { //bla bla
            minWidth++;
        }
    }
 
    cout<<minWidth;
 
    return;
}
 
int main()
{
    solve();
    return 0;
}
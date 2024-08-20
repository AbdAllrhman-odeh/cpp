By AbdallrhmanOdeh, contest: Codeforces Round 238 (Div. 2), problem: (A) Gravity Flip, Accepted, #, Copy
#include<iostream>
using namespace std;
 
void solve()
{
    int n=0;
    cin>>n;
 
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 
    //arrange the array MiN->MaX
 
    int temp=0;
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
 
int main()
{
    solve();
    return 0;
}
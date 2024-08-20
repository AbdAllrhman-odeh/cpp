#include<iostream>
using namespace std;
 
void solve()
{
    int myI = 2, myJ = 2, count = 0;
    int arr[5][5];
    int iIndex = 0, jIndex = 0, sumForI = 0, sumForJ = 0;
 
 
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                iIndex=i;
                jIndex=j;
            }
        }
    }
 
    sumForI=iIndex-myI;
    if(sumForI<0) sumForI*=-1;
 
    sumForJ=jIndex-myJ;
    if(sumForJ<0) sumForJ*=-1;
 
    count=sumForI+sumForJ;
 
    cout<<count;
}
 
int main()
{
    solve();
    return 0;
}
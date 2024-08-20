#include<iostream>
using namespace std;
 
void solve()
{
    int n;
    string games;
 
    cin>>n>>games;
 
    int aCount=0,dCount=0;
 
    for(int i=0;i<games.length();i++)
    {
        if(games[i]=='A') aCount++;
        else if(games[i]=='D') dCount++;
    }
 
    if(aCount==dCount)
    {
        cout<<"Friendship";
        return;
    }
 
    aCount>dCount?(cout<<"Anton"):(cout<<"Danik");
    return;
}
 
int main()
{
    solve();
    return 0;
}
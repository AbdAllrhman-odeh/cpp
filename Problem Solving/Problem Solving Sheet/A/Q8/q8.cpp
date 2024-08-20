#include<iostream>
using namespace std;
   
 
void solve()
{
    string str;
    cin>>str;
 
    int count=0;
    int pos=0;
    // int pos=str.find('e',2); //search for e from [2] and after.   
    // if(pos!=string::npos)//found it
    // {
    //     cout<<"found it:)";
    // }
    // else//did not find it
    // {
    //     cout<<"Nope:(";
    // }
 
    for(int i=0;i<str.length();i++)
    {
        char c=str[i];
        pos=str.find(c,i+1);
        if(pos!=string::npos) continue;
        else  count++;
    }
 
    count%2==0 ? cout<<"CHAT WITH HER!":cout<<"IGNORE HIM!";
 
}
 
int main()
{
    solve();
    return 0;
}
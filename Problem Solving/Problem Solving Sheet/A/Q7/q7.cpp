#include<iostream>
using namespace std;
 
void solve()
{
    string str1,str2;
    cin>>str1>>str2;
 
    string str1_upperCase="";
    string str2_upperCase="";
 
    for(int i=0;i<str1.length();i++)
    {
        str1_upperCase+=(toupper(str1[i]));
        str2_upperCase+=(toupper(str2[i]));
    }
 
    if(str1_upperCase>str2_upperCase) cout<<"1";
    else if(str2_upperCase>str1_upperCase) cout<<"-1";
    else cout<<"0";
}
 
int main()
{
    solve();
    return 0;
}
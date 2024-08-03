#include<iostream>
#include<string>
using namespace std;

int aSteps(char c1,char c2)
{
    //A -> Z
    // return (int(c1)>int(c2))?(int(c1)-int(c2)):(int(c2)-int(c1));
    if(int(c2)>=int(c1)) 
        return int(c2)-int(c1);

    //int(c2) > int(c1)
    //ex : (c1='d',c2='c')

    //count from 'd' -> 'z'
    int count=int('z')-int(c1);
    //jump to 'a'
    count++;
    //count from 'a' -> c2='c'
    count+=(int(c2)-int('a'));

    return count;
}  

int zSteps()
{
    return 1;
}

void solve()
{
    string str;
    cin>>str;

    cout<<aSteps('c','g');

    // int totalCount=0;
    // int aCount=0,zCount=0;

    // int index=0;
    // char originalChar='a';
    // for(char c=str[index];index<str.length();c++)
    // {
    //     originalChar=c;
    //     if(c=='z')
    //         c='a';
            
    //     if(c==str[index])
    //     {
    //         if(index+1<str.length())
    //             zCount=int(originalChar)-int(str[index+1]);
    //         else
    //             zCount=int(originalChar)-int(str[index]);
            
    //         zCount+=26;

    //         if(aCount>zCount)
    //             totalCount+=zCount;
    //         else
    //             totalCount+=aCount;

    //         cout<<"aCout is: "<<aCount<<endl;
    //         cout<<"zCout is: "<<zCount<<endl;

    //         cout<<"Total Count is"<<totalCount<<endl;
    //         cout<<"c= "<<c<<" ,str["<<index<<"]="<<str[index]<<endl;

    //         index++;
    //         aCount=0;
    //     }
    //     aCount++;
    // }
}

int main()
{
    solve();
    return 0;
}

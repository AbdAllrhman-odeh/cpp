#include<iostream>
using namespace std;

class A
{
    int x,y;
    
    public:
    A(int x,int y)
    {
        cout<<"Const for A"<<endl;
        this->x=x;
        this->y=y;
    }
    void print()
    {
        cout<<"Class A"<<endl;
        cout<<"x : "<<x<<endl;
        cout<<"y : "<<y<<endl;
    }
    ~A()
    {
        cout<<"Dest for A"<<endl;
    }
};

class B{
    int x,y;
    A obj;
    public:
    
    B(int x,int y,int z,int w):obj(x,y)
    {
        this->x=z;
        this->y=w;
        cout<<"Const For B"<<endl;
    }
    void print()const
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
    ~B()
    {
        cout<<"Dest for B"<<endl;
    }
};

int main()
{
    B obj1(10,20,30,40);
 
    return 0; 
}
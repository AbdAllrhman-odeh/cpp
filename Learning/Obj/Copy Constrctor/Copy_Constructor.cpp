#include<iostream>
using namespace std;

class person{
    string name;
    int age;
    int *ptr;
    static int counter;

    public:
    person(string name,int age)
    {
        this->name=name;
        this->age=age;
        
        ptr=new int[5];
        for(int i=0;i<5;i++)
            ptr[i]=i*10;
        
        cout<<"Constructor for class Name "<<name<<endl;
        counter++;
    }
    void print()const
    {
        cout<<"class num:"<<counter<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"age: "<<age<<endl;

        for(int i=0;i<5;i++)
            cout<<ptr[i]<<" ";
        cout<<endl;
    }

    void changePtrValue();
    
    person(const person &other)
    {
        cout<<"---------------------------Copy Constructor---------------------------"<<endl;
        name=other.name;
        age=other.age;
        
        ptr=new int[5];
        for(int i=0;i<5;i++)
            ptr[i]=other.ptr[i];
    }
    
    ~person()
    {
        cout<<"Destructor for class Name "<<name<<endl;
        delete []ptr;
    }
};

void person::changePtrValue()
{
    for(int i=0;i<5;i++)
        ptr[i]=i;
}

void print(person obj)
{
    person obj1("ali",33);
}

int person::counter=0;
int main()
{
    person obj1("ahmed",22);
    person obj2(obj1);
    obj1.changePtrValue();
    obj2.print();
    obj1.print();

    // copy constructor casses:
    // 1-> person obj2(obj1);
    // 2-> person obj2=obj1;
    // 3-> call by value;
    // 4-> function that return an obj


    return 0;
}
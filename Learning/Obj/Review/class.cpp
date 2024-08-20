#include<iostream>
using namespace std;

class person{
    string name;
    int age;
    int *arr;
    
    static int count;
    
    public:
    person()
    {
        cout<<"Defalut Constructor"<<endl;
        count++;
        cout<<"Obj number: "<<count<<endl;
        name="";
        age=18;
        
        arr=new int[5];
        for(int i=0;i<5;i++)
        {
            arr[i]=i*10;
        }
    }
    person(string name,int age)
    {
        cout<<"Parametarized Constructor"<<endl;
        count++;
        cout<<"Obj number: "<<count<<endl;
        person::name=name;
        this->age=age;
        
        arr=new int[5];
        for(int i=0;i<5;i++)
        {
            arr[i]=i*10;
        }
    }
    ~person()
    {
        cout<<"Destructor for person name: "<<name<<endl;
        count--;
        delete arr;
        
    }
    person(person &other)
    {
        cout<<"Copy constructor"<<endl;
        count++;
        this->name=other.name;
        this->age=other.age;
        this->arr=new int[5];
        
        for(int i=0;i<5;i++)
            this->arr[i]=other.arr[i];
    }

    void print();
    void changeArrValue()
    {
        for(int i=0;i<5;i++)
        {
            arr[i]=i;
        }
    }
};
int person::count=0;

void person::print()
{
    cout<<"Obj number: "<<count<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"age: "<<age<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<"arr["<<i<<"]="<<arr[i]<<endl;
    }
}

class male{
    person obj;
    int id;
    string school;
    
    public:
    male(int id,string school,string name, int age):obj(name,age)
    {   
        cout<<"Const for male"<<endl;
        this->id=id;
        male::school=school;
    }
    ~male()
    {
        cout<<"Dest for male"<<endl;
    }
};

int main()
{
    // cout<<"Constructor types:1.default constructor \n 2.parametarized constructor \n 3.d/p constructor \n 4.copy constructor"<<endl;
    // cout<<"casses that the Compiler will not built an constructore (Copy Constructor):\n 1.call by value \n 2.assigment operator [obj=obj,obj(obj)] \n 3.obj=Function return an obj "<<endl;
    // person obj1;
    // person obj2("ali",22);
    // person obj1;
    // obj1.print();
    
    // person obj2=obj1;
    // obj2.print();

    // obj2.changeArrValue();
    // obj1.print();
    // obj2.print();

    male obj1(123,"just","ali",22);
    return 0;   
}
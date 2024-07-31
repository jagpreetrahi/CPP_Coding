#include<iostream>
using namespace std;

class A
{
    public:
    void func1()
    {
        cout<<"295"<<endl;
    }
};

class B: public A{
    public:

    void func2()
    {
        cout<<"Legend"<<endl;
    }
};


class C: public A{
    public:

    void func3()
    {
        cout<<"So High"<<endl;
    }
};

int main()
{
    A j1;
    j1.func1();
    B j2;
    j2.func1();
    j2.func2();

    C j3;
    j3.func1();
    j3.func3();
}



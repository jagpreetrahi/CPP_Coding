#include<iostream>
using namespace std;

// This is my base class
class Human
{
    public:
    float weight;
    int age;
    int height;


    int getAge()
    {
        return age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }

};

//  This is my child class

class Male: public Human{

    public:
    string color;
     

    void setColor(string cl)
    {
        this->color = cl;
    }
    
    void print()
    {
        cout<<this->weight<<endl;
        cout<<this->color<<endl;
        cout<<"All the males and womens are equal:"<<endl;
    }
};

class Women: protected Male
{
    public:
    string looks;

    void setLooks(string lk)
    {
        this->looks = lk;
    }

        

    void Skill()
    {
       
        cout<<this->looks<<endl;
        cout<<"In the entire world of era , i think womens have not a good skill while they are driving: "<<endl;
    }
};

int main()
{
    Male obj1;
    Women obj2;
    
    obj1.getAge();
    obj1.age;
    obj1.height;
    obj1.setWeight(54);
    obj1.setColor("white");
    obj1.print();
    obj2.setLooks("georgous");
    
    obj2.Skill();
    obj2.getPrint();
    
    
   
    
}


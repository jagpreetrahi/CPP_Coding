#include<iostream>
#include<string.h>
using namespace std;

class Hero
{ 
    public:
    int health;
    char level;
    char *name;
    static int power;


   Hero()
   {
    cout<<"simple called"<<endl;
    name = new char[100];
    
   }

   static int random()
   {
      return power;
   }
   
   

    //copy constructor
    Hero(Hero &h2){

        cout<<"constructor called"<<endl;
        char *ch = new char[strlen(h2.name) + 1];
        strcpy(ch , h2.name);
        this->name = ch;
        this->health = h2.health;
        this->level = h2.level;
    }

    void setName(char name[])
    {
        strcpy(this->name , name);
        
    }
    

    void print()
    {
        cout<<this->name<<endl;
        cout<<health<<endl;
        cout<<level<<endl;
    }

    ~Hero()
    {
        cout<<"Descructor Called"<<endl;
    }

};

int Hero::power = 10;
  int main()
{
    

    cout<<Hero::random()<<endl;
    // static 
    // Hero h1

    // dynamically 
    // Hero *h2 = new Hero();
    // delete h2; 
    // cout<<sizeof(h1)<<endl;











    // h1.health = 12;
    // h1.level = 'g';
    
    // char name[] = "babbar";
    //  h1.setName(name);
    //  h1.print();
   
   
    // Hero h2(h1);
    //  h2.print();

    //  h1.name[0] = 'M';
    //  h1.print();

    //  h2.print(); 
    //  Copy Assignment operator   
    //  h1 = h2;
    //  h1.print();
    //  h2.print();
}


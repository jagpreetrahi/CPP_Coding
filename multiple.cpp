#include<iostream>
using namespace std;

// this is the parent class
class Instagram
{
    public:
    int follower;
    int post;


    void  Reels()
    {
        cout<<"Bhai kitni reels dekha ga: "<<endl;
    }

};

// this is the another class which created , for class person in case of multiple inheritance
class Facebook
{
    public:
    int following;
    string Gf;


    void video()
    {
        cout<<"Bhai facebook mai woh maja nhi: "<<endl;
    }
};


// this is the child class and it inherit the property of class instagram and facebook at a time
class person: public Instagram , public Facebook 
{
    public:
    int posts;

    void Post()
    {
        cout<<"Bhai mai toh bs post dekhta hu , reels nhi: "<<endl;
    }
};


int main()
{
    person p1;
    p1.Post();
    p1.video();
    p1.Reels();
}
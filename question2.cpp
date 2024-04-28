//question 2

#include <iostream>
using namespace std;

class A
{

    private:
        string name;
        string regno;
        float mark;
    public:
        A();
        void display();
};

A::A()
{
    cout<<"Enter name : ";
    cin>>name;

    cout<<"Enter regno : ";
    cin>>regno;

    cout<<"Enter mark : ";
    cin>>mark;
}

void A::display()
{
    if(mark<15)
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Regno : "<<regno<<endl;
        cout<<"Mark  : "<<mark<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter no of students : ";
    cin>>n;

    A obj[n];
    cout<<"Slow learners :-"<<endl;
    for(int i=0;i<n;i++)
        obj[i].display();
}

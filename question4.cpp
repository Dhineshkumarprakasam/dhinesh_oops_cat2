//question 4

#include <iostream>
using namespace std;

class A
{
private:
    int r;
    int i;
public:
    void read()
    {
        cin>>r;
        cin>>i;
    }
    void operator +(A obj)
    {
        r=r+obj.r;
        i=i+obj.i;
    }
    void display();
    void store(A obj);
};

void A::display()
{
    cout<<r<<'+'<<i<<'j'<<endl;
}

void A::store(A obj)
{
    r=obj.r;
    i=obj.i;
}

int main()
{
    A obj1,obj2,obj3,obj4;
    obj1.read();
    obj2.read();
    obj3.read();

    obj1.display();
    obj2.display();
    obj3.display();

    obj1+obj2;
    obj1+obj3;
    obj4.store(obj1);

    obj4.display();

}



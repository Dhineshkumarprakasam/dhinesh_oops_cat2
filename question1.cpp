//Question no 1

#include <iostream>
using namespace std;

class B;
class A
{
    private:
        int n;
        int arr[100];
    public:
        A();
        friend void calculate(A obj1,B obj2);
};

class B
{
    private:
        int m;
        int arr[100];
    public:
        B();
        friend void calculate(A obj1,B obj2);
};

A::A()
{
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

B::B()
{
    cout<<"Enter m : ";
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>arr[i];
}

void calculate(A obj1,B obj2)
{
    int maximum=obj1.arr[0];

    for(int i=0;i<obj1.n;i++)
        if(obj1.arr[i]>maximum)
            maximum=obj1.arr[i];

    for(int j=0;j<obj2.m;j++)
        if(obj2.arr[j]>maximum)
            maximum=obj2.arr[j];
    cout<<"Maximum is : "<<maximum;
}

int main()
{
    A obj1;
    B obj2;
    calculate(obj1,obj2);
}

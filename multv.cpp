#include <iostream>

using namespace std;
class A
{
    public:
    int a,b;
    void get()
    {
        cout<<"enter any two values"<<endl;
        cin>>a>>b;
    }
};
class B:public A
{
    int c;
    public:
    void add()
    {
        c=a+b;
        cout<<"sum of the two values is:"<<c;
    }
};
int main()
{
    B b;
    b.get();
    b.add();
}

#include<iostream>
using namespace std;

class B
{
        int a;
    public:
        int b;
        void get_ab();
        int get_a(void);
        void show_a();
};
class D : public B
{
        int c;
    public:
        void mul(void);
        void display(void);
};
int B::get_a()
{
    a=5;
    b=10;
}
void B :: get_a()
{
    return a;
}
void B :: show_a()
{
    cout<<"a = "<<a<<"\n";
}
void D :: mul()
{
    c=b*get_a();
}
void D :: display()
{
    cout<<"a = "<<get_a()<<"\n";
    cout<<"b = "<<b<<"\n";
    cout<<"c = "<<c<<"\n\n";
}
int main()
{
    D d;

    d.get_ab();
    d.mul();
    d.show_a();
    d.display();

    d.b=20;
    d.mul();
    d.display();

    return 0;
}
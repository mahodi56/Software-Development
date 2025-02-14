#include <iostream>
using namespace std;
class Rectangle
{
public:
    int width, height;
    Rectangle(int w = 0, int h = 0) : width(w), height(h){};
    void display()
    {
        cout<<width<<","<<height<<endl;
    }
};
int main()
{
    int t;
    cout<<"Parameter number:";
    cin>>t;
    if(t==1)
    {
        int a;
        cin>>a;
        cout<<"After using 1 parameter constructor arguments: ";
        Rectangle ob1(a);
        ob1.display();
    }
    else if(t==2)
    {
        int x,y;
        cin>>x>>y;
        cout<<"After using 2 parameter constructor arguments: ";
        Rectangle ob1(x,y);
        ob1.display();
    }
    else
    {
        cout<<"After using default constructor arguments: ";
        Rectangle ob1;
        ob1.display();
    }
    return 0;
}

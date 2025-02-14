#include <iostream>
using namespace std;
class Rectangle
{
public:
    int width, height;
    Rectangle(int w, int h):width(w),height(h) {}
    Rectangle( Rectangle&& obj)noexcept{
        cout<<"Move constructor is called"<<endl;
    width=obj.width;
    height=obj.height;
    obj.width=0;
    obj.height=0;
    }
    void display()
    {
        cout<<"after move constructor called the value: ";
        cout<<width<<","<<height<<endl;
    }
};
int main()
{
    int x,y;
    cin>>x>>y;
    Rectangle ob1(x,y);
    Rectangle ob2=move(ob1);
    ob2.display();
    ob1.display();
    return 0;
}

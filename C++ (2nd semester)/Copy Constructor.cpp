#include<bits/stdc++.h>
using namespace std;
class rectangle
{
public:
    int width,height;
    rectangle(int x,int y):width(x),height(y) {}
    rectangle(const rectangle& obj)
    {
        cout<<"Copy constructor called\n";
        width=obj.width;
        height=obj.height;
    }
        void display()
    {
        cout<<"The copy values are "<<width<<","<<height;
    }s
};
int main()
{
    rectangle r1(50,100);
    rectangle r2=r1;
    r2.display();
    return 0;
}


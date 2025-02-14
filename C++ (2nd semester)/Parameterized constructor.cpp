#include<bits/stdc++.h>
using namespace std;
class number
{
public:
    int width,height;
    number(int x,int y):width(x),height(y) {
    cout<<"Parameterized constructor called\n";}
    //void display()
    //{
       // cout<<"the numbers are "<<a<<","<<b;
   // }
};
int main()
{
    number o1(100,200);
    cout<<o1.width<<" "<<o1.height;
    return 0;
}


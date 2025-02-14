#include<bits/stdc++.h>
using namespace std;
class number
{
    int a,b;
public:
    number():a(10),b(20) {
    cout<<"Default constructor called\n";}
    void display()
    {
        cout<<"The numbers are "<<a<<","<<b;
    }
};
int main()
{
    number o1;
    o1.display();
    return 0;
}

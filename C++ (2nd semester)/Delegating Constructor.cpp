#include<bits/stdc++.h>
using namespace std;
class test
{
public:
    int tst1,tst2;
    test():tst1(0),tst2(0) {}
    test(int i,int j):test()
    {
        cout<<"Delegating Constructor 1 is called\n";
        tst1=i;
        tst2=j;
    }
    test(int a):test()
    {
        cout<<"Delegating Constructor 2 is called\n";
        tst1=a;
        tst2=0;
    }
    void display()
    {
        cout<<"after delegating constructor called the value: ";
        cout<<tst1<<","<<tst2<<endl;
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
        test ob1(a);
        ob1.display();
    }
    else if(t==2)
    {
        int x,y;
        cin>>x>>y;
        test ob1(x,y);
        ob1.display();
    }
    return 0;
}

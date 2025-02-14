#include<iostream >
using namespace std ;
class mamu
{
    int x,y;
public:
    mamu()
    {
        x=0;
        y=100;
        cout<<"mere pas kuch nahi he"<<endl;
    }
    mamu(int a,int b)
    {
       x=a;y=b;
       cout<<a+b<< endl;
    }
    mamu(mamu&i){
    x=i.x;
    y=i.y;
    cout<<x<<" "<<y;
    }
};
int main()
{
    mamu o1;
    mamu o2(5,10);
    mamu o3(o1);
   // cout<< o3;
return 0;
}

#include<iostream >
using namespace std ;
class mamu
{
    int x,y;
public:
    static int cost;
    mamu()
    {
        cost++;
    }
};
int mamu:: cost=0;
int main()
{
    mamu o1;
    cout<<o1.cost <<endl;
mamu o2;
    cout<<o2.cost<<endl;
mamu o3;
    cout<<o3.cost<<endl;

            return 0;
}

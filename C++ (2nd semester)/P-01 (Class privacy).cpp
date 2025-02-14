#include<iostream>
using namespace std;
class news
{
private:
    int real;

public:
    void editor(int a)
    {
        if(a<=400)
        {
            real=a;
            cout<<"your letter is posted about "<<real<<" word"<<endl;
        }
        else
            cout<<"your letter is rejected"<<endl;
    }
};
int main()
{
    news bangla;
    int n;
    cin>>n;
    bangla.editor(n);
    return 0;
}


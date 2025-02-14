#include <iostream>
using namespace std;
class Rectangle {
public:
int width, height;
explicit Rectangle(int w, int h) : width(w), height(h) {} // Explicit constructor
void display()
    {
        cout<<"after Explicit Constructor called the value: ";
        cout<<width<<","<<height<<endl;
    }
};
int main() {
    int x,y;
        cin>>x>>y;
Rectangle rect(x,y);
rect.display();
return 0;
}

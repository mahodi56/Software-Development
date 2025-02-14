#include<iostream>
using namespace std;
class school
{
private:
    int id,salary,mobile,gpa,id1;
public:
    school(int x,int y,int z)
    {
        id=x;
        salary=y,mobile=z;
    }
    school(int x,int y)
    {
        id1=x;
        gpa=y;
    }
    void show1()
    {
        std::cout<<mobile<<std::endl;
    }
    void show()
    {
        std::cout<<gpa<<std::endl;
    }
};
int main()
{

    int Id,salary,mobile_num,Id1,gpa;
    cout<<"Sir,Please enter your Id,salary,mobile num: ";
    cin>>Id>>salary>>mobile_num;
    cout<<"Enter student Id and gpa: ";
    cin>>Id1>>gpa;
    school teacher(Id,salary,mobile_num),student(Id1,gpa);
    teacher.show1();
    student.show();
    return 0;
}

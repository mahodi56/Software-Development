#include<bits/stdc++.h>
using namespace std;
struct linked_list
{
    int info;
    struct linked_list *address;
};
typedef struct linked_list node;
int main()
{
    int n;
    node *start,*ptr,*new_01;
    start=(node*)malloc(sizeof(node));
    ptr=start;
    cout<<"Give me the size and element of the linked list: ";
    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
        cin>>ptr->info;
        if(i!=n)
        {
            ptr->address=(node*)malloc(sizeof(node));
            ptr=ptr->address;
        }
    }
    ptr->address=NULL;

    cout<<"Give me the new iteam: ";
    new_01=(node*)malloc(sizeof(node));
    cin>>new_01->info;
    new_01->address=start;
    start=new_01;
    ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->info<<" ";
        ptr=ptr->address;
    }
    return 0;
}

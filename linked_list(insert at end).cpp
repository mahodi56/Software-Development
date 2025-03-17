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
    ptr = start;
    while(ptr->address!=NULL)
    {
        ptr=ptr->address;
    }
    ptr->address = new_01;
    new_01->address = NULL;
    ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->info<<" ";
        ptr=ptr->address;
    }
    return 0;
}


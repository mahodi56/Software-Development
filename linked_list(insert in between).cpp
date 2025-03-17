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
    cout<<"Give me the new iteam and index: ";
    new_01=(node*)malloc(sizeof(node));
    int index,i=0;
    cin>>new_01->info>>index;
    ptr = start;
    while(i!=index-1)
    {
        ptr=ptr->address;
        i++;
    }
    new_01->address = ptr->address;
    ptr->address=new_01;

    ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->info<<" ";
        ptr=ptr->address;
    }
    return 0;
}


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
    cout<<"press 1: Insert at the beginning: "<<endl;
    cout<<"press 2: Insert in between: "<<endl;
    cout<<"press 3: Insert at the end: "<<endl;
    int n,iteam;
    cin>>iteam;
    node *start,*ptr,*new_01;
    start=(node*)malloc(sizeof(node));
    ptr=start;
    if(iteam==1)
    {
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
    }
    else if(iteam==2)
    {
        int index,i=0;
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
        cin>>new_01->info>>index;
        ptr = start;
        while(i!=index-1)
        {
            ptr=ptr->address;
            i++;
        }
        new_01->address = ptr->address;
        ptr->address=new_01;
    }
    else if(iteam==3)
    {
        int i=0;
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
    }
    ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->info<<" ";
        ptr=ptr->address;
    }
    return 0;
}

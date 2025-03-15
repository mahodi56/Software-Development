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
    int x;
    node *start,*ptr;
    start=(node*)malloc(sizeof(node));
    ptr=start;
    while(1)
    {
        cin>>x;
        if(x==0)
        {
            ptr->address=NULL;
            break;
        }
        ptr->info=x;
        ptr->address=(node*)malloc(sizeof(node));
        ptr=ptr->address;
    }
    int iteam,sum=0;
    cin>>iteam;
    ptr=start;
    while(ptr!=NULL)
    {
        sum++;
        if(iteam>ptr->info)
            ptr=ptr->address;
        else if(iteam==ptr->info)
        {
            cout<<"Iteam found,The index is "<<sum<<" Address "<<ptr;
            return 0;
        }
        else
        {
            cout<<"Iteam not found";
            return 0;
        }
    }
    cout<<"Iteam not found";
    return 0;
}


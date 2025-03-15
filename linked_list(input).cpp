#include<bits/stdc++.h>
using namespace std;
struct linked_list{
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
    while(1){
        cin>>x;
        if(x==0){
            ptr->address=NULL;
            break;
        }
        ptr->info=x;
        ptr->address=(node*)malloc(sizeof(node));
        ptr=ptr->address;
    }
    ptr=start;
    while(ptr!=NULL){
        cout<<ptr->info<<" ";
        ptr=ptr->address;
    }
    return 0;
}

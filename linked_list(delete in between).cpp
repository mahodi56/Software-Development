#include<bits/stdc++.h>
using namespace std;
struct linked_list{
    int info;
    struct linked_list *address;
};
typedef struct linked_list node;
int main()
{
    node *start,*ptr,*new_01,*new_02;
    start=(node*)malloc(sizeof(node));
    ptr=start;
    int n,i=0,index;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ptr->info;
        if(i!=n){
            ptr->address=(node*)malloc(sizeof(node));
            ptr=ptr->address;
        }
    }
    ptr->address=NULL;
    cin>>index;
    new_01=start;
    new_02=new_01->address;
    while(i!=index-1){
        new_01=new_01->address;
        new_02=new_02->address;
        i++;
    }
    new_01->address=new_02->address;
    free(new_02);
    ptr=start;
    while(ptr!=NULL){
        cout<<ptr->info<<" ";
        ptr=ptr->address;
    }
    return 0;
}


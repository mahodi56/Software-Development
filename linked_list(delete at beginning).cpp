#include<bits/stdc++.h>
using namespace std;
struct linked_list{
    int info;
    struct linked_list *address;
};
typedef struct linked_list node;
int main()
{
    node *start,*ptr,*new_01;
    start=(node*)malloc(sizeof(node));
    ptr=start;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ptr->info;
        if(i!=n){
            ptr->address=(node*)malloc(sizeof(node));
            ptr=ptr->address;
        }
    }
    ptr->address=NULL;
//    while(1){
//        cin>>ptr->info;
//        if(ptr->info==0){
//            ptr->address=NULL;
//            break;
//        }
//        ptr->address=(node*)malloc(sizeof(node));
//        ptr=ptr->address;
//    }
    new_01=start;
    start=new_01->address;
    free(new_01);
    ptr=start;
    while(ptr!=NULL){
        cout<<ptr->info<<" ";
        ptr=ptr->address;
    }
    return 0;
}

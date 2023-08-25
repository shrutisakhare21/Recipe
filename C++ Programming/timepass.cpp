#include<iostream>
using namespace std;

struct node{
    float coeff;
    int exp;
    node* next = NULL;
};

node * createNode(node* head){
    int i=0;
    while(i<3){
        node* temp = new node();
        cin>>temp->coeff>>temp->exp;
        if(head==NULL){
        head = temp;
        }
        else{
            node* temp2 = head;
            while(temp2->next != NULL){
                temp2 = temp2->next;
            }
            temp2->next = temp;
        }
        i++;
    }

    return head;
}
void traverseList(node* head){
    node* temp  = head;
    while(temp!=NULL){
        cout<<temp->coeff<<" "<<temp->exp;  
        if(temp->next!=NULL) cout<<" --> ";
        temp = temp->next;
    } 
    cout<<endl;    //printf("endl");
}

int main(){
    node* head = NULL;
    while(1){
        int t;
       cout<<"1.] Create Polynomial"<<endl<<"2.] Print Polynomial"<<endl;
       cin>>t;
       if(t==1) head = createNode(head);
       if(t==2) traverseList(head);
    }
    return 0;
}
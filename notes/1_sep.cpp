#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node * next; //because this pointer is pointing to the next node
};

struct node* head=NULL; //initially the list is empty so the head is pointing to NULL

void insert_begin(int new_data){     //inserting at the beginning

    struct node* new_node =new node;

    new_node->data=new_data;

    new_node->next=head;

    head=new_node;

}

void delete_begin(){     //inserting at the beginning

    head=head->next;
}

void delete_end(){
    struct node *ptr = head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next=NULL;
}

void delete_middle(int k){
    struct node* p=head;
    int count =0;

    while(count!=(k-2)){
        p=p->next;
        count++;
    }
    p->next=p->next->next;

}

void search(int k){

    bool check=false;

    struct node* ptr = head;

    while(ptr!=NULL){
        ptr=ptr->next;

    if(ptr->data==k){
        cout<<"item exist in list"<<"\n";
        check=true;
        break;
    }
    }
    if(check==false){
        cout<<"item does not exist"<<"\n";
    }

}


void insert_end(int new_data)
{
    if (head != NULL)
    {
        struct node *new_node = new node;
        new_node->data = new_data;
        new_node->next = NULL;
        struct node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }
    else
    {
        insert_begin(new_data);
    }
}

void insert_middle(int new_data, int k){     //inserting at the beginning

        struct node* ptr=head;
        int c=0;

    while(ptr!=NULL){
        ptr=ptr->next;
        c++;
    }
    if(k<=c){
    struct node* new_node =new node;

    struct node* p=head;
    int count =0;

    while(count!=(k)){
        p=p->next;
        count++;

    }

    new_node->data=new_data;

    new_node->next=p->next;

    p->next=new_node;

    }
    else{
        cout<<"position not in the list"<<"\n";
    }

}

void sorting(){

    struct node *ptr = head;
    struct node *ptr1 = head->next;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        while(ptr1->next != NULL){
            ptr1 = ptr1->next;
            if((ptr->data)>(ptr1->data)){
                
            }
        }
    }

}


void display(){

    struct node* ptr=head;

    while(ptr!=NULL){
            cout<<ptr->data<<" ";
        ptr=ptr->next;
    }

}

int main(){

    //Linked list:-

    //Single simply linked list (non-contagious)
    //made up of nodes
    //A node consists of two thing:- data(the data contained in the element) & next pointer pointing to next node
    //last element's next will point to NULL
    //then there is head node pointing to the first element in the list

    //Insertion (3 ways):-
    /*
    Beginning, end and in middle
    */

   insert_begin(16);
   insert_begin(15);
   insert_begin(14);

   insert_end(17);
   insert_end(18);

   //insert_middle(20,2);

//    delete_begin();
//    delete_end();
   delete_middle(2);

   //overflow underflow

   //if list empty display shouldn't work
   //if inserting in the middle the position should be in the list
   //if inserting at the end list should not be empty if empty call insert_begin

   display();

}
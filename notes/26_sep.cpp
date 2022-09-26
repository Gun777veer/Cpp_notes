// #include<bits/stdc++.h>
// using namespace std;

// //queue (FIFO):-

// //circular queue:-

// #define size 5

// int q[size];

// int front =-1;
// int rear =-1;

// void enqueue(int e){
//     if((front==0 && rear==size-1)||(rear==(front-1)%(size-1))){
//         cout<<"overflow"<<"\n";
//         return;
//     }
//     else if(front==-1){ //insert 1st element
//         front=rear=0;
//         q[rear]=e;
//     }
//     else if(rear==(size-1) && front!=0){
//         rear=0;
//         q[rear]=e;
//     }
//     else{
//         rear++;
//         q[rear]=e;
//     }
// }

// void dequeue(){
//     if(front==-1){
//         cout<<"underflow\n";
//     }
//     int d=q[front];
//     if(front==rear){
//         front=rear-1;
//     }
//     else if(front==(size-1)){
//         front=0;
//     }
//     else{
//         front++;
//     }
//     cout<<"element deleted is "<<d<<"\n";
// }

// void display(){

//     if(front==-1){
//         cout<<"underflow"<<"\n";
//     }
//     else if(front <= rear){
//         for(int i=front; i<=rear; i++){
//             cout<<q[i];
//         }
//     }
//     else{

//         for(int i=front; i<size; i++){
//             cout<<q[i];
//         }

//             for(int i=0; i<=rear; i++){
//                 cout<<q[i];
//             }
//     }
//     cout<<"\n";


// }


// void reverse(){

//     if(front==-1){
//         cout<<"underflow"<<"\n";
//     }
//     else if(front <= rear){
//         for(int i=rear; i>=front; i--){
//             cout<<q[i];
//         }
//     }
//     else{

//         for(int i=size-1; i>=front; i--){
//             cout<<q[i];
//         }

//             for(int i=rear; i>=0; i--){
//                 cout<<q[i];
//             }
//     }
//     cout<<"\n";


// }


// int main(){


//     int choice;
//     int ele;

//     do{
//         cout<<"Enter 1 enqueue, 2 dequeue, 3 display, 4 exit"<<"\n";
//         cin>>choice;
//         switch (choice)
//         {
//         case 1:
//             cout<<"enter element"<<"\n";
//             cin>>ele;
//             enqueue(ele);
//             break;

//         case 2:
//             dequeue();
//             break;

//         case 3:
//             display();
//             break;

//         case 4:
//             reverse();
//             break;

//         case 5:
//             exit(0);
//             break;


//         default:
//             break;
//         }
//     }while(choice!=5);

// }


// //overflow condition (front==0 && rear == size-1)
// //&& (rear==(front-1)%(size-1))

// //underflow condition (front == -1)
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

void enqueue(int new_data)
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

void dequeue(){     //inserting at the beginning

    struct node* ptr=head;

    if(ptr==NULL){
        cout<<"underflow\n";
        return;
    }



    head=head->next;
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





void display(){

    struct node* ptr=head;

    while(ptr!=NULL){
            cout<<ptr->data<<" ";
        ptr=ptr->next;
    }

    cout<<"\n";

}

int main(){

    int choice;
    int ele;

    do{
        cout<<"Enter 1 enqueue, 2 dequeue, 3 display, 4 exit"<<"\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"enter element"<<"\n";
            cin>>ele;
            enqueue(ele);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
            break;


        default:
            break;
        }
    }while(choice!=4);

}
#include <iostream>
using namespace std;
class Node{
  public: 
  int data;
  Node* next;
  Node* prev;
  Node(){
    data = 0;
    next = NULL;
    prev = NULL;
  }
  Node(int data){
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }
};
class Linkedlist{
  Node* head;
  public:
  Linkedlist(){
    head = NULL;
  }
  void insertNodeatbegin(int data){
    Node* newNode = new Node(data);
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
  }
  void insertNodeatpos(int data){
    int pos;
    Node* newNode = new Node(data);
    cout<<"Enter the position where you want to insert"<<endl;
    cin>>pos;
    Node* temp = head;
    if(head==NULL){
      cout<<"Void insertion"<<endl;
    }
    for(int i=1;i<pos-1;i++){
      temp=temp->next;
    }
    newNode->next=temp->next;
    newNode->prev = temp;
    temp->next=newNode;
    if(newNode->next != NULL){
      newNode->next->prev = newNode;
    }
  }

  void insertNodeatEnd(int data){
    Node* newNode = new Node(data);
    if(head==NULL){
     head=newNode;
    return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
  }
  void deleteNodeatbegin(){
    if(head==NULL){
      cout<<"Void deletion"<<endl;
    }
    Node* temp =head;
    head=head->next;
    head->prev=NULL;
    free(temp);
  }
  void deleteatpos(){
    
  }
  void deleteNodeatEnd(){
    if(head==NULL){
      cout<<"Void deletion"<<endl;
    }
    else if(head->next==NULL){
      Node* temp = head;
      head=head->next;
      free(temp);
    }
    else{
    Node* temp = head;
    while(temp->next->next!=NULL){
      temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
    }   
  }
  void traverse(){
    Node* temp =head;
    if (head==NULL){
      cout<<"List is empty"<<endl;
    }
    
    while(temp !=NULL){
      cout<<temp->data<<"\t";
      temp= temp->next;
    }
    cout<<endl;
  }
};

int main(){
  Linkedlist l;
int item;
char oper;
input:
cout<<"----------------------------------------------------"<<endl;
cout<<"Enter 1 to Insert at begining"<<endl<<"Enter 2 to Insert at position"<<endl<<"Enter 3 to Insert at end"<<endl;
cout<<"Enter 4 to Delete at begining"<<endl<<"Enter 5 to Delete at position"<<endl<<"Enter 6 to Delete at end"<<endl;
cout<<"Enter 7 to Traverse"<<endl<<"Enter 8 to terminate"<<endl;
cin>>oper;
switch(oper){
  case '1':
  cout<<"Enter the item to be added:";
  cin>>item;
  l.insertNodeatbegin(item);
  break;
  case '2':
  cout<<"Enter the item to be added:";
  cin>>item;
  l.insertNodeatpos(item);
  break;
  case '3':
  cout<<"Enter the item to be added:";
  cin>>item;
  l.insertNodeatEnd(item);
  break;
  case '4':
  l.deleteNodeatbegin();
  break;
  case '5':
  l.deleteatpos();
  break;
  case '6':
  l.deleteNodeatEnd();
  break;
  case '7':
  l.traverse();
  break;
  case '8':
  return 0;
  default:
  cout<<"Enter valid option";
  break;
}
goto input;
}
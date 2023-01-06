#include <iostream>
using namespace std;

class Queue{
  private:
  int a[5];
  int rear,front;
  public:
  Queue(){
    rear=-1;
    front=-1;
  }
  bool isempty(){
    if (rear == -1){
      return true;
    }
    else 
    return false;
  }
  bool isfull(){
    if( front==0 && rear==4){
      return true;
    }
    if( front == rear + 1){
      return true;
    }
    
    else 
    return false;
  }
  void equeue(int item){
    if(isfull()){
      cout<<"Queue is full"<<endl;
    }
    else{
      if(front==-1){
        front++;
      }
      rear=(rear + 1) % 5;
      a[rear]=item;
      cout<<"Inserted"<<endl;
  }
  }
  void dequeue(){
    if(isempty()){
      cout<<"Queue is empty"<<endl;
    }
    else
    cout<<"Deleted:"<<a[front]<<endl;
    front=(front+1)%5;
  }
  void display(){
    int i;
    if(isempty()){
      cout<<"The queue is empty "<<endl<< "Nothing to show"<<endl;
    }
    else 
      cout<<"The elements in queues are"<<endl;
      for( i=front;i!=rear%5;i = (i+1)%5){
        cout<<a[i]<<"\n";
      }
      cout<<endl;
  }
};

int main(){
struct Queue q1;
int item;
char oper;
input:
cout<<"Enter 1 to enqueue"<<endl<<"2 to dequeue"<<endl<<"3 to display"<<endl<<"4 to terminate "<<endl;
cin>>oper;
switch(oper){
  case '1':
  cout<<"Enter the item to be added:";
  cin>>item;
  q1.equeue(item);
  break;
  case '2':
  q1.dequeue();
  break;
  case '3':
  q1.display();
  break;
  case '4':
  return 0;
  default:
  cout<<"Enter valid option";
  break;
}
goto input;

}
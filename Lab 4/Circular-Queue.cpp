#include <iostream>
using namespace std;
#define SIZE 5
class Queue{
  private:
  int a[SIZE];
  int rear,front;
  public:
  Queue(){
    rear=SIZE-1;
    front=SIZE-1;
  }
  bool isempty(){
    if (rear==front){
      return true;
    }
    else 
    return false;
  }
  bool isfull(){
    if(front==(rear+1)%SIZE){
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
      rear=(rear + 1) % SIZE;
      a[rear]=item;
      cout<<"Inserted"<<endl;
  }
  }
  void dequeue(){
    if(isempty()){
      cout<<"Queue is empty"<<endl;
    }
    else{
    front=(front+1)%SIZE;
    cout<<"Deleted:"<<a[front]<<endl;
    }
  }
  void display(){
    int i;
    if(isempty()){
      cout<<"The queue is empty "<<endl<< "Nothing to show"<<endl;
    }
    else 
      cout<<"The elements in queues are"<<endl;
      for( i=(front+1)%SIZE;i!=rear;i = (i+1)%SIZE){
        cout<<a[i]<<"\n";
      }
    cout<<a[rear]<<endl;
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
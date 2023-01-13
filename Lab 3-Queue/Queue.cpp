#include <iostream>
using namespace std;
#define SIZE 10
class Queue{
  private:
  int a[SIZE];
  int rear,front;
  public:
  Queue(){
    rear=-1;
    front=0;
  }
  bool isempty(){
    if (rear<front){
      return true;
    }
    else 
    return false;
  }
  bool isfull(){
    if(rear>=20){
      return true;
    }
    else 
    return false;
  }
  void equeue(int item){
    if(isfull()){
      cout<<"Queue is full"<<endl;
    }
    else
      rear++;
      a[rear]=item;
      cout<<"Inserted: "<<a[rear]<<endl;
  }
  void dequeue(){
    if(isempty()){
      cout<<"Queue is empty"<<endl;
    }
    else
    cout<<"Deleted:"<<a[front]<<endl;
    front++;
  }
  void display(){
    if(isempty()){
      cout<<"The queue is empty "<<endl<< "Nothing to show"<<endl;
    }
    else 
      cout<<"The elements in queue are"<<endl;
      for(int i=front;i<=rear;i++){
        cout<<a[i]<<"\t";
      }
      cout<<endl;
  }
};

int main(){
 Queue q1;
int item;
char oper;
input:
cout<<"Enter"<<endl<<"1 to enqueue"<<endl<<"2 to dequeue"<<endl<<"3 to display"<<endl<<"4 to terminate "<<endl;
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
  cout<<"Enter valid option"<<endl;
  break;
}
goto input;

}
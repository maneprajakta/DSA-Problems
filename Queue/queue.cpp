#include<bits/stdc++.h>
#define max 100
using namespace std;

class Queue{
  int front;
  int rear;
  public:
  int arr[max];
  Queue()
  {
    front=-1;
    rear=-1;
  }
  void push(int x);
  int pop();
  int peek();
  void show();
};

void Queue :: push(int x)
{
   if(rear>=max-1)
   cout<<"Overflow"<<endl;
   else{
     if(front==-1)
     { front++;}
     arr[++rear]=x;
   }
}

int Queue :: pop()
{
  if(front==-1)
   { cout<<"Underflow"<<endl;
   }
  else{
  int x = arr[front];
  ++front;
  return x;
  }
}

void Queue :: show()
{
   for(int i=front;i<=rear;i++)
      cout<<arr[i];
   cout<<endl;
}

int Queue :: peek()
{
  if(front==-1)
  return -1;
  return arr[front];
}

int main()
{
Queue q;
q.push(10);
q.push(20);
q.push(30);
cout<<q.pop()<<endl;
q.show();
cout<<endl;
cout<<q.peek();
return 0;
}

#include<bits/stdc++.h>
#define max 100
using namespace std;

class Stack{
int top;
public:
int arr[max];
Stack(){
  top=-1;
}
void push(int x);
int pop();
void show();
int peek();
};

void Stack::push(int x)
{
 
  if(top>=max-1)
     cout<<"Overflow"<<endl;
 else  arr[++top]=x;
}

int Stack::pop()
{
   if(top==-1)
    cout<<"Underflow"<<endl;
   else{
   int x = arr[top];
   --top;
   return x;
   }
}

void Stack::show()
{ 
  for(int i=top;i>=0;i--)
  {  cout<<arr[i]<<" ";
  }
}

int Stack::peek()
{
   if(top==-1)
   {
   cout<<"Underflow";
   return -1;
   }
   return arr[top];
}

int main()
{
  Stack s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.show();
  cout<<s.pop();
  s.push(40);
  s.show();
  cout<<"Top element is"<<s.peek();
return 0;
}

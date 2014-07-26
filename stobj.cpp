#include<iostream>
using namespace std;
int top=-1;
class Stack

{
      
      int val;
      
      public:
      Stack()
      {
            
            val=0;
      }
      void getval()
      {
            cout<<"\n\nValue to push ? : ";
            cin>>val;
      }
      
      
      
      int Isfull()
      {
            if(top==5-1)
            return 1;
            else
                  return 0;
      }
      
      int Isempty()
      {
            if(top==-1)
            return 1;
            else
                  return 0;
      }
      
      
      int pop()
      {
            if(Isempty()==1)
            return 0;
            else{
                  
                  cout<<"\nPopping ..";
                  top--;
                  return 1;
            }
            
            
            
      }
      int push(Stack n);
      void disp();
      
}a[5];

int Stack::push(Stack n)
{
      //   Stack i;
      if(Isfull()==1)
      return 0;
      
      else
      {  a[++top]=n; return 1;}
}

void Stack::disp()
{
      
      
      cout<<"\t"<<val;
}



int main()
{
      
      int t;
      Stack i; //invoke
      
      Stack o1,o2,o3,o4,o5,o6;
      o1.getval();
      
      t=i.push(o1);
      if(t==0) cout<<"\nStack Full";
      
      cout<<"\nStack :";
      for(int i=0;i<=top;i++)
      a[i]. disp();
      
      o2.getval();
      t=i.push(o2);
      if(t==0) cout<<"\nStack full";
      cout<<"\nStack:";
      for(int i=0;i<=top;i++)
      a[i]. disp();
      
      o3.getval();
      t=i.push(o3);
      if(t==0) cout<<"\nStack Full";
      cout<<"\nStack:";
      for(int i=0;i<=top;i++)
      a[i]. disp();
      
      
      o4.getval();
      t=i.push(o4);
      if(t==0) cout<<"\nStack full";
      cout<<"\nStack";
      for(int i=0;i<=top;i++)
      a[i]. disp();
      
      
      o5.getval();
      t=i.push(o5);
      if(t==0)cout<<"\nStack full";
      cout<<"\nStack";
      for(int i=0;i<=top;i++)
      a[i]. disp();
      
      o6.getval();
      t=i.push(o6);
      if(t==0)cout<<"\nStack full";
      
      
      
      
      t=i.pop();
      if(t==0) cout<<"\nStack empty";
      
      
      cout<<"\nStack";
      
      
      for(int i=0;i<=top;i++)
      a[i]. disp();
      
      
}







harish@harish-VPCEH38FN:~$ vim stobj.cpp
harish@harish-VPCEH38FN:~$ g++ stobj.cpp
harish@harish-VPCEH38FN:~$ ./a.out


Value to push ? : 2

Stack :	2

Value to push ? : 4

Stack:	2	4

Value to push ? : 3

Stack:	2	4	3

Value to push ? : 7

Stack	2	4	3	7

Value to push ? : 8

Stack	2	4	3	7	8

Value to push ? : 6

Stack full
Popping ..
Stack	2	4	3	7harish@harish-VPCEH38FN:~$ 








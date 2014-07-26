Stacks using Array
M.Harish
2013103011
G batch

#include<iostream>
using namespace std;
#define max 5

int top=-1;
int a[max];

int Isfull(int a[])
{
     if(top==max-1)
     return 1;
     else
          return 0;
}








int push(int n)
{
     if(Isfull(a)==1)
     return 0;
     
     else
     {  a[++top]=n; return 1;}
     
}


int Isempty(int a[])
{
     if(top==-1)
     return 1;
     else
          return 0;
}

int pop(int *n)
{
     if(Isempty(a)==1)
     return 0;
     else{
          *n=a[top];//Returns the value that is to be deleted
          top--;
          return 1;
     }
     
}

int peep(int *n)
{
     
     if(Isempty(a)==1)
     return 0;
     else{
          
          *n=a[top];
          return 1;
     }
}
void disp()
{
     int i;
     for(i=0;i<=top;i++)
     cout<<"\t"<<a[i];
     
     cout<<"\n";
}



//int Stack::top=-1;
//int Stack::a[]={0};
int main()
{
     
     
     int t;
     t= push(2);
     
     if(t==0)  cout<<"\nStack full";
     disp();
     t=push(3);
     if(t==0) cout<<"\nStack full";
     disp();
     int v;
     t=pop(&v);
     if(t==1) cout<<"\nElement deleted is : "<<v<<endl;
     else cout<<"\nStack empty";
          
     disp();
     t=push(3);
     
     if(t==0)  cout<<"\nStack full";
     disp();
     t=push(4);
     if(t==0) cout<<"\nStack full";
     
     disp();
     t=push(5);
     if(t==0)  cout<<"\nStack full";
     disp();
     
     t=push(6);
     if(t==0) cout<<"\nStack full";
     disp();
     t=push(7);
     if(t==0) cout<<"\nStack full";
     disp();
     
     t=peep(&v);
     if(t==0) cout<<"\nStack Empty";
     else cout<<"\n\nTop Value is : "<<v;
     }






harish@harish-VPCEH38FN:~$ vim stacksc.cpp
harish@harish-VPCEH38FN:~$ g++ stacksc.cpp
harish@harish-VPCEH38FN:~$ ./a.out
	2
	2	3

Element deleted is : 3
	2
	2	3
	2	3	4
	2	3	4	5
	2	3	4	5	6

Stack full	2	3	4	5	6


Top Value is : 6harish@harish-VPCEH38FN:~$ ^C
harish@harish-VPCEH38FN:~$ 

   


#include<iostream>
#include<string.h>
using namespace std;

class stack
{
    char *st;
   int top;
   public:
     stack()
      {
 	 
              top=-1;
      }
     
  void push(char *s,int pos);
  void pop(char *v);
  friend char* rev(char *);     
 
} ;

     void stack::push(char *s,int pos)
     {
         st[++top]=*(s+pos);

     }

     void stack::pop(char *v)
    {
           *v=st[top];
            top--;
   }

char* rev(char *str)
 {
    
   stack o;

   char c,*rstr;
   rstr=new char[1];
   
 
   
   int i;
   for(i=0;str[i]!='\0';i++)
        o.push(str,i);       
  for(i=0;str[i]!='\0';i++)  
  {   o.pop(&c);
     
      rstr[i]=c;
  }
     rstr[i]='\0';
   
    
   return rstr;
}

int main()
{
   
 
   char *str,*rstr; 
   
   cout<<"\nEnter a String ";
   cin>>str;
  
     rstr=rev(str);
    cout<<endl<<rstr<<endl;
     

   return 0;
}


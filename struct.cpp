#include<iostream>
using namespace std;


typedef struct student
{
     char name[10];
     int age; float avg,marks;
}a;


void getdata(a *p);
void printdata(a *p);
a avg(a *p);
void sortdata(a *p);
void getdata(a *p)
{
     for(int i=0;i<5;i++)
     {
          cout<<"\nEnter name marks age";
          cin>>p[i].name>>p[i].marks>>p[i].age;
     }
}

void printdata(a *p)
{
     for(int i=0;i<5;i++){
     cout<<p[i].name<<'\t'<<p[i].marks<<'\t'<<p[i].age;cout<<endl;}
}

a avg(a *p)
{
     a t;
     t.avg=(p[0].marks+p[1].marks+p[2].marks+p[3].marks+p[4].marks)/5;
     return t;
}

void sortdata(a *p)
{
     for(int i=0;i<5;i++)
     for(int j=i+1;j<5;j++)
     if(p[i].avg < p[j].avg)
     {
          a t;
          t=p[i];
          p[i]=p[j];
          p[j]=t;
     }
}

int main()
{
     int i;
     
     a *p;
     p=new a[5];
     
     
     getdata(p);
     
     printdata(p);
     
     a t;
     t=avg(p);
     
     cout<<endl<<"Class Avg: "<<t.avg;
     
     sortdata(p);
     
     
     printdata(p);
}





harish@harish-VPCEH38FN:~$ ./a.out

Enter name marks age
har
90
12

Enter name marks age
res
80
34

Enter name marks age
tryy
76
21

Enter name marks age
uiy
99
34

Enter name marks age
iuo
87
45
har	90	12
res	80	34
tryy	76	21
uiy	99	34
iuo	87	45

Class Avg: 86.4har	90	12
res	80	34
tryy	76	21
uiy	99	34
iuo	87	45
harish@harish-VPCEH38FN:~$ 
               

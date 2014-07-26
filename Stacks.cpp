Palindrome
M.Harish
2013103011	
G batch
#include<iostream>

#include<string.h>

using namespace std;

int m,revindex=0;

char *stack;

char *rev;

int isfull(int temp)

{

    if(temp==m)

        return 0;

    else

        return 1;

}


void push(char *str,int pos)

{

    int ch=isfull(pos);

    if(ch==1)

    {

        stack[pos]=*(str+pos);

        

    }

    else

    {

        cout<<"\nStack Full";

    }

}

int isempty(int temp)

{

    if(temp==-1)

        return 0;

    else

        return 1;

}
void pop(char *str,int pos)

{

    int check=isempty(pos);

    if(check==1)

    {

        rev[revindex]=*(str+pos-1);

        revindex++;

        

    }

    else

    {

        cout<<"\nStack Empty";

    }

}






void palindrome(char *str)

{

    if(strcmp(str,rev)==0)

        cout<<"\nPalindrome";

    else

        cout<<"\nNot A Palindrome";

}



int main()

{

    char *str;
     str=new char[1];

    cout<<"\nEnter the string:\n";

    cin>>str;

    int length;

    length=strlen(str);

  m=length;

     stack= new char[length];
     rev=new char[length];
 

    for(int i=0;i<length;i++)

    {

        push(str,i);

    }

    for(int i=length;i>=0;i--)

    {

        pop(str,i);

    }

    cout<<rev;

    palindrome(str);

    return 0;

}


harish@harish-VPCEH38FN:~$ vim k1.cpp
harish@harish-VPCEH38FN:~$ g++ k1.cpp
harish@harish-VPCEH38FN:~$ ./a.out

Enter the string:
malayalam
malayalam
Palindromeharish@harish-VPCEH38FN:~$ ./a.out

Enter the string:
hello
olleh
Not A Palindromeharish@harish-VPCEH38FN:~$ ^C
harish@harish-VPCEH38FN:~$ 


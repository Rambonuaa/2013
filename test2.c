#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
bool conver(int *d,int *b)
{
   int i,*p,*q;
   int c[5];
   p=b;
   q=p;
   printf("%d\n",*p);
   *(q+1)=1;
   for(i=0;i<5;i++)
    {
      d[i]=b[i];
      c[i]=b[i];
     }
   
   return 1;
}
void pointer()
{
   int buf[4]={1,2,3,4};
   int *q;
   q=buf+3;
   printf("%d\n",*q);
}
void func1(int x)
{
   int local_array[7]={1};
   local_array[x]=0;
   printf("%d\n",local_array[x]);
}
int interfunc()
{
   int i=4;
   func1(i);
   return 0;
}
void func2(char *p)
{
   printf("%c\n",*(p+3));
   *p='\n';
   printf("%c\n",*p);
}
void func3(int *p)
{
   printf("%d\n",*(p+3));
   *p=2;
   printf("%d\n",*p);
}

int main()
{
   char *p1,*p2=NULL;
   char string[8]="ASDDSFF";
   char *p3="DDDFF";
   
   
   int i,*ptr;

   static int a[10];
   int num[5]={1,2,3,4,5};

   ptr=num;

   if(conver(a,num))
    for (i = 0; i <5; i++)
      printf("%d  ",a[i]);
   printf("\n");

   p1=string;
   printf("%c\n",*(p1+2));
   pointer();
   interfunc();

   func2(string);
   func2(p1);
   func3(num);
   func3(ptr);
   return 0;
}

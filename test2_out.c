#include"self.h"
#include<string.h>
#include<stdio.h>
#include<malloc.h>
bool conver(int d_size,int *d,int b_size,int *b)
{
   int i,*p,*q;
   int c[5];
   p=b;
   q=p;
   printf("%d\n",*(int *)(_RV_insert_pointer_check((void *)b,(void *)(b+b_size-1),10,19,(void *)p)));
   *(int *)(_RV_insert_pointer_check((void *)b,(void *)(b+b_size-1),11,5,(void *)(q+1)))=1;
   for(i=0;i<5;i++)
    {
      d[_RV_insert_check(0,d_size,14,9,i)]=b[_RV_insert_check(0,b_size,14,14,i)];
      c[_RV_insert_check(0,5,15,9,i)]=b[_RV_insert_check(0,b_size,15,14,i)];
     }
   
   return 1;
}
void pointer()
{
   int buf[4]={1,2,3,4};
   int *q;
   q=buf+3;
   printf("%d\n",*(int *)(_RV_insert_pointer_check((void *)buf,(void *)(buf+4-1),25,19,(void *)q)));
}
void func1(int x)
{
   int local_array[7]={1};
   local_array[_RV_insert_check(0,7,30,16,x)]=0;
   printf("%d\n",local_array[_RV_insert_check(0,7,31,30,x)]);
}
int interfunc()
{
   int i=4;
   func1(i);
   return 0;
}
void func2(int p_size,char *p)
{
   printf("%c\n",*(char *)(_RV_insert_pointer_check((void *)p,(void *)(p+p_size-1),41,19,(void *)(p+3))));
   *(char *)(_RV_insert_pointer_check((void *)p,(void *)(p+p_size-1),43,5,(void *)p))='\n';
   printf("%c\n",*(char *)(_RV_insert_pointer_check((void *)p,(void *)(p+p_size-1),45,19,(void *)p)));
}
void func3(int p_size,int *p)
{
   printf("%d\n",*(int *)(_RV_insert_pointer_check((void *)p,(void *)(p+p_size-1),49,19,(void *)(p+3))));
   *(int *)(_RV_insert_pointer_check((void *)p,(void *)(p+p_size-1),51,5,(void *)p))=2;
   printf("%d\n",*(int *)(_RV_insert_pointer_check((void *)p,(void *)(p+p_size-1),53,19,(void *)p)));
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

   if(conver(10,a,5,num))
    for (i = 0; i <5; i++)
      printf("%d  ",a[_RV_insert_check(0,10,72,23,i)]);
   printf("\n");

   p1=string;
   printf("%c\n",*(char *)(_RV_insert_pointer_check((void *)string,(void *)(string+8-1),76,19,(void *)(p1+2))));
   pointer();
   interfunc();

   func2(8,string);
   func2(8,p1);
   func3(5,num);
   func3(5,ptr);
   return 0;
}

//这个程序是测试函数间指针访问是否越界

#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include <stdlib.h>
typedef struct data_type{
   int age;
   char name[20];
}data;

typedef struct Sequence{
   int a;
   data *first;
   data *last;
}Sequence;

void func1(char *p)
{
   printf("the func1 is %c\n",*(p+6));
}

void func2(data *p)
{
   printf("%s is %d years old\n",p->name,p->age);
}

void func3(char *p1,char *p2)
{
   strcpy(p1,p2);
   printf("the string is %s\n",p1);
}

int main()
{
   int i;
   data *bob;
   Sequence *Se;
   char *a;
   a=(char *)malloc(100*sizeof(char));
   
   bob=(data *)malloc(sizeof(data));
   Se=(Sequence *)malloc(sizeof(Sequence));

   if(bob!=NULL)
   {
       bob->age=22;
       strcpy(bob->name,"Robert");    
    }
   Se->a=3;
   Se->first=bob;
   printf("the struct is %s\n",Se->first->name);

   char *p1,*p2;
   char string[8]="ASDESFP";
   char *p3="DKLRTF";
   char aa[10];
   p1=string;
   p2=p3;
   printf("the length of func3 is %d\n",sizeof(bob));
   func1(p1);
   func1(p2);
   func1(Se->first->name);
   func2(bob);
   func3(a,p3);
   printf("the length of func3 is %d\n",strlen(a));
   return 1;
}

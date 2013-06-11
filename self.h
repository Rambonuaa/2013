#include<stdio.h>
#include<stdlib.h>
#ifndef _RV_insert_check_
#define _RV_insert_check_
int _RV_insert_check(int size,int row,int column,int script)
{
      if(script>size||script<0)
      {
          FILE *fp=fopen("error.txt","at");
          printf("%d:%d subscript exceed the array size\n",row,column);
          fprintf(fp,"%d:%d subscript exceed the array size\n",row,column);
          fclose(fp);
          
      }
      return script;
}
char* _RV_insert_char_pointer_check(char *size,int row,int column,char *script)
{
       if(script>size||script<0)
       {
         FILE *fp=fopen("error.txt","at");
         printf("%d:%d Pointer beyond the border\n",row,column);
         fprintf(fp,"%d:%d Pointer beyond the border\n",row,column);
         fclose(fp);
         
       }
       return script;
}
int* _RV_insert_int_pointer_check(int *size,int row,int column,int *script)
{
       if(script>size||script<0)
       {
         FILE *fp=fopen("error.txt","at");
         printf("%d:%d Pointer beyond the border\n",row,column);
         fprintf(fp,"%d:%d Pointer beyond the border\n",row,column);
         fclose(fp);
         
       }
       return script;
}
#endif


   
  

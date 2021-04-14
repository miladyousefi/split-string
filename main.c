#include <stdio.h>
#include <string.h>
#define STRING_SIZE_SPLITE 100
char * split_string(char ch[]){
    int i=0;
    int start=0,end=0;
    for(i;i <= strlen(ch);i++){
        if (ch[i]=='"')
        {
            start = i;
            break;   
        }
    }     
    for(i;i <= strlen(ch);i++){
        if (ch[i]=='"')
        {
            end = i;
        }
    }
    char str[STRING_SIZE_SPLITE]="";
    int j=0;
    for ( i = start+1; i <= end-1; i++)
    {
        str[j]=ch[i];
        j++;
    }
    char * cp=str;
    //printf("%s",str);
    return cp;
}
int main()
{
    char ch[]={"salam\"milad khubi\"khobi"};
    printf("%s \n",split_string(ch));
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char str[400];
    printf("Enter a string:");
    fgets(str,400,stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=97&&str[i]<=122){
            int c=(int)str[i];
            c=c-32;
            str[i]=(char)c;
        }
        else if(str[i]>=65&&str[i]<=90){
            int c=(int)str[i];
            c=c+32;
            str[i]=(char)c;
        }
    }
    puts(str);
    return 0;
}


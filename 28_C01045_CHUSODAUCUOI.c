#include<stdio.h>
#include<string.h>
#include<stdbool.h>



int main()
{
    char s[100]={'\0'};
    scanf("%s",&s);
    printf("%c %c",s[0],s[strlen(s)-1]);
}
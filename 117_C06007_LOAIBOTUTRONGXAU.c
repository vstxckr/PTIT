#include <stdio.h>
#include <string.h>

void in_man(char arr[][20], int index, char *s2)
{
    for ( int i = 0 ; i < index ; i++ )
    {
        if ( strcmp(arr[i],s2) )
        {
            printf("%s ", arr[i]);
        }
    }
}

void seperate_string( char *s, char arr[][20], char *s2)
{
    int len_s = strlen(s);
    s[len_s] = ' ';
    len_s++;
    int index = 0;
    for ( int i = 0 ; i < len_s ; i++ )
    {
        if ( s[i] != ' ' && s[i+1] == ' ' ) 
        {
            strncat(arr[index],s+i,1);
            index++;
        }
        else
        {
            if ( s[i] != ' ' ) strncat(arr[index],s+i,1);
        }
    }
    in_man(arr,index,s2);
}

int main()
{
    char s[101] = {'\0'};
    char s2[101] = {'\0'};
    char arr[101][20] = {'\0'};
    gets(s);
    scanf("%s",&s2);
    seperate_string(s,arr,s2);
}

#include <stdio.h>
#include <string.h>

void in_man(char arr[][20], int index)
{
    for ( int i = 0 ; i < index - 1 ; i++ )
    {
        for ( int j = i+1 ; j < index ; j++ )
        {
            if ( !strcmp(arr[i],arr[j]) )
            {
                arr[j][0]='\0';
            }
        }
    }
    for ( int i = 0 ; i < index ; i++ )
    {
        if ( arr[i][0] != '\0' )
            printf("%s ",arr[i]);
    }
}

void seperate_string( char *s, char arr[][20])
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
    in_man(arr,index);
}

int main()
{
    char s[101] = {'\0'};
    char arr[101][20] = {'\0'};
    gets(s);
    seperate_string(s,arr);
}

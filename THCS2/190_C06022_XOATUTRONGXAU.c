#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define ll long long

char *lowerr(char *x, int lenx)
{
    for ( int i = 0 ; i < lenx ; i++ )
    {
        x[i] = tolower(x[i]);
    }
    return x;
}

void check(char *s,char *x, int lens, int lenx)
{
    char res[900][900] = {'\0'};
    bool isappear[900] = {false};
    char *p = strtok(s," ");
    int dem = 0;
    while (p != NULL)
    {
        strcpy(res[dem++],p);
        p = strtok(NULL," ");
    }
    dem--;
    for ( int i = 0 ; i <= dem ; i++ )
    {
        char temp[900] = {'\0'};
        strcpy(temp, res[i]);
        if ( !strcmp(lowerr(temp,strlen(temp)),x) )
        {
            isappear[i] = true;
        }
    }
    for ( int i = 0 ; i <= dem ; i++ )
    {
        if (!isappear[i])
        {
            printf("%s ",res[i]);
        }
    }
    printf("\n");
}

void solve(int test)
{
    char s[900] = {'\0'};
    char x[900] = {'\0'};
    gets(s);
    gets(x);
    printf("Test %d: ",test);
    char temp[900] = {'\0'};
    strcpy(temp,x);
    check(s, lowerr(temp, strlen(temp)), strlen(s), strlen(x));
}
 
int main ()
{
    int t;
    scanf("%d",&t);
    getchar();
    for ( int i = 1 ; i <= t ; i++ )
    {
        solve(i);
    }
}
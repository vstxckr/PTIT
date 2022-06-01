#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long


char s[100001][15];
char A[100001];

char check(char *s, int lens)
{
    for ( int i = 0 ; i < lens-1 ; i++ )
    {
        if ( s[i] > s[i+1])
        {
            return 0;
        }
    }
    return 1;
}

char isdup(int n, char (*s)[15], char *x)
{
    for ( int i = 0 ; i <= n ; i ++)
    {
        if (!strcmp(s[i],x))
        {
            A[i]++;
            return 0;
        }
    }
    return 1;
}

void sort(int n, char (*s)[15])
{
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = i+1 ; j <= n ; j++ )
        {
            if (A[i] < A[j]) 
            {
                char temp[15];
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
                int temp1 = A[i];
                A[i] = A[j];
                A[j] = temp1;
            }
        }
    }
}

void solve()
{
    char temp[15];
    int dem = 0;
    FILE *p;
    //p = fopen("text.txt","r");
    while (scanf("%s",&temp) != -1)
    {
        if (check(temp,strlen(temp)) && isdup(dem-1,s,temp))
        {
            strcpy(s[dem++],temp);    
        }
    }
    //fclose(p);
    dem--;
    sort(dem,s);
    for ( int i = 0 ; i <= dem ; i++ )
    {
        printf("%s %d\n",s[i],A[i]+1);
    }
}

int main()
{
    solve();
}
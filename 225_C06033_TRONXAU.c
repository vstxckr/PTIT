#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

void tron_xau(char *s1,char *s2, int n)
{
    char x[400];
    int s1_i = 0 ,s2_i = 0;
    for ( int i = 0 ; i < n*2 ; i++ )
    {
        if ( i&1 )
        {
            x[i] = s1[s1_i];
            s1_i++;
        }
        else
        {
            x[i] = s2[s2_i];
            s2_i++;
        }
    }
    for ( int i = 0 ; i < n ; i ++ )
    {
        s1[i] = x[i];
    }
    for ( int i = n ; i < n*2 ; i++ )
    {
        s2[i-n] = x[i];
    }
}

void solve(int n)
{
    char s1[202],s2[202],s[402],check[402];
    char hold_s1[202], hold_s2[202];
    gets(s1); 
    gets(s2); 
    gets(s);
    strcpy(hold_s1,s1);
    strcpy(hold_s2,s2);
    int count = 0;
    do
    {
        tron_xau(s1,s2,n);
        strcpy(check,s1);
        strcat(check,s2);
        count++;    
    }
    while ( strcmp(check,s) && strcmp(hold_s1,s1) && strcmp(hold_s2,s2) );

    if (strcmp(check,s)) 
        printf("-1\n");
    else
        printf("%d\n",count);
}



int main()
{
    while (1)
    {
        int n;
        scanf("%d",&n);
        getchar();
        if (!n) break;
        solve(n);
    }
}
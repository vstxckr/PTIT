#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define ll long long


int sepr(char (*s)[202], char *y)
{
    char *x = strtok(y," ");
    int i = 0;
    while (x != NULL)
    {
        strcpy(s[i++],x);
        x = strtok(NULL," ");
    }
    return --i;
}

int cmpr(char *x, char *y)
{
    char t1[406], t2[406];
    strcpy(t1,x);
    strcat(t1,y);
    strcpy(t2,y);
    strcat(t2,x);
    if (strcmp(t1,t2) > 0)
        return 1;
    return -1;
}

void sort(char s[][202],int n)
{
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = i+1 ; j <= n ; j++ )
        {
            if (cmpr(s[i],s[j]) > 0)
            {
                char temp[202];
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }
}

void solve()
{
    char s[201][202] = {'\0'}, k[201][202] = {'\0'};
    char res[201][202] = {'\0'};
    char temp[202] = {'\0'};

    bool A[202] = {false}, B[202] = {false};

    gets(temp);
    int dem_s = sepr(s,temp);

    gets(temp);
    int dem_k = sepr(k,temp);

    for ( int i = 0 ; i <= dem_s ; i++ )
    {
        for ( int j = 0 ; j <= dem_k ; j++ )
        {
            if (!strcmp(s[i],k[j]))
            {
                A[i] = true;
                B[j] = true;
            }
        }
    }

    int count = -1;

    for ( int i = 0 ; i <= dem_s ; i++ )
    {
        if (!A[i]) 
        {
            bool lap = false;
            for ( int j = 0 ; j <= count ; j++ )
            {
                if (!strcmp(res[j],s[i]))
                {
                    lap = true;
                }
            }
            if (!lap) strcpy(res[++count],s[i]);
        }
    }

    sort(res,count);
    
    for ( int i = 0 ; i <= count ; i++ )
    {
        printf("%s ", res[i]);
    }
    printf("\n");
}
 
int main ()
{
    int t;
    scanf("%d",&t);
    getchar();
    while (t--)
    {
        solve();
    }
}
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>


char isdup(char *s, int dem, char res[][100],int *B)
{
    for ( int i = 0 ; i <= dem ; i++  )
    {
        if (!strcmp(s,res[i]))
        {
            B[i]++;
            return 1;
        }
    }
    return 0;
}


void solve()
{
    char s[100]= {'\0'};
    char res[100][100] = {'\0'};
    int A[100] = {0};
    int B[100] = {0};
    int max = -1;
    int dem = 0;
    FILE *p;
    // p = fopen("test.txt","r");
    while (scanf("%s",&s) != -1)
    {
        int temp = strlen(s);
        if (temp >= max)
        {
            if (!isdup(s,dem-1,res,B))
            {
                max = temp;
                A[dem] = max;
                strcpy(res[dem++], s);
            }
        }
    }
    // fclose(p);
    for ( int i = 0 ; i < dem ; i++ )
    {
        if (A[i] == max)
        {
            printf("%s %d %d\n",res[i],A[i],B[i]+1);
        }
    }
}


int main()
{
    solve();
}
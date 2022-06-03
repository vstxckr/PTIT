#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define ll long long

bool check_tn(char *x, int n)
{
    for ( int i = 0 ; i < n/2 ; i++ )
    {
        if ( x[i] != x[n-i-1] )
        {
            return false;
        }
    }
    return true;
}

void find_tn(char res[][50], int *A, int *C, int n, int max)
{
    for ( int i = 0 ; i <= n ; i++ )
    {
        if (A[i] == max)
        {
            printf("%s %d\n",res[i],C[i]+1);
        }
    }
}

void solve()
{
    char temp[50] = {'\0'};
    char res[5000][50] = {'\0'};
    int A[5000] = {0};
    int C[5000] = {0};

    int dem = 0;
    int max = -2e9;
    // FILE *p;
    // p = fopen("text.txt","r");
    while ( scanf("%s",&temp) != -1 )
    {
        int len_temp = strlen(temp);
        if (check_tn(temp, len_temp) && len_temp >= max)
        {
            bool islap = false;
            for ( int i = 0 ; i < dem ; i++ )
            {
                if (!strcmp(res[i], temp))
                {
                    C[i]++;
                    islap = true;
                    break;
                }
            }
            if (!islap)
            {
                A[dem] = len_temp;
                max = len_temp;
                strcpy(res[dem++], temp);
            }
        }
    }
    // fclose(p);
    dem--;
    find_tn(res,A,C,dem,max);
}
 
int main ()
{
    solve();
}
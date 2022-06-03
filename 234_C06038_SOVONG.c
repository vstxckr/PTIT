#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

void bignum_add(char *x, char *y, char *res, int lens)
{
    int len = lens;
    int new, carry = 0;
    for ( int i = len-1 ; i >= 0 ; i-- )
    {
        new = x[i]+y[i] - 48*2 + carry;
        carry = 0;
        if (new >= 10)
        {
            new -= 10;
            carry = 1;
        }
        res[i] = new + 48;
    }
    if (carry == 1) 
    {
        strcpy(res+1, res);
        res[0] = '1';
    }
}

void create_arr(char possib[][100], char *s, int lens)
{
    strcpy(possib[0],s);
    for ( int i = 1 ; i < lens ; i++ )
    {
        char j = possib[i-1][0];
        strcpy(possib[i],possib[i-1]+1);
        possib[i][lens-1] = j;
    }
}

char check(char *s, char possib[][100],int n)
{
    for ( int i = 0 ; i < n ; i ++ )
    {
        if (!strcmp(s,possib[i]))
        {
            return 1;
        }
    }
    return 0;
}


void solve(char *s, int lens)
{
    char possib[100][100] = {'\0'};
    create_arr(possib,s,lens);
    char adder[100] = {'\0'};
    char temp[100] = {'\0'};
    strcpy(adder,s);
    for ( int i = 2 ; i <= lens ; i++ )
    {
        bignum_add(adder,s,temp,lens);
        if (!check(temp,possib,lens)) 
        {
            printf("NO\n");
            return ;
        }
        strcpy(s,temp);
    }
    printf("YES\n");
}


int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while (t--)
    {
        char s[100] = {'\0'};
        gets(s);
        solve(s,strlen(s));
    }
}
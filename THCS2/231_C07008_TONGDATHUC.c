#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

typedef struct dathuc{
    bool  bac[100000];
    int   coso[100000];
} dt;

int nhap(dt *A, dt *B)
{
    char s[1000] = {'\0'},x[1000] = {'\0'};
    int max = -1;
    gets(s);
    gets(x);
    char *tok = strtok(s,"*x^+ ");
    while   (tok!=NULL)
    {
        int t1 = atoi(tok);
        tok = strtok(NULL,"*x^+ ");
        int t2 = atoi(tok);
        if (t2>max) max = t2;
        A->bac[t2] = true;
        A->coso[t2] = t1;
        tok = strtok(NULL,"*x^+ ");
    }
    tok = strtok(x,"*x^+ ");
    while   (tok!=NULL)
    {
        int t1 = atoi(tok);
        tok = strtok(NULL,"*x^+ ");
        int t2 = atoi(tok);
        if (t2>max) max = t2;
        B->bac[t2] = true;
        B->coso[t2] = t1;
        tok = strtok(NULL,"*x^+ ");
    }
    return max;
}

void solve(dt *A, dt *B, dt *res)
{
    int n = nhap(A,B);
    int last;
    for ( int i = n ; i >= 0 ; i-- )
    {
        if (A->bac[i] == true || B->bac[i] == true)
        {
            if (A->coso[i] + B->coso[i] != 0)
            {
                res->bac[i] = true;
                res->coso[i] = A->coso[i] + B->coso[i];
                last = i;
            }
        }
    }
    for ( int i = n ; i >= 0 ; i-- )
    {
        if (res->bac[i] == true && res->coso[i] != 0 )
        {
            printf("%d*x^%d",res->coso[i],i);
            if (i != last) printf(" + ");
        }
    }
    printf("\n");
}


int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while (n--)
    {
        dt A,B,res;
        memset(A.bac,0,sizeof(A.bac));
        memset(A.coso,0,sizeof(A.coso));
        memset(B.bac,0,sizeof(B.bac));
        memset(B.coso,0,sizeof(B.coso));
        memset(res.bac,0,sizeof(res.bac));
        memset(res.coso,0,sizeof(res.coso));
        solve(&A,&B,&res);
    }
}
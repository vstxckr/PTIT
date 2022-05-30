#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define ll long long

typedef struct phanso
{
    ll tu;
    ll mau;
} PS;

void swap(ll *a, ll *b)
{
    ll temp = *a;
    *a = *b;
    *b = temp;
}


ll lcm(ll a, ll b)
{
    while (a*b)
    {
        a%=b;
        swap(&a,&b);
    }
    return a + b;
}

ll gcd(ll a, ll b)
{
    return a*b/lcm(a,b);
}

void rutgon(PS *A)
{

    ll div = lcm (A->tu,A->mau);
    A->tu /= div;
    A->mau /= div;
}

void cong(PS *A, PS *B, PS *res)
{
    res->tu = A->tu + B->tu ;
    res->mau = B->mau;
    rutgon(res);
}

void quydong(PS *A, PS *B)
{
    ll product = gcd(A->mau, B->mau);
    A->tu *= (product/(A->mau));
    A->mau = product;
    B->tu *= (product/(B->mau));
    B->mau = product;
}

void thuong(PS *A, PS *B, PS *res)
{
    ll div = lcm(A->tu*B->mau, A->mau*B->tu);
    res->tu = (A->tu*B->mau)/div;
    res->mau = (A->mau*B->tu)/div;
    rutgon(res);
}


void solve(int test)
{
    //input
    PS A, B, res;
    scanf("%lld %lld %lld %lld",&A.tu, &A.mau, &B.tu, &B.mau); 
    printf("Case #%d:\n",test);
    rutgon(&A);
    rutgon(&B);
    //quy dong 2 phan so
    quydong(&A,&B);
    //in ra man hinh 2 phan so
    printf("%lld/%lld ",A.tu,A.mau);
    printf("%lld/%lld\n",B.tu,B.mau);
    //cong 2 phan so sau do in man
    cong(&A, &B, &res);
    printf("%lld/%lld\n",res.tu, res.mau);
    //tim thuong 2 phan so sau do in man
    thuong(&A, &B, &res);
    printf("%lld/%lld\n",res.tu,res.mau);
}
 
int main ()
{
    int t;
    scanf("%d",&t);
    for ( int i = 1 ; i <= t ; i++ )
    {
        solve(i);
    }
}
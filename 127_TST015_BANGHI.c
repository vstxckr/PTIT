#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

typedef struct triangle
{
    double a,b,c;
    double s;
} tam_giac;

void swapi (double*, double*);
void swap(tam_giac*, tam_giac*);
void dien_tich(tam_giac*, int);
void ghi_file(tam_giac*, int);
void sort(tam_giac*, int);
void in_man(tam_giac*, int);
void solve(int);

int main()
{
    int n;
    scanf("%d",&n);
    solve(n);
}

void swapi(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp; 
}

void swap(tam_giac *A, tam_giac *B)
{
    swapi(&(A->a), &(B->a)); 
    swapi(&(A->b), &(B->b)); 
    swapi(&(A->c), &(B->c)); 
    swapi(&(A->s), &(B->s));
}

void dien_tich(tam_giac *A, int n)
{
    for ( int i = 0 ; i < n ; i++ )
    {
        double p = (double)( A[i].a + A[i].b + A[i].c ) / 2;
        A[i].s = sqrt( p * (p - A[i].a) * (p - A[i].b) * (p - A[i].c) );
    }
}

void ghi_file(tam_giac *A, int n)
{
    FILE *p;
    p = fopen("FPLSP22GxxmsvTG.fpl","wb");
    for ( int i = 0 ; i < n ; i++ )
    {
        fprintf(p, "%d %d %d\n", (int)A[i].a, (int)A[i].b, (int)A[i].c);
    }
    fclose(p);
}

void sort(tam_giac *A, int n)
{
    for ( int i = n-2 ; i >=0 ; i-- )
    {
        for ( int j = 0 ; j <= i ; j++ )
        {
            if ( A[j].s > A[j+1].s )
            {
                swap(&A[j], &A[j+1]);
            }
        }
    }
}

void in_man(tam_giac *A, int n)
{
    for ( int i = 0 ; i < n ; i++ )
    {
        printf("%d %d %d\n",(int)A[i].a, (int)A[i].b, (int)A[i].c);
    }
}

void solve(int n)
{
    tam_giac A[10000];
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf("%lf %lf %lf",&A[i].a, &A[i].b, &A[i].c);
    }
    dien_tich(A,n);
    sort(A,n);
    in_man(A,n);
    // ghi_file(A,n);
}

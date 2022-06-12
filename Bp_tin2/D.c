#include<stdio.h>
#include<string.h>

#define check(a, b) (a > b ? 1 : (a == b ? 0 : -1))

typedef struct danhsach
{
    char mact[100];
    char ngaythi[100];
    int ngay, thang, nam, gio, phut;
    char giothi[100];
    char phongthi[100];
} DS;

void swapi(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void swapstr(char *a, char *b)
{
    char temp[100] = {};
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void swap(DS *A, DS *B)
{
    swapstr(A->ngaythi, B->ngaythi);
    swapstr(A->giothi, B->giothi);
    swapstr(A->mact, B->mact);
    swapstr(A->phongthi, B->phongthi);
    swapi(&A->ngay, &B->ngay);
    swapi(&A->thang, &B->thang);
    swapi(&A->nam, &B->nam);
    swapi(&A->gio, &B->gio);
    swapi(&A->phut, &B->phut);
}

int cmpr(DS *A, DS *B)
{
    int temp[5] = {};
    temp[0] = check(A->nam, B->nam);
    temp[1] = check(A->thang, B->thang);
    temp[2] = check(A->ngay, B->ngay);
    temp[3] = check(A->gio, B->gio);
    temp[4] = check(A->phut, B->phut);
    for ( int i = 0 ; i <= 4 ; i++ )
    {
        if (temp[i] == 1)
        {
            return 1;
        }
        if (temp[i] == -1)
        {
            return -1;
        }
    }
    return 0;
}

void sort(DS *A, int n)
{
    for ( int i = 1 ; i <= n-1 ; i++ )
    {
        for ( int j = i+1 ; j <= n ; j++ )
        {
            if (cmpr(&A[i], &A[j]) == 1)
            {
                swap(&A[i], &A[j]);
            }
        }
    }
}

int itoa(char *s, int len_s)
{
    int sum = 0;
    for ( int i = 0 ; i < len_s ; i++ )
    {
        sum = sum*10 + (s[i] - 48);
    }
    return sum;
}

void breakstring(DS *A)
{
    char temp[100];

    // tinh ngay thi cho A[i]
    strcpy(temp, A->ngaythi);
    char *tok = strtok(temp, "/");
    A->ngay = itoa(tok, strlen(tok));
    tok = strtok(NULL, "/");
    A->thang = itoa(tok, strlen(tok));
    tok = strtok(NULL, "/");
    A->nam = itoa(tok, strlen(tok));

    // tinh gio thi cho A[i]
    strcpy(temp, A->giothi);
    tok = strtok(temp, ":");
    A->gio = itoa(tok, strlen(tok));
    tok = strtok(NULL, ":");
    A->phut = itoa(tok, strlen(tok));
}
void taoma(char *s, int n)
{
    char temp[5] = {};
    sprintf(temp,"%d",n);
    int len_temp = strlen(temp);
    s[0] = 'C';
    for ( int i = 1 ; i <= 4-len_temp ; i++ )
    {
        s[i] = '0';
    }
    strcat(s,temp);
}

void solve()
{
    int n;
    scanf("%d",&n);
    getchar();
    DS A[100];
    for ( int i = 1 ; i <= n ; i++ )
    {
        taoma(A[i].mact, i);
        gets(A[i].ngaythi);
        gets(A[i].giothi);
        gets(A[i].phongthi);
        breakstring(&A[i]);
    }
    sort(A, n);
    for ( int i = 1 ; i <= n ; i++ )
    {
        printf("%s %s %s %s\n", A[i].mact, A[i].ngaythi, A[i].giothi, A[i].phongthi);
    }
}

int main()
{
    solve();
}
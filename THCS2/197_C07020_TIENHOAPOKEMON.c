#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

typedef struct pokemon
{
    char name[1000];
    int require_stone_number;
    int current_stone_number; 
    int available_evol_times;
} Pok;

int max(int n, Pok *poke)
{
    int max = -1;
    for ( int i = 1 ; i <= n ; i++ )
    {
        if ( poke[i].available_evol_times > max )
        {
            max = poke[i].available_evol_times;
        }
    }
    return max;
}

void nhap(int n, Pok *poke)
{
    int sum = 0;
    for ( int i = 1 ; i <= n ; i++ )
    {
        gets(poke[i].name);
        scanf("%d %d",&poke[i].require_stone_number, &poke[i].current_stone_number);
        int times = poke[i].current_stone_number/poke[i].require_stone_number;
        int remainder = poke[i].current_stone_number%poke[i].require_stone_number;
        int fin = ( times * 2 + remainder );
        int tim = times;
        int t=1,r;
        while (t != 0)
        {
            t = fin/poke[i].require_stone_number;
            r = fin%poke[i].require_stone_number;
            fin =( t*2 + r);
            tim += t;
        }
        poke[i].available_evol_times = tim;
        sum += poke[i].available_evol_times;
        getchar();
    }
    printf("%d\n",sum);
}

void xuat(int n, Pok *poke)
{
    int max_times = max(n,poke);
    for ( int i = 1 ; i <= n ; i++ )
    {
        if ( poke[i].available_evol_times == max_times )
        {
            printf("%s\n",poke[i].name);
            break;
        }
    }
}

int main()
{
    int n;
    Pok poke[100];
    scanf("%d",&n);
    getchar();
    nhap(n,poke);
    xuat(n,poke);
}
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

#define max2(a,b) ((a > b) ? a : b)
#define max3(a,b,c) ((max2(a,b) > c) ? max2(a,b) : c)
#define max4(a,b,c,d) ((max3(a,b,c) > d) ? max3(a,b,c) : d)
#define scll(a,b,c,d) scanf("%d %d %d %d",&a,&b,&c,&d);


void solve()
{
    int a,b,c,d;
    int x,y,z,w;
    scll(a,b,c,d);
    scll(x,y,z,w);

    int cao = max4(abs(w-d),abs(w-b),abs(y-d),abs(y-b)); 
    cao = max3(cao,abs(d-b),abs(w-y));

    int rong = max4(abs(z-a),abs(z-c),abs(x-c),abs(x-a)); 
    rong = max3(rong,abs(z-x),abs(c-a));

    int res = max2(cao,rong);
    printf("%d",res*res);
}

int main()
{
    solve();
}
#include<stdio.h>
#include<math.h>

int snt(int n){
    if(n<2)return 0;
    for(int i=2;i<=sqrt(n);i++)
        if (n%i==0) return 0;
    return 1;
}
int csnt(int n){
    int temp;
    while(n){
        temp=n%10;
        n/=10;
        if(temp!=2&&temp!=3&&temp!=5&&temp!=7)return 0;
    }
    return 1;
}
int tong(int n){
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int x,y;
    int t;
    scanf("%d",&t);
    while (t--){
        int count=0;
        scanf("%d%d",&x,&y);
        for(int i=x; i<=y; i++)
            if(csnt(i) && snt(tong(i))&& snt(i))
                count++;
        printf("%d\n",count);
    }
}
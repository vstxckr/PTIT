#include<stdio.h>
#include<string.h>

void solve()
{
	char x[503] = {}, y[503] = {}, res[503] = {};
	scanf("%s",x);
	scanf("%s",y);
	int len_x = strlen(x), len_y = strlen(y);
	if (len_x < len_y)
	{
		char temp[503] = {};
		strcpy(temp, x);
		strcpy(x, y);
		strcpy(y, temp);
		int t1 = len_x;
		len_x = len_y, len_y = t1;
	}
	int resp_y, sum, carry = 0;
	for ( int i = len_x-1 ; i >= 0 ; i-- )
	{
		resp_y = (len_y > 0 ? y[--len_y] - 48 : 0);
		sum = resp_y + x[i] - 48 + carry;
		carry = (sum >= 10 ? 1 : 0);
		sum %= 10;
		res[i] = sum + 48;
	}
	if (carry == 1) printf("1");
	printf("%s\n",res);
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		solve();
	}
}
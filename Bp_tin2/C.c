#include<stdio.h>

void solve()
{
	int n, A[100002] = {}, B[100002] = {}, count = 0;
	scanf("%d",&n);
	for ( int i = 0 ; i < n ; i++ )
	{
		scanf("%d", &A[i]);
	}

	for ( int i = 0 ; i < n - 1 ; i++ )
	{
		if (A[i] % 2 != 0 && A[i+1] % 2 != 0)
		{
			B[i] = 1;
			B[i + 1] = 1;
			i++;
		}
		else if (A[i] % 2 == 0 && A[i+1] % 2 == 0)
		{
			B[i] = 1;
			B[i+1] = 1;
		}
	}

	for ( int i = 0 ; i < n - 1 ; i++ )
	{
		if ( B[i] == 0 && ( B[i+1] == 1 || B[i-1] == 1 ))
		{
			B[i] = 1;
		}
	}

	for ( int i = 0 ; i < n ; i++ )
	{
		if (B[i] == 0)
		{
			count++;
		}
	}

	printf("%d\n",count);
}


//   

int main()
{
	solve();
}
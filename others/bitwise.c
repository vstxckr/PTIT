#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

#define uint unsigned int

void mark(uint *A, uint *B, uint n)
{
	int i = 31-n%32;
	uint x = pow(2,i);
	if (((A[n/32] >> i) & 1))
	{
		if (!((B[n/32] >> i) & 1))
		{
			B[n/32] ^= x;
		}
		return ;
	}
	A[n/32] ^= x;
}

bool is_dup(uint *A, uint *B, uint n)
{
	int i = 31-n%32;
	if (((B[n/32] >> i) & 1))
	{
		return true;
	}
	return false;
}

bool solve(uint *A, uint *B, int n)
{
	uint hold_arr[100000] = {0};
	for ( int i = 0 ; i <  n ; i++ )
	{
		scanf("%u",&hold_arr[i]);
		mark(A,B,hold_arr[i]);
	}
	for ( int i = 0 ; i < n ; i++ )
	{
		if (is_dup(A,B,hold_arr[i]))
		{
			printf("%u\n",hold_arr[i]);
			return true;
		}
	}
	return false;
}

int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		uint *A = (uint*) calloc(31250001,4);
		uint *B = (uint*) calloc(31250001,4);
		scanf("%d",&n);
		if (!solve(A,B,n)) printf("NO\n");
		free(A);
		free(B);
	}
}
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>



void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int A[], int left, int right)
{
    int pivot=right;
    right--;
    while (left<=right)
    {
        while (A[left]<A[pivot] && left<=right) left++;
        while (A[right]>A[pivot] && left<=right) right--;
        if (left<=right)
        {
            swap(&A[left],&A[right]);
            left++;
            right--;
        }
    }
    swap(&A[left],&A[pivot]);
    return left;
}

void QuickSort(int A[],int low,int high)
{
    if (low<high)
    {
        int pivot=partition(A,low,high);
        QuickSort(A,low,pivot-1);
        QuickSort(A,pivot+1,high);
    }
}


void xuli(int n)
{
    int A[100]={};
    for ( int i=1 ; i<=n ; i++ )
    {
        scanf("%d",&A[i]);
    }
    for ( int i=n-1 ; i>=2 ; i-- )
    {
        for ( int j=1 ; j<=i ; j++  )
        {
            if (A[j]<A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    for ( int i=1 ; i<=n ; i++ )
    {
        printf("%d ",A[i]);
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    xuli(n);
}
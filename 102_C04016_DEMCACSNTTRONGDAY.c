#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

bool snt(int n)
{
    if (n<2) return false;
    for ( int i=2 ; i<=sqrt(n) ; i++ )
    {
        if (n%i==0)
            return false;
    }
    return true;
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int A[],int left, int right)
{
    int pivot=right;
    right--;
    while (right>=left)
    {
        while (A[left]<A[pivot] && left<=right) left++;
        while (A[right]>A[pivot] && left<=right) right--;
        if (left<=right) 
        {
            swap(&A[left],&A[right]);
            right--;
            left++;
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


bool loctrung(int A[], int B[], int *dem, int n)
{
    for ( int i=1 ; i<=n ; i++ )
    {
        int check=true;
        for ( int j=1 ; j<=*dem ; j++ )
        {
            if (B[j]==A[i])
            {
                check=false;
                break;
            }
        }
        if (check==true && snt(A[i])==true)
        {
            (*dem)++;
            B[*dem]=A[i];
        }
    }
}

void solantrung(int A[],int B[],int C[],int *dem,int n)
{
    for ( int i=1 ; i<=*dem ; i++ )
    {
        int demB=0;
        for ( int j=1 ; j<=n ; j++ )
        {
            if (A[j]==B[i])
            {
                demB++;
            }
        }
        
        C[i]=demB;
    }
}

void inman(int B[],int C[],int *dem,int test)
{
    printf("Test %d:\n",test);
    for ( int i=1 ; i<=*dem ; i++ )
    {
        printf("%d xuat hien %d lan\n",B[i],C[i]);
    }
}


void xuli(int n,int test)
{
    int A[100]={0};

    for ( int i=1 ; i<=n ; i++ )    
    {
        scanf("%d",&A[i]);
    }

    QuickSort(A,1,n);

    int dem=0;
    int B[100]={0};
    int demB=0;
    int C[100]={0};

    loctrung(A,B,&dem,n);
    solantrung(A,B,C,&dem,n);
    inman(B,C,&dem,test);
}

int main()
{
    int t;
    int n;
    scanf("%d",&t);
    for ( int i=1 ; i<=t ; i++ )
    {
        scanf("%d",&n);
        xuli(n,i);
    }
}
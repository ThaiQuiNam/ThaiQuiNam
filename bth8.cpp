#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void nhapmatran(int a[10][10],int n,int m);
void xuatmatran(int a[10][10],int n,int m);
int timMax(int a[10][10],int n,int m);
int timMin(int a[10][10],int n,int m);
int main()
{ 
    int a[10][10];
    int i,j,n,m;
    printf("nhap so hang n="); scanf("%d",&n);
    printf("nhap so cot m="); scanf("%d",&m);
    nhapmatran(a,n,m);
    xuatmatran(a,n,m);
    timMax(a,n,m);
    timMin(a,n,m);
}
void nhapmatran(int a[10][10],int n,int m)  
{  
    printf("nhap vao ma tran:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void xuatmatran(int a[10][10],int n,int m)
{
        printf("\nMa tran vua nhap la:\n");    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
}
int timMax(int a[10][10],int n,int m) 
{
    int max = a[0][0];
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(max<a[i][j])
			{
				max = a[i][j];
			}
		}
	}
	return max;
}
int timMin(int a[10][10],int n,int m)
{
	int min = a[0][0];
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(min>a[i][j])
			{
				min = a[i][j];
			}
		}
	}
	return min;
}



#include <stdio.h>
#include<conio.h>
#include<string.h>
void Nhap(int a[], int n){
    for(int i = 0; i <= n - 1; i++){
        printf("NHAP a[%d]: ",i);
        scanf("%d",&a[i]);
        printf("NHAP b[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
void Xuat(int a[], int n){
    printf("\nCAC PHAN TU CO TRONG MANG\n");
    for(int i = 0; i <= n - 1; i++){
        printf("a[%d] = %d \n" ,i,a[i]);
        printf("b[%d] = %d \n" ,i,a[i]);
    }
}
int main(){
    int n;
    printf("NHAP VAO n PHAN TU: ");
    scanf("%d",&n);
    int a[n];
    Nhap(a,n);
    Xuat(a,n);
}
void Sapxep(int a[], int n){  
   int i,  j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
             if(a[i] > a[j]) 
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
 
void Inramanhinh(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    int (array[1000]);
    printf("\n");
}
    int arr[1000];
    int n
{ 
    input(arr, &n);
    InterchangeSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
void chen(int a[],int n,int k)
{
 int x;
 printf("nhap so can chen:");
 scanf("%d",&x);
 for(int i=n;i>=k;i--)
 {
 a[i]=a[i-1];
 }
 a[k]=x;
 n++;
 xuatmang(a,n);
 
}
{
 int a[50],n,k;
 nhapmang(a,n);
 xuatmang(a,n);
 printf("nhap vi tri can chen:");
 scanf("%d",&k);
 chen(a,n,k);
 return 0;
}


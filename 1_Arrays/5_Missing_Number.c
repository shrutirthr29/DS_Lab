// Program for Missing number in an array
#include <stdio.h>
void Missing(int a[], int n)
{
    int m,total,sum=0;
    m=n+1;
    total=m*(m+1)/2;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    printf("The missing number is %d",total-sum);
}
 
int main()
{
    int n,i,a[10];
    printf("Enter the size of the array:");
    scanf("%d",&n);

    printf("Enter a sorted array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    Missing(a,n);
    return 0;
}

// Program for reversal of an array.
#include<stdio.h>

int main(){
    int n,i,a[10],j,temp=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);

    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("The reversed array is:\n");
    for(i=n-1;i>=0;i--){
        printf("%d\n",a[i]);
    }
    
    return 0;
}
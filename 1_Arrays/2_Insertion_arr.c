// Program to insert the given elements into an array.
#include<stdio.h>

int main(){
    int n,i,a[10],ele,pos;
    printf("Enter the size of the array:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d",&ele);

    printf("Enter the position of the element to be inserted:");
    scanf("%d",&pos);

    for(i=n;i>=pos;i--){
        if(i!=pos){
            a[i]=a[i-1];
        }
        else{
            a[i]=ele;
        }
    }

    printf("The elements are:\n");
    for(i=0;i<=n;i++){
        printf("%d\n",a[i]);
    }
    
    return 0;
}
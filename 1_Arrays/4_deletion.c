// Program for delete the given elements into an array.
#include<stdio.h>

int main(){
    int n,i,a[10],ele,pos;
    printf("Enter the size of the array:");
    scanf("%d",&n);

    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the element to be deleted: ");
    scanf("%d",&ele);

    for(i=0;i<n;i++){
        if(a[i]==ele){
            continue;
        }
        else{
            printf("%d\n",a[i]);
        }
    }
    return 0;
}
// Program to find which element is repeated in the array and which is not
#include<stdio.h>

void repeat(int n,int a[n]){
    int i,j,c=1;
    for(i=0;i<n-1;i++){
            c=1;
            for(j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    c++;
                }
            }
        if(c>1){
            printf("%d is repeated %d times\n",a[i],c);
        } 
    }        
}
int main(){
    int n,i,a[10],j;
    printf("Enter the size of the array:");
    scanf("%d",&n);

    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    repeat(n,a);
    return 0;
}

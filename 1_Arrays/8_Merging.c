// Program for merging two sorted arrays
#include<stdio.h>
void merge(int n,int a[],int m,int b[]){
    int i,j,k,l;
    int c[10];
    i=0;
    j=0;
    k=0;
    while(i<n && j<m){
        if(a[i]>b[j]){
            c[k]=b[j];
            j++;
            k++;
        }
        else{
            c[k]=a[i];
            i++;
            k++;
        }
    }

    //for different size
    while(i<n){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<m){
        c[k]=b[j];
        j++;
        k++;
    }
     
    l=m+n;

    printf("The merged array is:\n");
    for(k=0;k<l;k++){
        printf("%d\n",c[k]);
    }
}
int main(){
    int i,j,m,n;
    int a[10],b[10];
    printf("Enter the size of A:");
    scanf("%d",&n);

    printf("Enter the elements of A:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the size of B:");
    scanf("%d",&m);

    printf("Enter the elements of B:");
    for(j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    merge(n,a,m,b);
    return 0;
}
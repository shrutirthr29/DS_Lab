// Program for Set union
#include<stdio.h>
void UNION(int n,int a[],int m,int b[]){
    int i,j,k,t,c[10],s,l,p;
    //Copying elements
    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    for(j=0;j<m;j++){
        c[n+j]=b[j];
    }
    //Sorting
    l=n+m;
    for(p=0;p<l-1;p++){
            for(s=0;s<l-p-1;s++){
                if(c[s]>c[s+1]){
                    t=c[s];
                    c[s]=c[s+1];
                    c[s+1]=t;
                }
            }
        }

    printf("The sorted set is\n");
    for(i=0;i<l;i++){
        printf("%d\n",c[i]);
    }
    //Union
    printf("The union of the set is:\n");
    
    for(i=0;i<l;i++){
        k=0;
        for(j=i+1;j<l;j++){
            if(c[i]==c[j]){
                k=1;
            }
        }
        if(k==0){
            printf("%d\n",c[i]);
        }
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
    UNION(n,a,m,b);
    return 0;
}
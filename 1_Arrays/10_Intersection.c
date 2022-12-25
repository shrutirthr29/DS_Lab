// Program for Set Intersection
#include<stdio.h>

// int main(){
//     int a[10], b[10], c[10];
//     int n,m,i,j,k=0;

//     printf("Enter the size of A:");
//     scanf("%d", &n);

//     printf("Enter the elements of a:\n");
//     for (i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }

//     printf("Enter the size of B:");
//     scanf("%d",&m);

//     printf("Enter the elements of b:\n");
//     for (j=0;j<m;j++){
//         scanf("%d",&b[j]);
//     }

//     for(i=0;i<n;i++)
//     {
//          for(j=0;j<m;j++)
//          {
//             if(a[i]==b[j])
//             {
//                 c[k]=a[i];
//                 k++;
//             }
//          }
        
//     }
//     printf("The intersection of A and B is:\n");
//     for(i=0;i<k;i++){
//         printf("%d\n",c[i]);
//     }
//     return 0;
// }

void intersection(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    printf("The intersection of A and B is:\n");
    while (i < m && j < n) {
        if (a[i] < b[j]){
            i++;
        }
        else if (b[j] < a[i]){
            j++;
        }
        else{
            printf(" %d ", b[j++]);
            i++;
        }
    }
}

int main()
{
    int a[10], b[10], c[10];
    int n,m,i,j,k=0;

    printf("Enter the size of A:");
    scanf("%d", &n);

    printf("Enter the elements of a:\n");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the size of B:");
    scanf("%d",&m);

    printf("Enter the elements of b:\n");
    for (j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    intersection(a, b, m, n);
    return 0;
}

#include <iostream>

using namespace std;
void diffarray(int A[], int m, int B[], int n){
    int i=0;
    int j=0;
    int k=0;
    int c[22];
    while(i<m && j<n){
        if (A[i]<B[j]){
            c[k]= A[i];
            i++;
            k++;
        }
        else 
        { if(B[j]<A[i]){
            
        
            
            //c[k]= B[j];
            j++;
           // k++;
            }
            else{
                
                //c[k]=A[i];
                i++;
                //k++;
                j++;
                
            }
       
        }
    }
    while(i<m){
        c[k]= A[i];
        k++;
        i++;
    }
    // while(j<n){
    //     c[k]= B[j];
    //     k++;
    //     j++;
    // }
    
    for(int i=0; i<k; i++){
        cout<<c[i]<<" ";
    }
}

int main()
{
    int A[10]= {1,3,5,7,9,12,15,20,30,40};
    int B[12]= {2,4,6,10, 12,15,18,20,25,30,50,90};
    diffarray(A,10, B, 12);
    return 0;
}

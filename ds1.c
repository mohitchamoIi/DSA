#include<stdio.h>
void rotate(int arr[],int n, int r){
    int temp[n];\
    int j=0;
    for(int i=r;i<n;i++){
        temp[j++]=arr[i];
    }
    for(int i=0;i<r;i++){
        temp[j++]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}

int main(){
    int t,n,r;
    printf("enter no. of test cases");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        printf("enter size of array");
        scanf("%d",&n);
        int arr[n];
        printf("enter elements of array");
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        printf("enter the times array is rotated");
        scanf("%d",&r);

        rotate(arr,n,r);

        printf("new array is : \n");
        for(int j=0;j<n;j++){
            printf("%d",arr[j]);
        }
        
    }
}
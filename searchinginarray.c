#include<stdio.h>
int arraysearch(int n, int arr[][n], int x)
{
    int i=0;
    int j=n-1; // Start from the last column
    while(i<n && j>=0) 
    {
        if(arr[i][j] == x) {
            return 1; // Number found
        }
        else if (x<arr[i][j]) {
            j--;
        }
        else {
            i++;
        }
    }
    return 0; // Number not found
}
int main() 
{
    int n,x;
    printf("Enter the number of row and coloumn  in the array: ");
    scanf("%d", &n);
    int arr[n][n]; // Declare a 2D array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
        scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the number to search: ");
    scanf("%d", &x);
    if(arraysearch(n,arr,x)){
        printf("Number found in the array.\n");
    }
    else {
        printf("Number not found in the array.\n");
    }
    return 0;
}
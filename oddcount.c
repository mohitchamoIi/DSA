#include<stdio.h>
int checkodd(int a[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        count^= a[i]; // Using XOR to find the odd count number
    }
    if(count == 0)
    {
        return 0; // If no odd count number is found
    }   
    else
    return count; // If no odd count number is found
}
int main() 
{
    int t;
    printf("Enter number of test cases: ");
    scanf("%d", &t);
    while(t--!=0)
    {
        int n;
        printf("enter size of array: ");
        scanf("%d", &n);
        int a[n];
        printf("Enter elements of array: ");
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        int count = checkodd(a, n);
        if(count == 0)
        {
            printf("No number with odd count found\n");
        }
        else
        {
            printf("Number with odd count is: %d\n", count);
        }
    }
}
#include<stdio.h>
int minimum(int arr[], int n, int x, int y)
{   int ix=-1, iy=-1, min;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            ix = i;
        }
        else if(arr[i] == y)
        {
            iy = i;
        }
    }
        if(ix ==-1 || iy == -1)
        {
            return -1; // If either x or y is not found.
        }
        else
        {
            min= (ix < iy) ? (iy - ix) : (ix - iy);
        }
        return min;
}
int main() 
{
    int t;
    int dis;
    printf("Enter number of test cases: ");
    scanf("%d", &t);
    while (t--!= 0)
    {
        printf("enter the size of array: ");
        int n;
        scanf("%d", &n);
        int arr[n];
        printf("Enter the elements of the array: ");
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int x,y;
        printf("enter the two elements to find the minimum distance: ");
        scanf("%d %d", &x, &y);
        dis=minimum(arr, n, x, y);
        if(dis == -1)
        {
            printf("Either %d or %d is not present in the array.\n", x, y);
        }
        else
        {
            printf("The minimum distance between %d and %d is: %d\n", x, y, dis);
        }
    }

}

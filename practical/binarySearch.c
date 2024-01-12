#include <stdio.h>

int binary(int arr[], int h, int l, int val)
{

    int mid;
    if (l <= h)
    {
        mid = l + h / 2;

        if (arr[mid] == val)
        {
            return mid;
        }
        else if (arr[mid] < val)
        {
            binary(arr,mid+1 , h, val);
        }
        else
        {
            binary(arr, l , mid-1, val);
        }
    }
    return -1;
}

int main()
{
    int arr[100], n, i, h, val, l, pos;

    printf("enter the range sorted of array");
    scanf("%d", &n);
    printf("enter the sorted array element");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter searching value: - ");
    scanf("%d", &val);
    h = n - 1;
    l = 0;
    pos = binary(arr, h, l, val);
    if(pos == -1){
        printf("element is not exist");
    }else{
        printf("index of the value is %d" , pos);
       
    }
    return 1;
}
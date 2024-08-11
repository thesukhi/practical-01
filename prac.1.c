#include<stdio.h>
int main()
{
    int arr[10], i ,num;
    int found=0;
    printf("enter array elements\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the no. of choice");
    scanf("%d",&num);
    for(i=0;i<10;i++)

    {
        if(num==arr[i])
        {
            printf("The no %d is present in the array",num);
            found=found + 1;
            break;
        }
    }
    if(found==0)
    {
        printf("The no not found");
    }
    return 0;
}


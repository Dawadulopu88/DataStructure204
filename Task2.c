#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    int i;
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The input array is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted array is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }

    int key;
    printf("Enter the value to search:");
    scanf("%d",&key);
    int loc =-1;
    int beg=0;
    int end=n-1;

    while(beg<=end)
    {
        int mid=(beg+end)/2;

        if(key==a[mid])
        {
            loc=mid;
            printf("%d",loc);
            break;
        }
        else if(key<a[mid])
        {
            end=mid-1;
        }
        else if(key>a[mid])
        {
            beg=mid+1;
        }

    }
    if(loc==-1)
    {
        printf("Value Not found in the array");
    }

    return 0;
}

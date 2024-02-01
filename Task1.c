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
    printf("The array is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }

    for(int i=0; i<n; i++)
    {
        int temp=a[i];
        int j;
        j=i-1;
        while(temp<a[j]&&j>=0)
        {
            a[j+1]=a[j];
            j--;

        }
        a[j+1]=temp;
    }
    printf("The sorted list:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
    while(1){
    int key;
    printf("Enter what you want to search:");
    scanf("%d",&key);
    int low=0;
    int loc=-1;
    int high=n-1;
    while(low<=high)
    {
        int pos=low+((key-a[low])*(high-low))/(a[high]-a[low]);
        if(a[pos]==key)
        {
            loc=pos;
            printf("Found at index %d\n",loc);
            break;
        }
        if(a[pos]<key)
        {
            low=pos+1;
        }
        else
        {
            high=pos-1;
        }
    }
    if(loc==-1)
    {
        printf("Not found\n");
    }
    }
    return 0;
}

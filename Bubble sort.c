//efficient solution for bubble loop
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int swap,counter=0;//for count swap or count loop
    for(int i=0; i<n-1; i++)
    {
        swap=0;//at first stage or first round first time no swap thats why swap 0
        for(int j=0; j<n-1-i; j++)//n-1-i;
        {
            counter++;
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=1;//run first loop swap 1
            }
        }
      if (swap==0){//efficient solution line
           break;
        }

    }
    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("Total Loop:%d",counter);//count swapping or count how many times loop run
    return 0;
}

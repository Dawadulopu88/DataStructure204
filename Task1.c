#include<stdio.h>
int main(){
    int n;
printf("Enter the size of array:");
scanf("%d",&n);
int a[n];
printf("Enter the elements:");
int i;
for (i=0;i<n;i++){
   scanf("%d",&a[i]);
}
printf("The final array is:\n");
for(i=0;i<n;i++){
    printf("%d\n",a[i]);
}
int key;
printf("Searching Value:");
scanf("%d",&key);
int k=0;
int loc = -1;
while(k<=n-1){
    if(key==a[k]){
        loc=k;
        printf("Found at Index Number:%d",loc);
    }
    k++;
}
    if(loc==-1){
        printf("Value Not found in the array");
    }

return 0;
}

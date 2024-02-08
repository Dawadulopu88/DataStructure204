#include <stdio.h>

int main ()
{
    int n;
    int option;
    printf("Enter the stack size:");
    scanf("%d",&n);
    int stack[n];
    int top=-1;
    while(1)
    {
        printf("\n\nType..\n1 to push\n2 to pop\n3 to check if the stack is Empty\n4 to check the stack is Full\n5 size\n6 Top\n0 to exit\n");
        scanf("%d", &option);
        if(option==1)
        {

            if(top==n-1)
            {
                printf("Overflow: ");
            }
            else
            {
                int push;
                printf("Enter the value to push:");
                scanf("%d",&push);
                top++;
                stack[top]=push;
            }
            for(int i=0; i<=top; i++)
            {
                printf("%d ",stack[i]);
            }
        }
        else if(option==2)
        {
            if(top==-1)
            {
                printf("Underflow: ");
            }
            else
            {
                stack[top]='\0';
                top--;
                for(int i=0; i<=top; i++)
                {
                    printf("%d ",stack[i]);
                }
            }
        }
        else if(option==3)
        {
            if(top==-1)
            {
                printf("The stack is empty");
            }
            else
            {
                printf("The stack is not empty");
            }
        }
        else if(option==4)
        {
            if(top>=n-1)
            {
                printf("The stack is full");
            }
            else
            {
                printf("Stack is not full");
            }
        }
        else if(option==5){
            int size;
            size=top+1;
            printf("%d",size);
        }
        else if(option==0)
        {
            return ;
        }
        else
        {
            printf("Invalid input.\n");
        }
    }
}

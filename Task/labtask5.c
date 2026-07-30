//Greater of Two Numbers
//Input two integers.
//Print the greater number.

#include<stdio.h>
int main()
{
    int a,b;
    
    printf("Enter the value of A :");
    scanf("%d", &a);
    
    printf("Enter the value of B :");
    scanf("%d", &b);
    
    if(a>b)
    {
        printf("a is bigger number");
    }
    else
    {
        printf("b is bigger number");
    }
    
    return 0;
}



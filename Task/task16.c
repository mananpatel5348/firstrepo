#include <stdio.h>
int main()
{
    int num;
    
    printf("How many students are peresent :-");
    scanf("%d",&num);
    
    for ( int i = 1; i <= num; i++)
    {
        printf("student %d\n",i);
    }
    
    return 0;
}
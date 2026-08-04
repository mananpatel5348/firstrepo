#include<stdio.h>
// is program me star ke bich me space lane ke liye iske andar first vala
//space vala printf he na iske andar double space lagana he or uske baad 
//dusre printf ke andar star kr age ek or space lagana he. 
int main()
{
    for(int i =1; i<6 ;i++)
    {
        for(int j = 1; j<=5-i; j++)
        {
            printf("  ");
        }
        for(int j =1; j<=i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}
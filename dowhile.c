#include <stdio.h>
// c typer of loop
// entry controlled loop : for loop, while loop
// exit controlled loop : do while loop
int main()
{
    int i = 1;
    
    do{
        printf("%d\n",i);
        i++;
    }
    while(i < 51);

    return 0;

}
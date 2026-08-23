 // Explain with your own example the difference between entry-controlled and exit-controlled loops by writing a short code snippet for each (for/while vs do-while) and describing what happens if the loop condition is false at the start.

 // Ans :-

 #include <stdio.h>

int main()
{
    int i = 10;

    while(i < 5)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
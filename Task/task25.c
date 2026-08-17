#include <stdio.h>

int main()
{
    int budget = 1000;
    
    printf("Your budget is %d\n", budget);
    
    int n;
    
    do {
        printf("1 Racing Game ₹300\n 2 Fighting Game ₹500\n 3 Puzzle Game ₹200\n 4 Exit\n");
        printf("enter a number :-");
        scanf("%d", &n);
        // n - 1234
        
        switch(n){
            case 1 :
            if(budget >= 300){
        
             printf("You purchased racing game!\n");
                     budget = budget - 300;
                     printf("Balance : %d\n",budget);
            }else
            {
                printf("not enoufg balance\n");
            }

                     break;
            case 2 :
            if(budget >= 500)
            { printf("You purchased Fighting game!\n");
                     budget = budget - 500;
                     printf("balance : %d\n",budget);
            }else{
                printf("not enoufg balance\n");
            }
                     break;

            case 3 : 
            if(budget >= 200)
            {printf("You purchased puzzle game game!\n");
                     budget = budget - 200;
                     printf("balance : %d\n",budget);
            }else{
                printf("not enoufg balance\n");
            }
                     break;

            case 4 : printf("Thank you for shopping!\n");
                     break;
            default : printf("Please enter correct choice!\n");
        }
    }while(n != 4);

    return 0;
}
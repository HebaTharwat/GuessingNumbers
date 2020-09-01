#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int number= (rand()%1000)+1;
   // printf("%d",number);
   long guess;
    printf("Enter a number:");
    scanf("%ld",&guess);

   while(number!=guess)
   {
       if(guess>number)
        printf("Not correct , too high");

      else if(guess<number)
        printf("not correct , too low");

        puts( "" );

        printf("Enter a number:");
        scanf("%ld",&guess);

   }

    if(guess==number)
    printf("It is correct,you won");

     return 0;
}

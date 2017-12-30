#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int myNumber = -1;
    while (myNumber < 4 || myNumber > 24){
        printf("Height: ");
      myNumber  = get_int();
    }
    {
        for (int j = 1; j <= myNumber; j++)
    {

        for(int i = myNumber - j; i >= 0; i--){
        printf(" ");
        }

        for(int i = 1; i <= j; i++){
        printf("#");
        }
      printf("\n");
    }
    }

}
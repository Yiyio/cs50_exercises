#include <cs50.h>
#include <stdio.h>

int main(void){

double change = get_float();

int coins = 0;

while (change > 0.25) {
    change -= 0.25;
    coins++;

}

while (change > 0.10) {
    change -= 0.10;
    coins++;

}

while (change > 0.05) {
    change -= 0.05;
    coins++;

}

while (change > 0) {
    change -= 0.01;
    coins++;

}


printf("The number of coins is: %i ", coins);
printf("and the change is, of course, %f", change);


}
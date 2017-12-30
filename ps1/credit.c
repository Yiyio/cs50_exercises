/*
This program validates credit card numbers from VISA, MASTERCARD and AMEX
*/

#include <cs50.h>
#include <stdio.h>

int main(void){

long long cc = get_long_long();

int evens = 0;

int odds = 0;

int counter = 1;

int firstdigit = 0;

while (cc > 0) {
    int output = cc % 10;
    if (counter % 2 == 0){
        output *= 2;
        int fixedoutput = output;
            while(fixedoutput > 0){
                output = fixedoutput % 10;
                evens += output;
                fixedoutput /= 10;
            }

    } else{
        odds += output;
    }

    firstdigit = cc;
    cc = cc / 10;
    counter++;
}

int total = evens + odds;

int cardlength = counter - 1;

int lastdigit = total % 10;

if (lastdigit != 0 || cardlength < 13 || cardlength > 16 || cardlength == 14){
    printf("The card is invalid!");
} else if (lastdigit == 0 && firstdigit == 4){
    printf("The card is valid! And it's a VISA");
} else if (lastdigit == 0 && cardlength == 15) {
    printf("The card is valid! And it's an AMEX");
} else {
    printf("The card is valid! And it's a MASTERCARD");
}

}
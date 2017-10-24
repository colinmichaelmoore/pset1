#include <stdio.h>
#include <cs50.h>

int main(void) {

    printf("Minutes: ");
    int minutes = get_int();
    minutes = minutes * 12;
    printf("Bottles: %i\n", minutes);

}



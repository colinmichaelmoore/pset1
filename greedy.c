#include <stdio.h>
#include <cs50.h>
#include <math.h>

float change = -10;

float getChange(){

    printf("How much change is owed?\n");
    change = get_float();
    return 0;
}

int main(void) {

    //The number of coins to give back
    int answer = 0;



    do {



        if (change < .01){
            getChange();
        }


    } while (change < 0);

    change = round(change * 100);
    printf("%f\n", change);




            for (int q = change; q > 0; q = q - 25){

                if (change >= 25){
                    change = change - 25;
                    answer++;
                }
            }


            for (int d = change; d > 0; d = d - 10){

                    if (change >= 10){
                    change = change - 10;
                    answer++;

                }
            }


            for (int n = change; n > 0; n = n - 5){

                if (change >= 5){
                    change = change - 5;
                    answer++;
                }
            }



             if (change > 0){

                 answer += change;
                 change = 0;
             }









        printf("%i\n", answer);









 return 0;
}

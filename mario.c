#include <stdio.h>
#include <cs50.h>

int height = -10;
int whiteSpace = 0;
    //Prompt user
    int getHeight(void)
    {
        printf("Height: ");
        height = get_int();
        return 0;
    }

int main(void){


    char * space = " ";
    char * block = "#";

    int blocksNum = 2;

    do {
        if (height < 0 || height > 23){

         getHeight();
        }

    }
    while (height < 0 || height > 23);

    if (height == 0){
        return 0;
    }
    whiteSpace = height - 1;

    for (int i = 0; i < height; i++){

        printf("\n");

        //Add spaces
        for (int j = 0; j < whiteSpace; j++){

            printf("%s", space);



        }

        //Add blocks

        for (int x = 0; x < blocksNum; x++){
            printf("%s", block);
        }

            //Decrement whitespaces by one each iteration
            whiteSpace--;
            //Increment pyramid blocks each iteration
            blocksNum++;
            //new line




    }

    printf("\n");



return 0;

}

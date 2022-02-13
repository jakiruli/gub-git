
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number1,number2,number3;
    printf("Please Enter 3 numbers\n");
    scanf("%d %d %d",&number1,&number2,&number3);

    if(number1<number2 && number1<number3){

        printf("\n%d  smallest Number",number1);
    }
    else if(number2<number3){

        printf("\n%d  smallest Number",number2);
    }
    else{
        printf("\n%d  smallest Number",number3);
    }
    if(number1>number2 && number1>number3){

        printf("\n%d largest Number",number1);
    }
    else if(number2>number3){

        printf("\n%d  largest Number",number2);
    }
    else{
        printf("\n%d  largest Number",number3);
    }

    return 0;
}

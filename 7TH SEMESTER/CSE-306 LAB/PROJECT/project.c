
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(){
    int i,id=0,digit=0 , operator=0;
    char e[50];
    printf("Enter an equation:");
    fflush(stdout);
    scanf("%s",e);

    for(i=0;e[i]!='\0'; i++)
    {
        char ch= e[i];
        if(isalpha(ch))
        {
            printf("%c is an identifier \n",ch);
            id++;
        }
        else if(isdigit(ch))
        {
            printf("%c is an digit \n",ch);
            digit++;
        }
        else
        {
            printf("%c is an operator \n",ch);
            operator++;
        }
    }
    printf("Total identifiers %d \n",id);
    printf("Total digits %d \n",digit);
    printf("Total operators %d \n",operator);
    printf("Total Tokens %d \n",(id+digit+operator));

    return 0;
}

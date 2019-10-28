#include <stdio.h>
int main (void)

{
    printf("TEMPERTURE\n");

    int celsius,fahr;
    int lower,upper,step;

    lower=0;
    upper=100;
    step=5;
    celsius=lower;
    printf("celsius\tfahr\n");
    while(celsius<=upper){
        fahr=(celsius*5)/9+32;
        printf("%d\t%d\n",celsius,fahr);
        celsius=celsius+step;
    }

}
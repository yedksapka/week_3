


#include <stdio.h>


int main(){

    int x = 1;

    for(x=1; x <= 10; x++){

        if(x==5){

            continue;
        }

        printf(" %d", x);

    }

    return 0;
}
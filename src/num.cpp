#include <iostream>
#include <stdio.h>
//#include "myheader.h"

int covert_and_sum (int a, float b){
    int y = static_cast<int>(b);
    return a + y;
}

int main(){

    int x = covert_and_sum(5, 10.3);
    printf("Number %d\n", x);

}


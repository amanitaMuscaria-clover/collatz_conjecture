#include <stdio.h>
#include <stdbool.h>
int max_times = 0;
int thenum = 0;

int collatz_counter(int num) {
    int times = 0;
    while(num != 1) {
        if(num%2 == 0) {
            num = num/2;
        }
        else {
            num = num*3;
            num ++;
        }
        times ++;
    }
    return times;
}

int main( int argc, const char* argv[] ) {
    for(i = 0; i < 100,000; i++) {
        if(max_times < collatz_counter(i)) {
            max_times = collatz_counter(i);
            thenum = i;
        }
    }
    printf("The number with the longest stopping time is: %d\n", thenum, "it's stopping time is: %d\n" max_times);
}
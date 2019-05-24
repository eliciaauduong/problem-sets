// Amazalgo Uni 2019 Practice Contest
// Alice and Bob play different games. When Alice plays, she always wins exactly
// a points. When Bob plays, he always wins exactly b points.
//
// Today, after they finished playing, they noticed they had the same number of 
// points. What is the smallest number this could be?

#include <stdio.h>

int main(void) {

    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);

    
    int i = 1;
    if (a < b) {
        int lcm = a;
        while (lcm % b != 0) {
            lcm = a * i;
            i++;
        }
    } else if (a > b) {
        int lcm = b;
        while (lcm % a != 0) {
            lcm = b * i;
            i++;
        }
    } else {
        lcm = a;
    }

    printf("%d", lcm);

    return 0;
}
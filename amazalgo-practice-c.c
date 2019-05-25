// Amazalgo Uni 2019 Practice Contest
// Pig Latin is a secret language which is similar to English. To convert an 
// English word to Pig Latin, take the first letter of that word, move it to 
// the end, and then add "ay".

#include <stdio.h>

#define MAX 1000

int main(void) {

    int sentenceCount = 0;
    scanf("%d", &sentenceCount);
    
    int line[MAX] = {0};
    
    int ch = getchar();
    int i = 0;
    while (ch != ' ') {
        line[i] = ch;
        i++;
        ch = getchar();
    }

    int new[MAX] = {0}; 
    int length = 0;
    length = i;
    int last = length - 1;

    
    int j = 0;
    while (j < length) {
        new[j] = line[j+1];
        j++;
    }
    new[last] = line[0];
    new[length] = 'a';
    new[length+1] = 'y';

    int k = 0;
    int total = length + 2;
    while (k < total) {
        printf("%c", new[k]);
        k++;
    }

    printf("\n");

    return 0;
}
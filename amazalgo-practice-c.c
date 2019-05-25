// Amazalgo Uni 2019 Practice Contest
// Pig Latin is a secret language which is similar to English. To convert an 
// English word to Pig Latin, take the first letter of that word, move it to 
// the end, and then add "ay".

#include <stdio.h>

#define MAX 1000

int word_length(int pos, int line[]);

int main(void) {

    int sentenceCount = 0;
    scanf("%d", &sentenceCount);
    
    int line[MAX] = {0};
    
    int ch = getchar();
    int i = 0;
    int word = 1;
    while (ch != '\n') {
        if (ch == ' ') {
            word++;
        }
        line[i] = ch;
        i++;
        ch = getchar();
    }

    int x = 0;
    int position = 0;
    while (x < word) {
        // int new_word[MAX] = {0}; 
        int length = 0;
        
        length = word_length(position, line);
        /*
        // shift letters one position forward
        int j = 0;
        while (j < length) {
            new_word[j] = line[j+1];
            j++;
        }

        int last = length - 1;
        // move letter to the end of the word
        new_word[last] = line[0];

        // add 'ay' to the end of the word
        new_word[length] = 'a';
        new_word[length+1] = 'y';

        int k = 0;
        int total = length + 2;
        while (k < total) {
            printf("%c", new_word[k]);
            k++;
        }
        */
        position = length;
        x++;
    }
    printf("\n");

    return 0;
}

int word_length(int pos, int line[]) {
    int len = 0;
    if (line[pos] == ' ') {
        pos++;
    }
    while (line[pos] != ' ' && line[pos] != '\n' && line[pos] != 0) {
        len++;
        pos++;
    }

    return len;
}
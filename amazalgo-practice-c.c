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
    int y = 0;
    int next = 0;
    int position = 0;
    int new_line[MAX] = {0};
    while (x < word) {
        int new_word[MAX] = {0};
        int length = 0;
        // find the length of each word in a line
        length = word_length(position, line);
        // shift letters one position forward
        int j = 0;
        int w_next = next;
        int w_total = next + length;
        while (w_next < w_total) {
            new_word[j] = line[w_next + 1];
            w_next++;
            j++;
        }

        // move letter to the end of the word
        int last = length - 1;
        new_word[last] = line[next];

        // add 'ay' to the end of the word
        new_word[length] = 'a';
        new_word[length + 1] = 'y';

        int k = 0;
        int total = length + 2;
        while (k < total) {
            new_line[y] = new_word[k];
            y++;
            k++;
        }
        int last_word = word - 1;
        if (x != last_word) {
            new_line[y] = ' ';
        } else {
            new_line[y] = '\n';
        }
        y++;
        next = next + length + 1;
        position = length;
        x++;
    }

    int z = 0;
    int l_total = i + (word * 2);
    while (z < l_total) {
        printf("%c", new_line[z]);
        z++;
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
#ifndef P2_CURS_C_RECAP_STRINGS_H
#define P2_CURS_C_RECAP_STRINGS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MAX_CHARACTERS 1000
#define MAX_WORDS MAX_CHARACTERS/2
#define seps " ,;:.!?"
#define ASCII_DIFF (int)'a'-'A'

char *myRead() {
    char str[MAX_CHARACTERS];
    gets(str);
    fflush(stdin);
    char *newStr = (char *) malloc(strlen(str) * sizeof(char));
    strcpy(newStr, str);
    return newStr;
}

char subcapitalize(char ch) {
    return (ch >= 'A' && ch <= 'Z') ? (char) (ch + ASCII_DIFF) : ch;
}

char *transform(char *in) {
    int i;
    for (i = 0; in[i] != NULL; i++)
        in[i] = subcapitalize(in[i]);
    return in;
}

char **getWords(char *in) {
    char *p;
    int i;
    char **result = (char **) malloc(MAX_WORDS * sizeof(char *));
    for (i = 0, p = strtok(in, seps); p != NULL; p = strtok(NULL, seps), i++) {
        result[i] = (char *) malloc(strlen(p) * sizeof(char));
        strcpy(result[i], transform(p));
    }
    return result;
}

int get_freq(char **words, char *word) {
    int i, count = 0;
    for (i = 0; words[i] != NULL; i++) {
        count += (strcmp(words[i], word) == 0) ? 1 : 0;
    }
    return count;
}

void print(char **words) {
    int i;
    for (i = 0; words[i] != NULL; i++)
        printf("[%d]\t-\t%s\n", i + 1, words[i]);
}


void solution(char **words) {
    int i, count;
    char **printed_words = (char **) malloc(MAX_WORDS * sizeof(char *));
    int k = 0;
    for (i = 0; words[i] != NULL; i++) {
        if ((count = get_freq(words, words[i])) > 1) {
            printed_words[k] = (char *) malloc(strlen(words[i]));
            strcpy(printed_words[k++], words[i]);
            if (get_freq(printed_words, words[i]) == 1)
                printf("%s\t-\t[%d]\n", words[i], count);
        }
    }
}


#endif //P2_CURS_C_RECAP_STRINGS_H

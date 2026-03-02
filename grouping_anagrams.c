#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmpChar(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

void sortWord(char *word) {
    qsort(word, strlen(word), sizeof(char), cmpChar);
}

int main() {
    char words[][10] = {"eat","ant","tan","ate","tea"};
    int n = 5;

    for (int i = 0; i < n; i++) {
        char temp[10];
        strcpy(temp, words[i]);
        sortWord(temp);
        printf("%s -> %s\n", words[i], temp);
    }
    return 0;
}

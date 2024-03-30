#include <stdio.h>
#include <string.h>
#define MAX_NUMBER 100
int main() {
    int count = 0;
    char input[MAX_NUMBER];
    int result[26] = { 0 };

    scanf("%s", &input);
    for (int i = 0; i < strlen(input); i++)
    {
        result[input[i] - 'a']++;
    }
    for (int j = 0; j < 26; j++) {
        printf("%d ", result[j]);
    }
}
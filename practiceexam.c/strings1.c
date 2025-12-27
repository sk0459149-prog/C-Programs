#include <stdio.h>

int main() {
    char sentence[200];
    int count = 0;

    fgets(sentence, 200, stdin);

    for(int i = 0; sentence[i] != '\0'; i++) {
        if(sentence[i] != '\n')
            count++;
    }

    printf("%d", count);
    return 0;
}

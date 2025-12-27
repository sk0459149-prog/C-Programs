#include <stdio.h>

int main() {
    int alex, ben, chris;
    printf("Enter candies collected by Alex: ");
    scanf("%d", &alex);
    printf("Enter candies collected by Ben: ");
    scanf("%d", &ben);
    printf("Enter candies collected by Chris: ");
    scanf("%d", &chris);

    int most = alex;
    char mostName[10] = "Alex";

    if (ben > most) {
        most = ben;
        strcpy(mostName, "Ben");
    }
    if (chris > most) {
        most = chris;
        strcpy(mostName, "Chris");
    }

    int least = alex;
    char leastName[10] = "Alex";

    if (ben < least) {
        least = ben;
        strcpy(leastName, "Ben");
    }
    if (chris < least) {
        least = chris;
        strcpy(leastName, "Chris");
    }

    printf("\n%s collected the most candies: %d (%s)\n", 
           mostName, most, (most % 2 == 0) ? "Even" : "Odd");
    printf("%s collected the least candies: %d (%s)\n", 
           leastName, least, (least % 2 == 0) ? "Even" : "Odd");

    return 0;
}


#include <stdio.h>

int main() {
    char firstName[50], lastName[50];

    printf("First Name: ");
    scanf("%s", firstName);

    printf("Last Name: ");
    scanf("%s", lastName);

    printf("\nOutput:\n");
    printf("%s %ss TC, RMUTL, Chiang Mai, Thailand\n", firstName, lastName);

    return 0;
}
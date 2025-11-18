#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "w");
    char name[100];
    int age;

    if (fp == NULL) {
        printf("Unable to create file");
        return 1;
    }

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %sAge: %d\n", name, age);
    fclose(fp);

    printf("Data saved successfully\n");
    return 0;
}

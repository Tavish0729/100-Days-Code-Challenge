#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1, s2;

    scanf("%s %d %f", s1.name, &s1.roll, &s1.marks);
    scanf("%s %d %f", s2.name, &s2.roll, &s2.marks);

    if (strcmp(s1.name, s2.name) == 0 && s1.roll == s2.roll && s1.marks == s2.marks)
        printf("Identical");
    else
        printf("Not Identical");

    return 0;
}

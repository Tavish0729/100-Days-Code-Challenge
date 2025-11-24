#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    int g;
    scanf("%d", &g);
    p.gender = g;

    if (p.gender == MALE) printf("Male\n");
    else if (p.gender == FEMALE) printf("Female\n");
    else printf("Other\n");

    return 0;
}
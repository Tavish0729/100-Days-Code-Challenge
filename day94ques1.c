#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

void printPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
}

int main() {
    struct Person p;
    scanf("%s %d", p.name, &p.age);
    printPerson(p);
    return 0;
}

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, *ptr;
    ptr = &e;

    scanf("%s %d %f", ptr->name, &ptr->id, &ptr->salary);

    printf("%s %d %.2f", ptr->name, ptr->id, ptr->salary);

    return 0;
}

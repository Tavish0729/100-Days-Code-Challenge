#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, idx = 0;
    for(i = 1; i < n; i++) {
        if(s[i].marks > s[idx].marks) idx = i;
    }
    return s[idx];
}

int main() {
    int n, i;
    scanf("%d", &n);
    struct Student s[n];
    for(i = 0; i < n; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    struct Student top = getTopStudent(s, n);

    printf("Top Student:\n");
    printf("Name: %s\n", top.name);
    printf("Roll: %d\n", top.roll);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}

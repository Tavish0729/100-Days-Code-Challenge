#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    for(i = 0; str1[i] != '\0'; i++)
        count1[(unsigned char)str1[i]]++;

    for(i = 0; str2[i] != '\0'; i++)
        count2[(unsigned char)str2[i]]++;

    for(i = 0; i < 256; i++) {
        if(count1[i] != count2[i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("The strings are anagrams of each other.\n");
    else
        printf("The strings are not anagrams of each other.\n");

    return 0;
}


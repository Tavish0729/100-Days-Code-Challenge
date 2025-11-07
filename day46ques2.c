#include <stdio.h>
int main() {
    char str[200];
    int freq[26] = {0}, i, index = -1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if(freq[str[i] - 'a'] == 2) {
                index = i;
                break;
            }
        }
    }

    if(index != -1)
        printf("First repeating lowercase alphabet: %c\n", str[index]);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}

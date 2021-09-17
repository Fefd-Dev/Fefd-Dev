#include <stdio.h>
#include <ctype.h>

int main() {
    char ch[20] = { 0 };
    int length = 0;
    /* Input character from user */
    printf("Enter any character:");
    scanf("%s", &ch);

    for (int i = 0; i < 20; i++)
    {
        if (ch[i] != 0) {
            length++;
        }
    }

    if(isupper(ch[0]))
    {
        printf("The string in uppercase is '");
            for (int i = 0; i < length; i++)
                printf("%c", ch[i]);
            printf("'\n");
    }
    else
    {
        printf("The string in lowercase is '");
            for (int i = 0; i < length; i++)
                printf("%c", ch[i]);
            printf("'\n");
    }

    printf(" The string split in two is '");
    for (int i = 0; i < length/2; ++i)
        printf("%c", ch[i]);
    printf(" - ");
    for (int i = 0; i < length / 2; ++i)
        printf("%c", ch[(length/2)+i]);
    printf("'\n");
    return 0;
}

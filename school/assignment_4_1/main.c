#include <stdio.h>

#define Word_Length 20

int boolis_palindrome(){}
void string_reverse(){}

int main()
{
    int palindrome_check = 0, word_length = 0;
    char word[Word_Length] = { 0 };
    printf("Enter word:");
    scanf("%s", word);

    for (int i = 0; i < Word_Length; ++i)
    {
        if (word[i] != 0)
        {
            word_length++;
        }
    }
    printf("The word contains %i letters\n", word_length);


    for (int i = 0; i < word_length/2; ++i)
    {
        if (word[i] == word[word_length-1-i])
        {
            palindrome_check++;
        }
    }
    if (palindrome_check == word_length/2)
    {
        printf("The word is a palindrome\n");
    }else
    {
        printf("The word is not a palindrome\n");
    }

    printf("The word reversed is '");
    for (int i = word_length-1; 0 <= i; i--)
    {
        printf("%c", word[i]);
    }
    printf("'");

    return 0;
}

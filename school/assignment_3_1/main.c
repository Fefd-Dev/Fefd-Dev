#include <stdio.h>
#include <stdlib.h>

    int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}           ///https://www.cplusplus.com/reference/cstdlib/qsort/ check here

    int minimum(const int input[])
{
    int min = input[0];
        for(int i = 0; i<=9; i++)
        {
            if(input[i]<min)
            {
                min= input[i];
            }
        }

        return min;
}                               ///Finding the lowest number

    int maximum(const int input[])
{
    int max = input[0];
    for(int i = 0; i<=9; i++)
    {
        if(input[i]>max)
        {
            max= input[i];
        }
    }

    return max;
}                               ///Finding the highest number

    int sum(const int input[])
{
    int sum = 0;
    for(int i = 0; i<=9; i++)
    {
        sum = sum + input[i];
    }

    return sum;
}                                  ///Calculates the sum

    float average(const float sum)
    {
    return sum/10;
    }                                ///Calculates the average

    int sorting(int input[])
    {
        printf("Sorted: ");
        qsort(input, 10, sizeof(int),compare);
        for (int i=0; i<=9; i++)
        {
            printf("%i ", input[i]);
        }
        return 0;
    }                             ///Sorting array

    float median(int input[])
    {
    float med = input[4]+input[5];
    med = med/2;
    return med;
    } ///Calculating the median

int main()
{
    int input[10];

    for(int i=0;i<10;i++)
    {
        printf("Please input a number:");
        scanf("%i",&input[i]);
        printf("You entered: %i\n\n", input[i]);
    }
    printf("Minimum: %i\n", minimum(input)); ///lowest number printed
    printf("Maximum: %i\n", maximum(input)); ///Highest number printed
    printf("Sum: %i\n", sum(input));     ///Sum printed
    printf("Average: %g\n", average(sum(input))); ///Average print
    sorting(input);
    printf("\nMedian: %g\n", median(input));///Median print

    return 0;
}

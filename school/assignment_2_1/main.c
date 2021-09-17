#include <stdio.h>

int main() {

    int j = 0,count = 0;
    float i=0, sum=0, average=0;

    while(j==0)
    {
        scanf("%g", &i);                        //input, verdi
        if (i==0)                               //exit loop
        {
            j = 1;
        }
        sum=sum+i;                              //Total sum av ale input, utregningen
        average=sum/count;                      //Gjenomsnitt sum utregning
        printf("%g\n", i);                      //output av input verdi
        printf("Count: %d\n", count);           //Output count number
        printf("Sum: %g\n", sum);                 //Output sum
        printf("Average: %g\n", average);         //Output average

        count++;                                //adde en til count
    }

    return 0;
}

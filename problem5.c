#include <stdio.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input5.txt", "r");
    if (inputFile == NULL)
    {
        printf("file not found");
        return 0;
    }
    outputFile = fopen("output5.txt", "w");
    int t;
    fscanf(inputFile, "%d", &t);
    for (int i = 0; i < t; i++)
    {
        for (int k = t; k > i; k--)
        {
            fprintf(outputFile," ");
        }

        for (int j = 0; j < t; j++)
        {

            fprintf(outputFile,"# ");
        }
        fprintf(outputFile,"\n");
    }
}
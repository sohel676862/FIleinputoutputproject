#include <stdio.h>
#include <math.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input3.txt", "r");
    if (inputFile == NULL)
    {
        printf("File NOt Found");
        return 0;
    }
    outputFile = fopen("output3.txt", "w");
    int t;
    fscanf(inputFile, "%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        fscanf(inputFile, "%d", &n);
        if (n > 0)
        {
            for (int i = n; i >= -n; i--)
            {
                // printf(" %d ", i);
                fprintf(outputFile,"%d ",i);
                if (i == -n)
                {
                  fprintf(outputFile,"\n");
                }
            }
        }
        else
        {
            for (int i = n; i <= (n * (-1)); i++)
            {
                // printf(" %d ", i);
                fprintf(outputFile,"%d ",i);
                if (i == -n)
                {
                    fprintf(outputFile,"\n");
                }
            }
        }
    }
}
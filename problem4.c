#include<stdio.h>
int main(){
FILE *inputFile;
FILE *outputFile;
inputFile =fopen("input4.txt","r");
if(inputFile ==NULL){
    printf("File not find");
    return 0;
}
outputFile=fopen("output4.txt","w");
int n;
fscanf(inputFile,"%d",&n);
int sum=0;
for (int i = 0; i < n; i++)
{
    int a;
    fscanf(inputFile,"%d",&a);
     sum += a%10;
}
fprintf(outputFile,"sum = %d",sum);
}
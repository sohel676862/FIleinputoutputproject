#include<stdio.h>
int main(){
    FILE *inputFile;
    FILE *outputFile;
    inputFile= fopen("input2.text","r");
    if(inputFile==NULL){
        printf("not found");
        return 0;
    }
    outputFile=fopen("output2.txt","w");

    int n;
    fscanf(inputFile,"%d",&n);
 for (int i = 1; i <= n; i++)
 {
    fprintf(outputFile,"%d ",i);
 }
 


}
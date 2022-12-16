#include<stdio.h>
int main(){
    FILE *inputFile;
    FILE *outputFile;
    inputFile=fopen("input6.txt","r");
    if(inputFile == NULL){
        printf("file not found");
        return 0;
    }
outputFile=fopen("output6.txt","a");

int a;
fscanf( inputFile,"%d",&a);
if(a%400 ==0 ||(a%4==0 && a%100 !=0)){
fprintf(outputFile," %d --> YES\n",a);
}
else{
   fprintf(outputFile," %d --> NO\n",a);
}

}
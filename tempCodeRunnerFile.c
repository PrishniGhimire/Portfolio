#include<stdio.h>
int main(){
    char n[10];
    int r,a;
    FILE *fptr;
    fptr=fopen("student.txt","r");
    while(fscanf(fptr,"%s %d %d",n,&r,&a)!=EOF){
        printf("%s %d %d",n,r,a);
    }
    fclose(fptr);
    return 0;
}
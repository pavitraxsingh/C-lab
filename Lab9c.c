//3.Open a file, read its content line by line, and display each line on the console.

#include<stdio.h>

int main() {
    FILE *fp;
    char line[100];

    fp = fopen("myfile.txt", "r");

    if(fp == NULL) {
        printf("File not found!\n");
        return 0;
    }

    while(fgets(line, sizeof(line), fp)) {
        printf("%s", line); //for printing each line
    }

    fclose(fp);
    return 0;
}
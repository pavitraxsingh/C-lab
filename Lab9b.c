 //2.Open an existing file and read its content character by character, and then close the file.
 
 #include <stdio.h>
 int main() {
    FILE *fp;
    char ch;

    fp = fopen("myfile.txt", "r");

    if(fp == NULL) {
        printf("File not found!\n");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
 }


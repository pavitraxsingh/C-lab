   //1.Write a program to create a new file and write text into it.

   #include<stdio.h>
   int main() {
    FILE *fp;
    fp = fopen("myfile.txt", "w");

    if(fp == NULL) {
        printf("File not created!\n");
        return 0;
   }

   fprintf(fp, "Hello, this is file handling in C!\n");
   fclose(fp);

   printf("Data written to file successfully.\n");
   return 0;
}
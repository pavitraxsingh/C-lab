//3. Create a Book structure containing book_id, title, author name and price. 
// Write a C program to pass a structure as a function argument and print the book details.

#include <stdio.h>

struct Book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};

void show(struct Book b) {
    printf("%d %s %s %.2f\n", b.book_id, b.title, b.author, b.price);
}

int main() {
    struct Book b;

    scanf("%d", &b.book_id);
    scanf("%s", b.title);
    scanf("%s", b.author);
    scanf("%f", &b.price);

    show(b);

    return 0;
}

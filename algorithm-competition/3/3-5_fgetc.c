#include <stdio.h>

int main() {
    FILE *fin;
    fin = fopen("3-5.txt", "rb");
    int c, q = 1;
    while((c = fgetc(fin)) != EOF) {
        if (c == '"') {
            printf("%s", q? "``" : "''");
            q = !q;
        } else 
            printf("%c", c);
    }
}
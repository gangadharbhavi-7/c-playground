#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourceFile[100], targetFile[100];
    FILE *src, *tgt;
    char ch;

    // Read file names
    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter target file name: ");
    scanf("%s", targetFile);

    // Open source file in read mode
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file %s\n", sourceFile);
        exit(1);
    }

    // Open target file in write mode
    tgt = fopen(targetFile, "w");
    if (tgt == NULL) {
        printf("Error: Cannot open target file %s\n", targetFile);
        fclose(src);
        exit(1);
    }

    // Copy contents character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, tgt);
    }

    printf("File copied successfully from %s to %s\n", sourceFile, targetFile);

    // Close files
    fclose(src);
    fclose(tgt);

    return 0;
}
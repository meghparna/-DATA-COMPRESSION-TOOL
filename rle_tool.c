#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void compressFile(const char *inputFile, const char *outputFile) {
    FILE *in = fopen(inputFile, "r");
    FILE *out = fopen(outputFile, "w");

    if (in == NULL || out == NULL) {
        printf("Error opening files.\n");
        return;
    }

    char currentChar, prevChar;
    int count = 1;

    prevChar = fgetc(in);
    if (prevChar == EOF) {
        printf("Input file is empty.\n");
        fclose(in);
        fclose(out);
        return;
    }

    while ((currentChar = fgetc(in)) != EOF) {
        if (currentChar == prevChar) {
            count++;
        } else {
            fprintf(out, "%d%c", count, prevChar);
            count = 1;
            prevChar = currentChar;
        }
    }
    fprintf(out, "%d%c", count, prevChar);

    fclose(in);
    fclose(out);
    printf("File compressed successfully!\n");
}

void decompressFile(const char *inputFile, const char *outputFile) {
    FILE *in = fopen(inputFile, "r");
    FILE *out = fopen(outputFile, "w");

    if (in == NULL || out == NULL) {
        printf("Error opening files.\n");
        return;
    }

    int count;
    char ch;

    while (fscanf(in, "%d%c", &count, &ch) == 2) {
        for (int i = 0; i < count; i++) {
            fputc(ch, out);
        }
    }

    fclose(in);
    fclose(out);
    printf("File decompressed successfully!\n");
}

int main() {
    int choice;
    char inputFile[100], outputFile[100];

    while (1) {
        printf("\n=== Data Compression Tool (RLE) ===\n");
        printf("1. Compress a file\n");
        printf("2. Decompress a file\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Enter input file name to compress: ");
                scanf("%s", inputFile);
                printf("Enter output file name to save compressed data: ");
                scanf("%s", outputFile);
                compressFile(inputFile, outputFile);
                break;

            case 2:
                printf("Enter compressed file name to decompress: ");
                scanf("%s", inputFile);
                printf("Enter output file name to save decompressed data: ");
                scanf("%s", outputFile);
                decompressFile(inputFile, outputFile);
                break;

            case 3:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

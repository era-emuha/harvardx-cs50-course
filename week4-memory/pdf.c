#include <stdio.h>

int main(int argc, char *argv[])
{
    // Check for usage, must be 2 CLA
    if (argc != 2)
    {
        printf("Usage: %s <pdf_file>\n", argv[0]);
        return 1;
    }

    // Open the PDF file
    FILE *pdfFile = fopen(argv[1], "r");

    // Create a buffer to hold the PDF content
    __uint8_t buffer[4];

    // Create an array of signature bytes for PDF files
    __uint8_t pdfSignature[4] = {0x25, 0x50, 0x44, 0x46}; // %PDF

    // Read the first 4 bytes of the PDF file
    size_t bytesRead = fread(buffer, sizeof(__uint8_t), 4, pdfFile);

    // Check the first again signature bytes
    if (bytesRead < 4)
    {
        printf("Error: Could not read the PDF file or file is too small.\n");
        fclose(pdfFile);
        return 1;
    }

    // Compare the read bytes with the PDF signature using a for loop
    int isPDF = 1;

    for (int i = 0; i < 4; i++)
    {
        if (buffer[i] != pdfSignature[i])
        {
            isPDF = 0;
            break;
        }
    }

    if (isPDF)
    {
        printf("The file is a valid PDF file.\n");
    }
    else
    {
        printf("The file is not a valid PDF file.\n");
    }

    // Close the PDF file
    fclose(pdfFile);
    return 0;
}
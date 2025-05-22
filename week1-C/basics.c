 // Including libraries
 #include <stdio.h>

 int main(void) {
    printf("hello world \n");
    // You can use escape characters to print out special characters
    // \n, \\, \', \"
    printf("hello \"world\" \n");

    // if conditionals
    int x = 2;
    int y = 4;
    
    if (x > y)
    {
      /* code */
      printf("x is greater than y");
    } else if (x < y) {
      printf("x is less than y");
    } else if (x == y) {
      printf("x is equal to y");
    } else {
      printf("other thing")
    }
    
 }

 
 
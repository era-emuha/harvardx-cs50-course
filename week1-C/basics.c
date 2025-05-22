// Including libraries
#include <stdio.h>

// function definition
void helloworld(void)
{
  printf("Hello World\n");
}

// function definition with parameter
void intFunc(int n)
{
  for (int i = 0; i < n; i++)
  {
    /* code */
    printf("Hello\n");
  }
}

int main(void)
{
  // You can use escape characters to print out special characters
  // \n, \\, \', \"
  printf("hello world \n");
  printf("hello \"world\" \n");

  // conditional operator
  // if conditional
  int x = 2;
  int y = 4;

  if (x > y)
  {
    /* code */
    printf("x is greater than y\n");
  }
  else if (x < y)
  {
    printf("x is less than y\n");
  }
  else if (x == y)
  {
    printf("x is equal to y\n");
  }
  else
  {
    printf("other thing\n");
  }

  // assignment operator
  int count = 0;
  count = count + 1;
  count += 1;
  count++;

  // iteration operator
  // for loop
  for (int i = 0; i < 10; i++)
  {
    /* code */
    helloworld();
  }

  intFunc(5);
}

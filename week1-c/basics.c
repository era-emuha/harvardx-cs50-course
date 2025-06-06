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
  printf("%c", count);

  // iteration operator
  // for loop
  for (int i = 0; i < 10; i++)
  {
    /* code */
    helloworld();
  }

  intFunc(5);

  // while loop
  int num1 = 0;
  // constant (it doesn't change)
  const int num2 = 10;

  while (num1 < num2);
  {
    /* code */
    printf("%i\n", num1);
    num1++;
  }

  // do while loop
  do
  {
    /* code */
    printf("%i\n", num1);
    num1++;
  } while (num1 < num2);

  // Switch statement
  int num3 = 10;
  
  switch (num3)
  {
  case 1:
    /* code */
    printf("1");
    break;
  case 2:
    /* code */
    printf("2");
    break;
  case 10:
    /* code */
    printf("10");
    break;
  
  default:
    break;
  }
  
  
}

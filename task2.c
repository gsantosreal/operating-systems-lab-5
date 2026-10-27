#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exit_program (int a, int b);

typedef int (*OperationFunc)(int, int);

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  int a = 6;
  int b = 3;

  printf("Operand 'a' : %d | Operand 'b' : %d\n", a, b);
  printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4: exit): ");
  
  char choice;
  scanf(" %c", &choice);

  OperationFunc operations[] = {add, subtract, multiply, divide, exit_program};

  int index = choice - '0';

  int x = operations[index](a, b);
  printf("x = %d\n", x);

	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf("Subtracting 'b' from 'a'\n"); return a - b; }
int multiply (int a, int b) { printf("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf("Dividing 'a' by 'b'\n"); return a / b; }
int exit_program (int a, int b) { exit(0); return 0; }
#include <stdio.h>

int main() {
  float num1, num2, num3, largest;

  // take three numbers as input
  printf("Enter three numbers: ");
  scanf("%f %f %f", &num1, &num2, &num3);

  // compare the numbers using if-else statements
  if (num1 >= num2 && num1 >= num3) {
    largest = num1;
  }
  else if (num2 >= num1 && num2 >= num3) {
    largest = num2;
  }
  else {
    largest = num3;
  }

  // print the largest number
  printf("The largest number is %.2f", largest);

  return 0;
}

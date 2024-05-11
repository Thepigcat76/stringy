#include <stdio.h>

int main() {
  char str[] = "Rain";
  long long_string = 0;

  // Convert string to ASCII values and store in long
  for (int i = 0; i < sizeof(str); i++) {
    long_string |= ((long)str[i]) << (i * 8);
  }

  // Print the long representation of the ASCII values
  printf("Long representation of the ASCII values: %ld\n", long_string);

  return 0;
}

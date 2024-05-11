#include <stdio.h>

void longToString(long long_value, char *str) {
  // Iterate over each byte of the long and extract ASCII values
  for (int i = 0; i < sizeof(long); i++) {
    str[i] = (char)((long_value >> (i * 8)) & 0xFF);
  }
  // Add null terminator to mark end of the string
  str[sizeof(long)] = '\0';
}

int main() {
  char str[sizeof(long) + 1];   // +1 for null terminator
  long long_value = 1869903169; // Example long value

  // Convert the long back to a string
  longToString(long_value, str);

  // Print the string
  printf("String representation of the long: %s\n", str);

  return 0;
}

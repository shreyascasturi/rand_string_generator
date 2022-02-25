#include <stdio.h>
#include <stdlib.h>

// generate random lines of text
// ask person what amount of chars they want
// generate a random seed
// build a char array of that length and fill it with random
// chars
// then print it back to them or return it or something
// do Y or N or something to continue this infinitely
// or C to change the amount.
// maybe write to a file also?

int random_seed;
char continue_execution;
int string_length;
void generate();

int main() {
  
  extern int random_seed;
  extern char continue_execution;
  extern int string_length; // extern declarations to test.
  
  printf("Welcome to the random string generator.\n");
  printf("Enter a number in to help seed our generator: ");

  int check_seed = 0;

  while (random_seed == 0) {
    
      scanf("%d", &check_seed);
      if (check_seed == 0 || check_seed < 0) {
        printf("Please enter a positive integer: ");
      } else {
        random_seed = check_seed;
        continue_execution = 'Y';
      }
  }

  printf("What will be the length of these strings? Enter here: ");
  scanf("%d", &string_length);
  
  while (continue_execution == 'Y') {
    generate();
    printf("Would you like to continue? Y or N: ");
    char convert_input;
    scanf(" %c", (&convert_input));
    continue_execution = convert_input;
  }

  printf("Thank you for using our random string generator.\n");
  return 1;
  
}

void generate() {
  extern int string_length;

  printf("Generating random string...\n");

  char rand_string[string_length];

  for (int idx = 0; idx < string_length - 1; idx++) {
    char rand_char = (rand() % 25) + 65; // Only uppercase letters.
    rand_string[idx] = rand_char;
  }

  rand_string[string_length - 1] = '\0';

  printf("Your string is: %s \n\n", rand_string);
  
  printf("Exiting generate... \n\n");
}

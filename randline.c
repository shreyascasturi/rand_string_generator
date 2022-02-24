#include <stdio.h>

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

void generate();

int main() {
  

  printf("Welcome to the random string generator.\n");
  printf("Enter a number in to help seed our generator: ");

  int check_seed = 0;

  while (random_seed == 0) {
    
      scanf("%d", &check_seed);
      if (check_seed == 0 || check_seed < 0) {
        printf("Please enter a positive integer: ");
      } else {
        random_seed = check_seed;
        printf("Thank you for entering: %d\n", random_seed);
        printf("Proceeding to generation of strings.\n");
        continue_execution = 'Y';
      }
  }

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
  printf("Generating random string...\n");
  
}

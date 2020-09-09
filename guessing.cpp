#include <iostream>
#include <stdlib.h>
int main() {
  int number=rand()%10;
  int guess;
  int guesses=0;
  std::cout << "Guess a number!\n";
  while(guesses<5){
    std::cin >> guess;
    if(guess<0){
      std::cout << "guess must be greater than 0!\n";
      continue;
    }
    else if(number>guess){
      std::cout << "too low!\n" ;
    }
    else if(number<guess){
      std::cout <<"too high!\n";
    }
    else{
      std::cout << "correct!\n";
      exit(EXIT_SUCCESS);
    }
    guesses++;
  }
  std::cout << "out of guesses!\n";
}

#include <iostream>
#include <cmath>
int main(void){
  int number;
  int iterator=0;
  int guess=1;
  int divisors[100]={};
  int listLength=0;
  std::cout << "Enter a positive integer just below:\n";
  std::cin >> number;
  if(number<=0){
    std::cout<<"the number "<<number<<" is not a positive integer";
    exit(EXIT_SUCCESS);
  }
  else if(number==1){
    std::cout<<"The divisor of 1 is 1.\n";
    exit(EXIT_SUCCESS);
  }

  while(guess<=number){
    //can be made to be O(n^.5) instead of O(n)
    if (number%guess==0){
      divisors[listLength]=guess;
      listLength++;
    }
    guess++;
  }
  std::cout<<"The divisors of "<<number<<" are ";
  while(iterator<listLength-1){
    std::cout<<divisors[iterator]<<", ";
    iterator++;
  }
  std::cout<<"and "<<divisors[listLength-1]<<".";
}

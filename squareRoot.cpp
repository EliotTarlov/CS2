#include <iostream>
int main(void){
  double number;
  double lastEstimate;
  double currentEstimate;
  int i=0;
  std::cout<<"Enter a positive number to be square rooted please:    ";
  std::cin>>number;
  while(number<=0){
    std::cout<<"Please enter a POSITIVE number:    ";
    std::cin>>number;
  }
  lastEstimate=.5*number;
  while(i<20){
    currentEstimate=.5*(lastEstimate+(number/lastEstimate));
    std::cout <<"The current estimate is "<< currentEstimate << ".\n";
    if((lastEstimate-currentEstimate)<0.000000001){
      std::cout << "the square root of "<<number<<" is approximately "<< currentEstimate << ".\n";
      exit(EXIT_SUCCESS);
    }
    lastEstimate=currentEstimate;
    i++;
  }
  std::cout << "Somethings gone wrong, sorry!" << '\n';
}

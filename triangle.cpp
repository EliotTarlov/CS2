#include <iostream>
void buffer(int x){
  for(int i=0;i<=x;i++){
    std::cout<<" ";
  }
}
void stars(int x){
  for(int i=0;i<=x;i++){
    std::cout<<"* ";
  }
}
int main(void){
  int height;
  int iterator=0;
  std::cout << "Enter a height:";
  std::cin >> height;
  for (int i = 0; i < height; i++) {
    buffer((height-1)-i);
    stars(i);
    std::cout<<"\n";
  }
}

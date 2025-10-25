#include <iostream>

int main(){
  using u_t = unsigned;
  u_t a = 0;
  size_t count = 0;
  while (std::cin >> a){
    count++;
  }
  if (std::cin.eof()){
    std::cout << count;
    std::cout << '\n';
  }
  else if (std::cin.fail()){
    std::cerr << "Input error\n";
    return 1;
  }
}
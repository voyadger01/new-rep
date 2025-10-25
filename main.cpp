#include <iostream>
#include <limits>

bool isPyth(unsigned a, unsigned b, unsigned c){
  bool p = a == b*b + c*c;
  p = p || b*b == a*a + c*c;
  p = p || c*c == a*a + b*b;
  return p;
}

int main(){
  using u_t = unsigned;
  u_t a = 0, b = 0, c = 0;
  size_t count = 0;
  u_t max = std::numeric_limits<int>::max();
  while (std::cin >> a){
    std::cin >> c >> b;
    if (a > max || b > max || c > max || a*a > max || b*b > max || c*c > max){
      std::cerr << "overflow btw";
      return 2;
    }
    count += isPyth(a,b,c) ? 1 : 0;
    c = b;
    b = a;
  }
  if (std::cin.eof()){
    std::cout << count;
    std::cout << '\n';
  }
  else if (a > max || b > max || c > max || a*a > max || b*b > max || c*c > max){
    std::cerr << "overflow btw\n";
    return 2;
  }
  else if (std::cin.fail()){
    std::cerr << "Input error\n";
    return 1;
  }
}
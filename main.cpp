#if !_ISOC11_SOURCE
using ::gets;
#endif

#include <iostream>

void f() noexcept {
  std::cout << 000'000'052 << '\n';
}

int main() {
  f();
}

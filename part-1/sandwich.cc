// Sofia Issa
// sofiaissa0104@gmail.com
// @sofiaissa0104
// Partners: @HeroesMEX

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
  if (arguments.size() != 4) {
    std::cout << "error you must supply 3 arguments\n";
    return 1;
  }

  std::string protien{arguments.at(1)};
  std::string bread{arguments.at(2)};
  std::string condiment{arguments.at(3)};

  std::cout << "Your Order: "
           << " A " << protien << " sandwich on " << bread << " with "
           << condiment << " . ";
  return 0;
}
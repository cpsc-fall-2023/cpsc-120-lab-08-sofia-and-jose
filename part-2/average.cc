// Sofia Issa
// sofiaissa0104@csu.fullerton.edu
// @sofiaissa0104
// Partners: @HeroesMEX, @alexistakeuchi

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() <= 1) {
    std::cout << "Error: you must supply at least one number";
    return 1;
  }
  double sum = 0.0;
  for (std::string const &argument : arguments) {
    if (argument == arguments[0]) {
      continue;
    }
    sum = sum + std::stod(argument);
  }
  std::cout << "average =" << sum / static_cast<double>(arguments.size() - 1)
            << "\n";
  return 0;
}
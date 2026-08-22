#include <iostream>
#include <string>

int main() {
    std::string firstname = "Nicky";
    auto lambda = [firstname]() {std::cout << firstname << std::endl;};
    lambda();
    return 0;
}

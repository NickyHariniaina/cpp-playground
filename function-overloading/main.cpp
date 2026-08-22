#include <iostream>
int add(int a, int b) {
    return a + b;
}

int add(float a, float b) {
    return (int) a + b;
}

int main() {
    std::cout << add(1,2);
    std::cout << add(2.3f, 1.3f);
    return 0;
}

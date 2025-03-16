# include <iostream>
# include <string>

int main() {
    // output -5 ~ 10
    for (int i = -5; i < 11; ++i) {
        std::cout << i << std::endl;
    }

    // calculate the product from 1 to 9
    int product = 1;
    for (int i = 1; i < 10; ++i) {
        product *= i;
    }
    std::cout << product << std::endl;
}
# include <iostream>
# include <string>

void test1();
void test2();

int main() {
    test1();
    test2();
    return 0;
}

void test1() {
    // test: a string adding a string literal works properly
    const std::string hello = "Hello";
    const std::string message = hello + ", world" + "!";
}

void test2() {
    // test: a string literal adding a string literal works improperly
    const std::string exclaim = "!";
    const std::string message = "Hello" + ", world" + exclaim;
    // error: invalid operands of types 'const char[6]' and 'const char[8]' to binary operator"+"
}


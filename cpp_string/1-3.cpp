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
    // a variable's lifecycle is confined within the curly braces that enclose it
    {
        const std::string s = "a string";
        std::cout << s << std::endl;
    }
    {
        const std::string s = "another string";
        std::cout << s << std::endl;
    }
}

void test2() {
    // within the innermost curly brace, the declaration of the string s has covered the one outside
    {
        const std::string s = "a string";
        std::cout << s << std::endl;
        {
            const std::string s = "another string";
            std::cout << s << std::endl;
        }
    }
}
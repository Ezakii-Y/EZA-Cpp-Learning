# include <iostream>
# include <string>

int main() {
    std::cout << "Please enter your first name:";
    std::string name;
    std::cin >> name;
    // construct our information to be exported
    const std::string greeting = "Hello, " + name + "!";
    // construct the 2th and 4th line in the output
    const std::string spaces(greeting.size(), ' ');
    const std::string second = "*" + spaces + "*";
    // construct the 1th and 5th line in the output
    const std::string first(second.size(), '*');
    // output all content
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second <<std::endl;
    std::cout << "*" << greeting << "*" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;

    return 0;
}
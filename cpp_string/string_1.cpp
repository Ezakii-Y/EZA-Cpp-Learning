# include <iostream>
# include <string>

int main() {
    // enter the name
    std::cout << "Please enter your first name:";
    
    // read the name
    std::string name;
    std::cin >> name;

    // export the greeting to user
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}
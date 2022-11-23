#include <iostream>
#include <vector>
using std::string;

int main() {
    std::vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    for(const string& word : msg) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    std::cout << "I'm learning to use git." << std::endl;
    std::cout << "Here's another little change." << std::endl;
}
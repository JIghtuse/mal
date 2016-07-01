#include <iostream>
#include <string>

namespace {
    const char* prompt = "user> ";
} // namespace

const std::string read(const std::string& in)
{
    return in;
}

const std::string eval(const std::string& in)
{
    return in;
}

const std::string print(const std::string& in)
{
    return in;
}

const std::string rep(const std::string& in)
{
    return print(eval(read(in)));
}

int main()
{
    while (true) {
        if (std::cin.eof()) {
            break;
        }
        std::cout << prompt;
        std::string s;
        std::getline(std::cin, s);
        std::cout << rep(s) << std::endl;
    }
}

#include <iostream>
#include <string>
#include <readline/readline.h>
#include <readline/history.h>

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
    char *line;
    while ((line = readline(prompt)) != nullptr) {
        auto s = std::string{line};
        std::cout << rep(s) << std::endl;
        if (*line) {
            add_history(line);
        }
    }
}

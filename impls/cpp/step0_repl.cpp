#include<iostream>
#include <string>
#include "linenoise.hpp"
std::string READ(std::string input) {
    return input;
}

std::string EVAL(std::string input) {
    return input;
}

std::string PRINT(std::string input) {
    return input;
}

std::string rep(std::string input) {
    auto ast = READ(input);
    auto result = EVAL(ast);
    return PRINT(result);
}

int main(){
    const auto path_history = "history.txt";
    // Load history (linenoise)
    linenoise::LoadHistory(path_history);
    std::string input;
    for(;;){
        auto quit = linenoise::Readline("user> ", input);
        if (quit) {
            break;
        }
        std::cout << rep(input) << std::endl;
        //adding text to history
        linenoise::AddHistory(input.c_str());
    }
    linenoise::SaveHistory(path_history);
}
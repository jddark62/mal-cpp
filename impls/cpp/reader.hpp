#pragma once

#include <string>
#include <string_view>

class Tokenizer{
public:
    Tokenizer(std::string &input) : m_input{
        input
    }
    std::string_view next(){
        while(m_index < m_input.length()){
            char c = m_input.at(m_index);

            switch(c){
                case ' ':
                case '\t':
                case '\n':
                case '.':
                    break;
                case '-':
                    if(m_index + 1 < m_index.length() && m_input)
            }
        }
    }
private:
    std::string &m_input; //to not make unnecessary copies
};

/*
Value *read_str::string(input){
    // tokenize, parse into an AST, return the AST
}
*/
//
// Created by shira on 24/03/2020.
//
# pragma once
#include <string>

namespace phonetic{
    std::string find(std::string text,std::string word);
    std::string checkForException(std::string text,std::string word);
    bool ifLegalChar(char cword,char ctxt);
}


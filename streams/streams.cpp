//
//  streams.cpp
//  streams
//
//  Created by Josh Wirtner on 9/30/19.
//  Copyright © 2019 jlwCode. All rights reserved.
//

#include "streams.hpp"
#include <iostream>

void streams::encodeString(std::string& value,  std::stringstream& stream)
{
    size_t size = value.length();
    char tmp{};
    for (int i{0}; i < size; i++) {
        tmp = value[i];
        stream << tmp;
    }
}

void streams::decodeString(std::string& value,  std::stringstream& stream, size_t size)
{
    value = "";
    char tmp{};
    for (int i{0}; i < size; i++) {
        tmp = (char)stream.get();
        value += tmp;
    }
}

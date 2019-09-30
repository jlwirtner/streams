//
//  streams.hpp
//  streams
//
//  Created by Josh Wirtner on 9/30/19.
//  Copyright © 2019 jlwCode. All rights reserved.
//

#ifndef streams_hpp
#define streams_hpp

#include <string>
#include <sstream>

class streams {
  
public:
    
    template<typename T>
    static void encodeByte(T value, std::stringstream& stream) {
        int size = sizeof(value);
        uint8_t tmp{};
        for (int i{size-1}; i >= 0; --i) {
            tmp = (value & (0xFF << (i * CHAR_BIT))) >> (i * CHAR_BIT);
            stream << tmp;
        }
    }
    
    template<typename T>
    static void decodeByte(T* value, std::stringstream& stream) {
        *value = 0;
        int size = sizeof(*value);
        uint8_t tmp{};
        for (int i{size-1}; i >= 0; --i) {
            tmp = stream.get();
            *value |= tmp << (i * CHAR_BIT);
        }
    }
    
    static void encodeString(std::string& value, std::stringstream& stream);
    
    static void decodeString(std::string& value, std::stringstream& stream, size_t size);
};

#endif /* streams_hpp */

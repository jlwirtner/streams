//
//  main.cpp
//  streams
//
//  Created by Josh Wirtner on 9/30/19.
//  Copyright © 2019 jlwCode. All rights reserved.
//

#include <iostream>
#include "streams.hpp"

int main(int argc, const char * argv[]) {
    
    std::cout << "Hello, Brahj!\n" << std::endl;
    
    uint32_t input1 = 0x12345678;
    uint16_t input2 = 0x6420;
    uint32_t input3 = 0x44444444;
    std::string input4 = "ABCD";
    uint32_t input5 = 0x87654321;
    
    uint16_t middle1{};
    uint16_t middle2{};
    uint16_t middle3{};
    uint16_t middle4{};
    uint16_t middle5{};
    uint16_t middle6{};
    uint16_t middle7{};
    uint16_t middle8{};
    uint16_t middle9{};
    uint16_t middle10{};
    
    uint32_t output1{};
    uint16_t output2{};
    uint32_t output3{};
    std::string output4{};
    uint32_t output5{};
    
    std::stringstream stream1{};
    std::stringstream stream2{};
    
    streams::encodeByte<uint32_t>(input1, stream1);
    streams::encodeByte<uint16_t>(input2, stream1);
    streams::encodeByte<uint32_t>(input3, stream1);
    streams::encodeString(input4, stream1);
    streams::encodeByte<uint32_t>(input5, stream1);
    
    streams::decodeByte<uint16_t>(&middle1, stream1);
    streams::decodeByte<uint16_t>(&middle2, stream1);
    streams::decodeByte<uint16_t>(&middle3, stream1);
    streams::decodeByte<uint16_t>(&middle4, stream1);
    streams::decodeByte<uint16_t>(&middle5, stream1);
    streams::decodeByte<uint16_t>(&middle6, stream1);
    streams::decodeByte<uint16_t>(&middle7, stream1);
    streams::decodeByte<uint16_t>(&middle8, stream1);
    streams::decodeByte<uint16_t>(&middle9, stream1);
    streams::decodeByte<uint16_t>(&middle10, stream1);
    
    streams::encodeByte<uint16_t>(middle1, stream2);
    streams::encodeByte<uint16_t>(middle2, stream2);
    streams::encodeByte<uint16_t>(middle3, stream2);
    streams::encodeByte<uint16_t>(middle4, stream2);
    streams::encodeByte<uint16_t>(middle5, stream2);
    streams::encodeByte<uint16_t>(middle6, stream2);
    streams::encodeByte<uint16_t>(middle7, stream2);
    streams::encodeByte<uint16_t>(middle8, stream2);
    streams::encodeByte<uint16_t>(middle9, stream2);
    streams::encodeByte<uint16_t>(middle10, stream2);
    
    streams::decodeByte<uint32_t>(&output1, stream2);
    streams::decodeByte<uint16_t>(&output2, stream2);
    streams::decodeByte<uint32_t>(&output3, stream2);
    streams::decodeString(output4, stream2, input4.length());
    streams::decodeByte<uint32_t>(&output5, stream2);
    
    std::cout << "Input1  = " << input1 << std::endl;
    std::cout << "Output1 = " << output1 << std::endl;
    
    std::cout << "\nInput2  = " << input2 << std::endl;
    std::cout << "Output2 = " << output2 << std::endl;
    
    std::cout << "\nInput3  = " << input3 << std::endl;
    std::cout << "Output3 = " << output3 << std::endl;
    
    std::cout << "\nInput4  = " << input4 << std::endl;
    std::cout << "Output4 = " << output4 << std::endl;
    
    std::cout << "\nInput5  = " << input5 << std::endl;
    std::cout << "Output5 = " << output5 << std::endl;
    
    return 0;
}

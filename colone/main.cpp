//
//  main.cpp
//  colone
//
//  Created by Kaiyin Zhong on 22/07/14.
//  Copyright (c) 2014 com.mycomp. All rights reserved.
//

#include <iostream>
#include <limits>
#include <fstream>

int main(int argc, const char * argv[])
{
    std::ifstream in_file(argv[1]);
    std::string firstword;
    while (in_file >> firstword) {
        std::cout << firstword << "\n";
        in_file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return 0;
}


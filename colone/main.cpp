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
#include <cstdlib>

int main(int argc, const char * argv[])
{
    try {
        std::ifstream in_file(argv[1]);
        int n_skip = atoi(argv[2]) - 1;
        if(n_skip < 0) {
            throw std::string("Column number must be >= 1!");
        }
        std::string tmpword;
        while (in_file) {
            int n_skip_copy = n_skip;
            
            // skip words
            while(n_skip_copy > 0) {
                in_file >> tmpword;
                n_skip_copy--;
            }
            
            in_file >> tmpword;
            std::cout << tmpword << "\n";
            in_file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } catch (std::string& e) {
        std::cerr << e << "\n";
    }
    return 0;
}


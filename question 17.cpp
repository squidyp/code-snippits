//
//  main.cpp
//  question17
//
//  Created by Charles Panter on 11/12/18.
//  Copyright © 2018 Charles Panter. All rights reserved.
//

#include <iostream>

//void Increment (int);

int main() {
    int count = 1;
    while (count < 10) {
        std::cout << "The number after " << count;
        count++;
//   Increment(count);
    std::cout << " is " << count << std::endl;
    }
    return 0;
}
/*void Increment (int nextNumber){
    nextNumber++;
}*/

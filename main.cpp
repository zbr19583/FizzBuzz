//
//  main.cpp
//  FizzBuzz
//
//  Created by Brian Mar on 3/1/14.
//  Copyright (c) 2014 Brian Mar. All rights reserved.
//

#include <iostream>

void FizzBuzz(int num);

int main()
{
    
    FizzBuzz(100);
    
}





void FizzBuzz(int num)
{
    
    for (int i = 0; i < num; ++i)
    {
        
        if (i % 3 == 0 && i % 5 == 0)
        {
            std::cout << "FizzBuzz\n";
        }
        
        else if (i % 3 == 0)
        {
            std::cout << "Fizz\n";
        }
        else if(i % 5 == 0)
        {
            std::cout << "Buzz\n";
        }
        else
            std::cout << i << std::endl;
    }
}
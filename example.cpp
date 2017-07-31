/*
    MIT License

    Copyright (c) 2017 Blackhack

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
*/

#include <iostream>
#include "RandomR.h"

int main()
{
    // Seed is optional, by default it uses a random device seed.
    //RandomR::SetSeed(12345);

    // Unsigned int, int and float range random types.
    std::cout << "urand: " << RandomR::urand(0, 500) << std::endl;
    std::cout << "irand: " << RandomR::irand(-500, 500) << std::endl;
    std::cout << "frand: " << RandomR::frand(0.0f, 10.0f) << std::endl;

    // Same but 64bits and double.
    std::cout << "urand64: " << RandomR::urand64(0, 500) << std::endl;
    std::cout << "irand64: " << RandomR::irand64(-500, 500) << std::endl;
    std::cout << "drand: " << RandomR::drand(0.0, 10.0) << std::endl;

    // Chance or percent of win 50%
    std::cout << "roll_chance_i: " << (RandomR::roll_chance_i(50) ? "Win" : "Fail") << std::endl;

    // Chance or percent of win 80.5%
    std::cout << "roll_chance_f: " << (RandomR::roll_chance_f(80.5) ? "Win" : "Fail") << std::endl;

    return 0;
}

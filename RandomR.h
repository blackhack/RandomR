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

#ifndef RandomR_h__
#define RandomR_h__

#include <ctype.h>
#include <random>

namespace RandomR
{
    void SetSeed(uint32_t seed);

    uint32_t urand(uint32_t min, uint32_t max);
    int32_t irand(int32_t min, int32_t max);
    float frand(float min, float max);

    uint64_t urand64(uint64_t min, uint64_t max);
    int64_t irand64(int64_t min, int64_t max);
    double drand(double min, double max);

    bool roll_chance_i(uint32_t chance);
    bool roll_chance_f(float chance);

    double normalRand(double mean, double stdev);
}

#endif // RandomR_h__

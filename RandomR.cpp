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

#include "RandomR.h"

namespace RandomR
{
    std::random_device rd;

    // Random engine selection.
    thread_local std::mt19937 _engine(rd());

    void SetSeed(uint32_t seed)
    {
        _engine.seed(seed);
    }

    uint32_t urand(uint32_t min, uint32_t max)
    {
        std::uniform_int_distribution<uint32_t> dist(min, max);

        return dist(_engine);
    }

    int32_t irand(int32_t min, int32_t max)
    {
        std::uniform_int_distribution<int32_t> dist(min, max);

        return dist(_engine);
    }

    float frand(float min, float max)
    {
        std::uniform_real_distribution<float> dist(min, max);

        return dist(_engine);
    }

    uint64_t urand64(uint64_t min, uint64_t max)
    {
        std::uniform_int_distribution<uint64_t> dist(min, max);

        return dist(_engine);
    }

    int64_t irand64(int64_t min, int64_t max)
    {
        std::uniform_int_distribution<int64_t> dist(min, max);

        return dist(_engine);
    }

    double drand(double min, double max)
    {
        std::uniform_real_distribution<double> dist(min, max);

        return dist(_engine);
    }

    bool roll_chance_i(uint32_t chance)
    {
        return chance > urand(0, 99);
    }

    bool roll_chance_f(float chance)
    {
        return chance > frand(0, 99);
    }

    double normalRand(double mean, double stdev)
    {
        std::normal_distribution<double> dist(mean, stdev);

        return dist(_engine);
    }
}

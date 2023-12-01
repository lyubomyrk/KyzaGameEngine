#include "Engine.h"
#include <iostream>

#define FMT_HEADER_ONLY
#include <fmt/core.h>

namespace Kyza
{
    using namespace std;

    void EngineHelloWorld()
    {
        cout << "Hello, from Kyza!" << endl;
    }

    void EngineLog(string message)
    {
        fmt::print(message);
    }
};

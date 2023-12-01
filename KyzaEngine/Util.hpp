#pragma once

#include <string>

namespace Kyza
{
    class KyzaString
    {
    private:
    public:
        KyzaString();

        std::string ToString();
    };
    void KyzaConsoleLog(const KyzaString &message);
};
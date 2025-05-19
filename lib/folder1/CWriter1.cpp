#include "CWriter1.h"



void CWriter1::writer1Message(const std::string& message) const
{
    std::cout << "!!!!!! Writer 1 -> " << message << std::endl;
}

void CWriter1::writer1Messages(const std::vector<std::string>& messages) const
{
    std::cout << "Writer 1 -> ";
    
    for (const auto& msg : messages)
    {
        std::cout << msg << " ";
    }
    std::cout << std::endl;
}
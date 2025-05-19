#include "CWriter2.h"



void CWriter2::writer2Message(const std::string& message) const
{
    std::cout << "Writer 2 !!!!!! -> " << message << std::endl;
}

void CWriter2::writer2Messages(const std::vector<std::string>& messages) const
{
    std::cout << "Writer 2 -> ";
    
    for (const auto& msg : messages)
    {
        std::cout << msg << " ";
    }
    std::cout << std::endl;
}
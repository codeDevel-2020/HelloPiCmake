/******************************************************************************
 * Includes
 *****************************************************************************/

#include "CWriter1.h"
#include "Calc.h"

 
/******************************************************************************
 *****************************************************************************/
void CWriter1::writer1Message(const std::string& message) const {

    std::cout << "Writer 1 !!!!!! -> " << message << " calc from c-file (150+30): " << calcAdd(150,30) << std::endl; 
}


/******************************************************************************
 *****************************************************************************/
void CWriter1::writer1Messages(const std::vector<std::string>& messages) const {

    std::cout << "Writer 1 -> ";
    
    for (const auto& msg : messages)
    {
        std::cout << msg << " ";
    }
    std::cout << std::endl;
}
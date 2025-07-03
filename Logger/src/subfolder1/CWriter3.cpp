/******************************************************************************
 * Includes
 *****************************************************************************/

#include "CWriter3.h"
#include "Calc.h"

 
/******************************************************************************
 *****************************************************************************/
void CWriter3::writer3Message(const std::string& message) const {

    std::cout << "Writer 3 !!!!!! -> " << message << " calc from c-file (150-30): " << calcSub(150,30) << std::endl;   
}


/******************************************************************************
 *****************************************************************************/
void CWriter3::writer3Messages(const std::vector<std::string>& messages) const {

    std::cout << "Writer 3 -> ";
    
    for (const auto& msg : messages)
    {
        std::cout << msg << " ";
    }
    std::cout << std::endl;
} 
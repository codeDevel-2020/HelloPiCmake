/******************************************************************************
 * Includes
 *****************************************************************************/
#include "CWriter2.h"
#include "Calc.h"

 
/******************************************************************************
 *****************************************************************************/
void CWriter2::writer2Message(const std::string& message) const {


#ifndef NDEBUG
    // Debug build
    std::cout << "DEBUG Writer 2 !!!!!! -> " << message << " calc from c-file (10+11): " << calcAdd(10,11) << std::endl;  
#else 
    // Release build
    std::cout << "RELEASE Writer 2 !!!!!! -> " << message << " calc from c-file (10+11): " << calcAdd(10,11) << std::endl; 
#endif
} 


/******************************************************************************
 *****************************************************************************/
void CWriter2::writer2Messages(const std::vector<std::string>& messages) const {
    
    std::cout << "Writer 2 -> ";
    
    for (const auto& msg : messages)
    {
        std::cout << msg << " ";
    }
    std::cout << std::endl;
}
/******************************************************************************
 * Includes
 *****************************************************************************/
#include "CWriter1.h"
#include "CWriter2.h"

#include "CLoggerClient.h"


/******************************************************************************
 *****************************************************************************/
int main() {
    CWriter1 writer1;
    CWriter2 writer2;

    CLoggerClient loggerClient;

    std::cout << "Starting HardwareControl main..." << std::endl << std::endl; 

    writer1.writer1Message("HardwareControl calls CMP_LIB_Utilities");
    writer2.writer2Message("HardwareControl calls CMP_LIB_Utilities");

    loggerClient.logMessage("This is a log message from the logger client (inside HardwareControl).");   


  
    return 0;
}

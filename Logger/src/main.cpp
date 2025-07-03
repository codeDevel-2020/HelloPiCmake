/******************************************************************************
 * Includes
 *****************************************************************************/
#include "CWriter1.h"
#include "CWriter2.h"
#include "CWriter3.h"


/******************************************************************************
 *****************************************************************************/
int main() {
    CWriter1 writer1;
    CWriter2 writer2;
    CWriter3 writer3; 

    std::cout << "Starting Logger main..." << std::endl << std::endl;

    writer1.writer1Message("Hello From Logger 1!");
    writer2.writer2Message("Hello From Logger 2!");
    writer3.writer3Message("Hello From Logger 3!");
 
    return 0;
}

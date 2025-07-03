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

    writer1.writer1Message("Hello &&1++&&");
    writer2.writer2Message("Hello ++2++!");
    writer3.writer3Message("Hello --3--!"); 
 
    return 0;
}

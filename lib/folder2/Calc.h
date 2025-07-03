#ifndef __CALC_H__
#define __CALC_H__


#ifdef __cplusplus
extern "C" {
#endif


/******************************************************************************
 * Includes
 *****************************************************************************/

#include "stdint.h"


/******************************************************************************
 * @brief   Function to add two integers
 * @param   a First integer
 * @param   b Second integer 
 * @return  The sum of the two integers
 *****************************************************************************/
int calcAdd(int a, int b);


#ifdef __cplusplus
}
#endif


#endif // __CALC_H__
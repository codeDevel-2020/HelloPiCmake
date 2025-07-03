#ifndef __CWRITER3_H__
#define __CWRITER3_H__


/******************************************************************************
 * Includes
 *****************************************************************************/

#include <iostream>
#include <vector>
#include <string>


/******************************************************************************
 *****************************************************************************/
class CWriter3 {

    public:
        CWriter3() {};
        ~CWriter3() {};

        void writer3Message(const std::string& message) const;
        void writer3Messages(const std::vector<std::string>& messages) const;
};


#endif

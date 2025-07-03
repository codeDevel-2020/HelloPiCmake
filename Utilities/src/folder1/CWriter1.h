#ifndef __CWRITER1_H__
#define __CWRITER1_H__


/******************************************************************************
 * Includes
 *****************************************************************************/

#include <iostream>
#include <vector>
#include <string>


/******************************************************************************
 *****************************************************************************/
class CWriter1 {

    public:
        CWriter1() {};
        ~CWriter1() {};

        void writer1Message(const std::string& message) const;
        void writer1Messages(const std::vector<std::string>& messages) const;
};


#endif

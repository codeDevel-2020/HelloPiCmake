#ifndef __CLOGGERCLIENT_H__
#define __CLOGGERCLIENT_H__


/******************************************************************************
 * Includes
 *****************************************************************************/

#include <iostream>
#include <vector>
#include <string>


/******************************************************************************
 *****************************************************************************/
class CLoggerClient {

    public:
        CLoggerClient() {};
        ~CLoggerClient() {};

        void logMessage(const std::string& message) const;
};


#endif

#ifndef __CWRITER2_H__
#define __CWRITER2_H__


#include <iostream>
#include <vector>
#include <string>


class CWriter2 {

    public:
    CWriter2() {};
        ~CWriter2() {};

        void writer2Message(const std::string& message) const;
        void writer2Messages(const std::vector<std::string>& messages) const;
};


#endif

//
// Created by Danil on 29.07.2023.
//

#ifndef RUNTIME_WRTR_H
#define RUNTIME_WRTR_H


#include <iosfwd>
#include <fstream>

struct wrtr {
    std::ofstream wrtstrm;
    std::string path;
    wrtr(const std::string&);
    void writeString(std::string);
    void writeByte(char);
};


#endif //RUNTIME_WRTR_H

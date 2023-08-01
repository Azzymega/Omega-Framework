//
// Created by Danil on 29.07.2023.
//

#include "wrtr.h"

wrtr::wrtr(const std::string& path) {
    this->path = path;
    this->wrtstrm = std::ofstream(path);
}

void wrtr::writeString(std::string bytes) {
    this->wrtstrm << bytes;
}

void wrtr::writeByte(char byte) {
    this->wrtstrm << byte;
}

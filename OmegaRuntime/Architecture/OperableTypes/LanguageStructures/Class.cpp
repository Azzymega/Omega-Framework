//
// Created by Danil on 03.08.2023.
//

#include "Class.h"

Class::Class(const std::string& unnamed, void *unnamed1,std::vector<Field> F,std::vector<Method> M) : Object(unnamed, unnamed1,std::move(F),std::move(M)) {

}

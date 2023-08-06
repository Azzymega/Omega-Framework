//
// Created by Danil on 04.08.2023.
//

#include "Pop.h"

Word Pop::PerformOperation() {
    static_cast<class Runtime*>(Runtime)->PopStack();
    return 0;
}

Pop::Pop(std::vector<Parameter *> unnamed, void *unnamed1) : Command(unnamed, unnamed1) {

}

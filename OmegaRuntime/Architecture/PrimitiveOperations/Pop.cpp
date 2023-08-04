//
// Created by Danil on 04.08.2023.
//

#include "Pop.h"

Word Pop::PerformOperation() {
    static_cast<class Runtime*>(Runtime)->PopStack();
    return 0;
}

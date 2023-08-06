//
// Created by Danil on 04.08.2023.
//

#include "Add.h"


Word Add::PerformOperation() {
    int x = static_cast<class Runtime*>(Runtime)->GetTopAndPop();
    int y = static_cast<class Runtime*>(Runtime)->GetTopAndPop();
    static_cast<class Runtime*>(Runtime)->PushToStack(x+y);
    return 0;
}

Add::Add(std::vector<Parameter *> unnamed, void *unnamed1) : Command(unnamed, unnamed1) {

}

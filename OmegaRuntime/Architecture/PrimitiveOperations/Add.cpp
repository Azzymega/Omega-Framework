//
// Created by Danil on 04.08.2023.
//

#include "Add.h"
#include "../CTS/Integer.h"


Word Add::PerformOperation() {
    Type* x = static_cast<class Runtime*>(Runtime)->GetTopAndPop();
    Type* y = static_cast<class Runtime*>(Runtime)->GetTopAndPop();
    static_cast<class Runtime*>(Runtime)->PushToStack
            (new Integer(static_cast<class Integer*>(x)->ReturnData()
                    +static_cast<class Integer*>(y)->ReturnData()));
    return 0;
}

Add::Add(std::vector<Parameter *> unnamed, void *unnamed1) : Command(unnamed, unnamed1) {

}

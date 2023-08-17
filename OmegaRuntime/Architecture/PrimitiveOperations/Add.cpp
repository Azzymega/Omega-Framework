//
// Created by Danil on 04.08.2023.
//

#include "Add.h"
#include "../../../OmegaCTS/BTS/SystemInteger.h"


Word Add::PerformOperation() {
    /*
    SystemInteger* x = static_cast<SystemInteger *>(static_cast<class Runtime *>(Runtime)->GetTopAndPop());
    SystemInteger* y = static_cast<SystemInteger *>(static_cast<class Runtime *>(Runtime)->GetTopAndPop());
    static_cast<class Runtime*>(Runtime)->PushToStack
            (new SystemInteger(PRIMITIVE_INTEGER, std::wstring()));
            */
    return 0;
}

Add::Add(std::vector<Parameter *> unnamed, void *unnamed1) : Command(unnamed, unnamed1) {

}

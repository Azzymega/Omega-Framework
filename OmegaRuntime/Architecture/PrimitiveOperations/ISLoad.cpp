//
// Created by Danil on 04.08.2023.
//

#include "ISLoad.h"

Word ISLoad::PerformOperation() {
    static_cast<class Runtime*>(Runtime)->ReturnRegisters()->
            SetNote(static_cast<class Runtime*>(Runtime)->ReturnRegisters()->ReturnCounter(),
                    static_cast<class Runtime*>(Runtime)->GetTopAndPop());
    return 0;
}

ISLoad::ISLoad(std::vector<Parameter *> unnamed, void *unnamed1) : Command(unnamed, unnamed1) {

}

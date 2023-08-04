//
// Created by Danil on 04.08.2023.
//

#include "ISLoad.h"

Word ISLoad::PerformOperation() {
    static_cast<class Runtime*>(Runtime)->ReturnRegisters()->
            SetNote(this->Operands[0].ReturnData(),
                    static_cast<class Runtime*>(Runtime)->GetTopAndPop());
    return 0;
}

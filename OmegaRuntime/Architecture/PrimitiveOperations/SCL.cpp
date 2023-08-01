//
// Created by Danil on 01.08.2023.
//

#include "SCL.h"

SCL::SCL(Cell unnamed, Cell unnamed1, struct Runtime * Runtime) : Operation(unnamed, unnamed1, Runtime) {

}

Word SCL::PerformOperation(Word SAL, Word Data) {
    AbstractData AData = AbstractData();
    switch (SAL) {
        case SoftwareAbstractions::Print :
            AData.Data.push_back(Data);
            static_cast<class Runtime*>(Runtime)->ReturnSystemCallManager()->AddSystemCall(SoftwareAbstractions::Print,AData);
    }
    static_cast<class Runtime*>(Runtime)->ReturnSystemCallManager()->ExecuteAllCalls(&AData);
    return 0;
}

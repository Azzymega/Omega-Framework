//
// Created by Danil on 21.08.2023.
//

#ifndef LEGACYRUNTIME_GCHANDLER_H
#define LEGACYRUNTIME_GCHANDLER_H


#include "../../../../OmegaAbstractionComponents/Architecture/ArchitecturalDefines/Core/Core.h"
#include "../../../../OmegaCTS/Core/Type.h"

class GCHandler {
private:
    Type* Type;
    Word LinkCounter;
public:
    explicit GCHandler(class Type*);
    [[nodiscard]] Word ReturnLinkCounter() const;
    class Type* ReturnValue();
    class Type* CopyValue(class Type*);
};


#endif //LEGACYRUNTIME_GCHANDLER_H

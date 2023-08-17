//
// Created by Danil on 17.08.2023.
//
#include "../OmegaCTS/Core/CTS.h"
#include "../OmegaCTS/BTS/SystemString.h"

int main(){
    CTS commonTS;
    std::vector<Field> ff;
    ff.push_back(Field(new SystemString(),
                       std::wstring((L"stroka"))));
    Object bb = Object(L"Main",ff,std::vector<Method>());
    Namespace nn("Mainloxi");
    std::vector<Namespace> xx;
    nn.AppendObject(bb);
    xx.push_back(nn);
    Module dd("asfasd",xx);
    Assembly dx(std::wstring((L"asdf")),&dd);
    commonTS.InitializeAssemblyTypeSystem(dx);
    Type* Tdf = commonTS.ReturnAllocatedType(L"Main");
    return 0;
}
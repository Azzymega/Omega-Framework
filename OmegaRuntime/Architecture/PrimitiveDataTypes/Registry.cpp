//
// Created by Danil on 31.07.2023.
//

#include "Registry.h"

void Registry::AddNote(int FirstArgument, CTSObject* SecondArgument) {
    this->Data[FirstArgument] = SecondArgument;
    AppendCounter();
}

CTSObject* Registry::GetNote(int Index) {
    return this->Data[Index];
}

Registry::Registry() {
    this->Data = std::map<int,CTSObject*>();
    this->Counter = 0;
}

void Registry::SetNote(int FirstArgument, CTSObject* SecondArgument) {
    this->Data[FirstArgument] = SecondArgument;
}

void Registry::AppendCounter() {
    this->Counter++;
}

int Registry::ReturnCounter() {
    return this->Counter;
}

void Registry::Clear() {
    this->Data.clear();
}

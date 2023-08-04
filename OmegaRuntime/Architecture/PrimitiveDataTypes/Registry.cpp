//
// Created by Danil on 31.07.2023.
//

#include "Registry.h"

void Registry::AddNote(Word FirstArgument, Word SecondArgument) {
    this->Data[FirstArgument] = SecondArgument;
    AppendCounter();
}

Word Registry::GetNote(Word Index) {
    return this->Data[Index];
}

Registry::Registry() {
    this->Data = std::map<Word,Word>();
    this->Counter = 0;
}

void Registry::SetNote(Word FirstArgument, Word SecondArgument) {
    this->Data[FirstArgument] = SecondArgument;
}

void Registry::AppendCounter() {
    this->Counter++;
}

int Registry::ReturnCounter() {
    return this->Counter;
}

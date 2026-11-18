//
// Created by Евгения on 18.11.2026.
//

#include "Tvaryna.h"
#include "ZooException.h"

Tvaryna::Tvaryna(std::string name, bool isPredator) : hyzhak(isPredator) {
    try {
        setNazva(name);
    } catch (const NameException&) {
        throw; 
    }
}

std::string Tvaryna::getNazva() const { return nazva; }
void Tvaryna::setNazva(std::string name) {
    if (name.empty() || name.find_first_not_of(" \t\n\v\f\r") == std::string::npos) {
        throw NameException();
    }
    nazva = name;
}

bool Tvaryna::isHyzhak() const { return hyzhak; }
void Tvaryna::setHyzhak(bool isPredator) { hyzhak = isPredator; }

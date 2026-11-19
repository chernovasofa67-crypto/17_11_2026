//
// Created by Евгения on 18.11.2026.
//


#include "SpecificAnimals.h"
#include <iostream>


Ryba::Ryba(std::string name, bool isPredator, bool isDeepWater) : Tvaryna(name, isPredator), glybokovodna(isDeepWater) {}
bool Ryba::isGlybokovodna() const { return glybokovodna; }
void Ryba::setGlybokovodna(bool isDeepWater) { glybokovodna = isDeepWater; }
void Ryba::pokazatyOpys() const { std::cout << "Риба: " << getNazva() << ", Хижак: " << isHyzhak() << ", Глибоководна: " << glybokovodna << "\n"; }


Ptakh::Ptakh(std::string name, bool isPredator, double speed) : Tvaryna(name, isPredator), shvydkistPolotu(speed) {}
double Ptakh::getShvydkistPolotu() const { return shvydkistPolotu; }
void Ptakh::setShvydkistPolotu(double speed) { shvydkistPolotu = speed; }
void Ptakh::pokazatyOpys() const { std::cout << "Птах: " << getNazva() << ", Хижак: " << isHyzhak() << ", Швидкість польоту: " << shvydkistPolotu << "\n"; }


Ssavets::Ssavets(std::string name, bool isPredator, std::string habitat) : Tvaryna(name, isPredator), seredovyshcheProzhyvannya(habitat) {}
std::string Ssavets::getSeredovyshche() const { return seredovyshcheProzhyvannya; }
void Ssavets::setSeredovyshche(std::string habitat) { seredovyshcheProzhyvannya = habitat; }
void Ssavets::pokazatyOpys() const { std::cout << "Ссавець: " << getNazva() << ", Хижак: " << isHyzhak() << ", Середовище: " << seredovyshcheProzhyvannya << "\n"; }

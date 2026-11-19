//
// Created by Евгения on 18.11.2026.
//

#include "VolierKlitka.h"
#include "ZooException.h"
#include <iostream>

VolierKlitka::VolierKlitka(int num, int maxQty) : nomer(num), maxKilkist(maxQty) {}

int VolierKlitka::getNomer() const { return nomer; }
void VolierKlitka::setNomer(int num) { nomer = num; }
int VolierKlitka::getMaxKilkist() const { return maxKilkist; }
void VolierKlitka::setMaxKilkist(int maxQty) { maxKilkist = maxQty; }
int VolierKlitka::getPotochnaKilkist() const { return tvaryny.size(); }

void VolierKlitka::add(std::shared_ptr<Tvaryna> tvaryna) {
    if (getPotochnaKilkist() >= maxKilkist) {
        throw MaxCapacityException();
    }

    if (tvaryna->isHyzhak()) {
        for (const auto& t : tvaryny) {
            if (!t->isHyzhak()) throw PredatorException();
        }
    }

    tvaryny.push_back(tvaryna);
    std::cout << "Тварину '" << tvaryna->getNazva() << "' успішно додано в клітку №" << nomer << ".\n";
}

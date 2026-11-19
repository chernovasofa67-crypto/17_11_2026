//
// Created by Евгения on 18.11.2026.
//

#ifndef INC_17_11_2026_VOLIERKLITKA_H
#define INC_17_11_2026_VOLIERKLITKA_H



#pragma once
#include <vector>
#include <memory>
#include "Tvaryna.h"

class VolierKlitka {
private:
    int nomer;
    int maxKilkist;
    std::vector<std::shared_ptr<Tvaryna>> tvaryny;
public:
    VolierKlitka(int num, int maxQty);

    int getNomer() const;
    void setNomer(int num);
    int getMaxKilkist() const;
    void setMaxKilkist(int maxQty);
    int getPotochnaKilkist() const;

    void add(std::shared_ptr<Tvaryna> tvaryna);
};


#endif

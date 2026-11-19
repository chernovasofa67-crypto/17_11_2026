//
// Created by Евгения on 18.11.2026.
//

#ifndef INC_17_11_2026_SPECIFICANIMALS_H
#define INC_17_11_2026_SPECIFICANIMALS_H


#pragma once
#include "Tvaryna.h"

class Ryba : public Tvaryna {
private:
    bool glybokovodna;
public:
    Ryba(std::string name, bool isPredator, bool isDeepWater);
    bool isGlybokovodna() const;
    void setGlybokovodna(bool isDeepWater);
    void pokazatyOpys() const override;
};

class Ptakh : public Tvaryna {
private:
    double shvydkistPolotu;
public:
    Ptakh(std::string name, bool isPredator, double speed);
    double getShvydkistPolotu() const;
    void setShvydkistPolotu(double speed);
    void pokazatyOpys() const override;
};

class Ssavets : public Tvaryna {
private:
    std::string seredovyshcheProzhyvannya;
public:
    Ssavets(std::string name, bool isPredator, std::string habitat);
    std::string getSeredovyshche() const;
    void setSeredovyshche(std::string habitat);
    void pokazatyOpys() const override;
};


#endif 

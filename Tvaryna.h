//
// Created by Евгения on 18.11.2026.
//

#ifndef INC_17_11_2026_TVARYNA_H
#define INC_17_11_2026_TVARYNA_H


#pragma once
#include <string>

class Tvaryna {
private:
    std::string nazva;
    bool hyzhak;
public:
    Tvaryna(std::string name, bool isPredator);
    virtual ~Tvaryna() = default;

    std::string getNazva() const;
    void setNazva(std::string name);
    bool isHyzhak() const;
    void setHyzhak(bool isPredator);

    virtual void pokazatyOpys() const = 0;
};



#endif //INC_17_11_2026_TVARYNA_H

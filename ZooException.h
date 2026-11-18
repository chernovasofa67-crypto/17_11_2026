//
// Created by Евгения on 18.11.2026.
//

#ifndef INC_17_11_2026_ZOOEXCEPTION_H
#define INC_17_11_2026_ZOOEXCEPTION_H


#pragma once
#include <string>
#include <exception>

class ZooException : public std::exception {
public:
    virtual std::string showMessage() const = 0;
    const char* what() const noexcept override { return "ZooException"; }
};

class PredatorException : public ZooException {
public:
    std::string showMessage() const override { return "Помилка: Не можна додавати хижака до травоїдних!"; }
};

class MaxCapacityException : public ZooException {
public:
    std::string showMessage() const override { return "Помилка: Клітка заповнена! Максимальна місткість."; }
};

class NameException : public ZooException {
public:
    std::string showMessage() const override { return "Неможливо створити тварину - не вказана назва"; }
};


#endif

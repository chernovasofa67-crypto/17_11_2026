#include <iostream>
#include <memory>
#include "ZooException.h"
#include "SpecificAnimals.h"
#include "VolierKlitka.h"

int main() {
#ifdef _WIN32
    system("chcp 65001 > nul");
#endif

    std::cout << "--- Тест NameException ---\n";
    try {
        auto nevidomaRyba = std::make_shared<Ryba>("", false, true);
    } catch (const ZooException& ex) {
        std::cout << ex.showMessage() << "\n";
    }

    std::cout << "\n--- Створення дійсних тварин ---\n";
    auto korova = std::make_shared<Ssavets>("Корова", false, "Пасовище");
    auto tigr = std::make_shared<Ssavets>("Тигр", true, "Джунглі");
    auto lev = std::make_shared<Ssavets>("Лев", true, "Савана");

    VolierKlitka klitka1(1, 2);

    std::cout << "\n--- Тест PredatorException ---\n";
    try {
        klitka1.add(korova);
        klitka1.add(tigr);
    } catch (const ZooException& ex) {
        std::cout << ex.showMessage() << "\n";
    }

    std::cout << "\n--- Тест MaxCapacityException ---\n";
    VolierKlitka klitkaHyzhakiv(2, 1);
    try {
        klitkaHyzhakiv.add(tigr);
        klitkaHyzhakiv.add(lev);
    } catch (const ZooException& ex) {
        std::cout << ex.showMessage() << "\n";
    }

    return 0;
}

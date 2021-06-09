#ifndef AUTUMNBAG_H
#define AUTUMNBAG_H

#include "Bag.h"
#include "Bag.cpp"

#include <vector>
#include <string>
#include <fstream>

class AutumnBag : virtual public Bag
{
    public:
        AutumnBag(double, double, const std::string&, const std::string&, const std::string&);
        virtual ~AutumnBag();

        void setDays(int) override;
        int getDays() const override;
        void addClothing();
        void addGear();
        void printFood() override;
        void printClothes() override;
        void printGear() override;
        void printAll() override;

    private:
        int days{};
        int quantity = 0;
        std::ifstream in_file1;
        std::ifstream in_file2;
        std::ifstream in_file3;
        std::string unit;
        std::string food;
        std::string clothes;
        std::string gear;
        std::vector<std::string> clothesVec = {"Long_sleeved_shirt", "Raincoat", "Waterproof_shoes", "Scarf", "Leggings"};
        std::vector<std::string> gearVec = {"Umbrella", "Flashlight_batteries"};
};

#endif // AUTUMNBAG_H

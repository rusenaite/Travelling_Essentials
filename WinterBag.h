#ifndef WINTERBAG_H
#define WINTERBAG_H

#include "Bag.h"

#include <vector>
#include <string>
#include <fstream>

class WinterBag : virtual public Bag
{
    public:
        WinterBag(double, double, const std::string&, const std::string&, const std::string&);
        virtual ~WinterBag();

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
        std::vector<std::string> clothesVec = {"Long_sleeved_shirt", "Wool_socks", "Scarf", "Beanie", "Gloves", "Snow_boots"};
        std::vector<std::string> gearVec = {"Cattle", "Axe", "Windproof_face_mask"};
};

#endif // WINTERBAG_H

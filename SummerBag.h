#ifndef SUMMERBAG_H
#define SUMMERBAG_H

#include "Bag.h"

#include <vector>
#include <string>
#include <fstream>

class SummerBag : virtual public Bag
{
    public:
        SummerBag(double, double, const std::string&, const std::string&, const std::string&);
        virtual ~SummerBag();

        void setDays(int) override;
        int getDays() const override;
        void addClothing();
        void addGear();
        void printFood() override;
        void printClothes() override;
        void printGear() override;
        void printAll() override;

    private:
        std::ifstream in_file1;
        std::ifstream in_file2;
        std::ifstream in_file3;
        std::string unit;
        std::string food;
        std::string clothes;
        std::string gear;
        int quantity = 0;
        int days{};
        std::vector<std::string> clothesVec = {"Shorts", "Hat", "Swimsuit"};
        std::vector<std::string> gearVec = {"Sunglasses", "Sun cream", "Mosquito spray"};
};

#endif // SUMMERBAG_H

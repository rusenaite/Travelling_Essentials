#ifndef BAG_H
#define BAG_H
#pragma once

#include <vector>
#include <string>
#include <fstream>

class Bag
{
    public:
        Bag();
        Bag(int, double, double);
        Bag(double, double);
        ~Bag();

        void setSeason(int);
        void setTotalDistance(double);
        void setDistancePerDay(double);
        virtual void setDays(int);

        int getSeason() const;
        double getTotalDistance() const;
        double getDistancePerDay() const;
        virtual int getDays() const;

        int calculateDays();
        virtual void printFood();
        virtual void printClothes();
        virtual void printGear();
        virtual void printAll();
        bool increaseOrNot() const;
        void sleepingPlace() const;

    private:
        int season{};
        double totalDistance{};
        double distancePerDay{};
        int days{};
        int quantity = 0;
        std::ifstream in_file1;
        std::ifstream in_file2;
        std::ifstream in_file3;
        std::string unit;
        std::string food;
        std::string clothes;
        std::string gear;
};

#endif // BAG_H

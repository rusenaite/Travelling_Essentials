#include "SummerBag.h"

#include <iostream>
#include <string>

SummerBag::SummerBag(double distance, double perDay, const std::string& file1, const std::string& file2,
                     const std::string& file3)
: Bag(distance, perDay), in_file1(file1), in_file2(file2), in_file3(file3)
{
    setDays(days);
}

SummerBag::~SummerBag() = default;

void SummerBag::setDays(int _days)
{
    _days = calculateDays();
    days = _days;
}

int SummerBag::getDays() const
{
    return days;
}


void SummerBag::addClothing()
{
    for(auto & i : clothesVec){
        std::cout << "\t" << 1 << "  -\t\t" << i << std::endl;
    }
}

void SummerBag::addGear()
{
    for(auto & i : gearVec){
        std::cout << "\t" << 1 << "\t\t" << i << std::endl;
    }
}

void SummerBag::printFood()
{
    std::cout << "\nFOOD:\n";
    std::cout << "\n   Amount  Unit\t\tItem\n";
    while(in_file1 >> quantity >> unit >> food){
        if(increaseOrNot()){
            quantity += days;
            if(unit == "-"){
                std::cout << "\t" << quantity << "  " << unit << "\t\t" << food << std::endl;
            } else{
                std::cout << "\t" << quantity << "  " << unit << "\t" << food << std::endl;
            }
        }
    }
}

void SummerBag::printClothes()
{
    std::cout << "\nCLOTHING:\n";
    std::cout << "\n   Amount  Unit\t\tItem\n";
    while(in_file2 >> quantity >> unit >> clothes){
        if(increaseOrNot()){
            quantity += days;
            if(unit == "-"){
                std::cout << "\t" << quantity << "  " << unit << "\t\t" << clothes << std::endl;
            } else{
                std::cout << "\t" << quantity << "  " << unit << "\t" << clothes << std::endl;
            }
        }
    }
    addClothing();
}

void SummerBag::printGear()
{
    std::cout << "\nGEAR:\n";
    std::cout << "\n   Amount\t\tItem\n";
    while(in_file3 >> quantity >> gear){
        std::cout << "\t" << quantity << "\t\t" << gear << std::endl;
    }
    addGear();
}

void SummerBag::printAll()
{
    std::cout << "\n______________________________________________________________\n\n";
    std::cout << "List items you might need for a trip, and their quantities:\n";
    std::cout << "______________________________________________________________\n";

    printFood();
    printClothes();
    printGear();
    sleepingPlace();
}

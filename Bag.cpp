#include "Bag.h"

#include <iostream>
#include <cmath>

Bag::Bag()
{
    days = 0;
    season = 1;
    totalDistance = 0;
    distancePerDay = 0;
}

Bag::Bag(int season, double totalDistance, double distancePerDay)
{
    setSeason(season);
    setTotalDistance(totalDistance);
    setDistancePerDay(distancePerDay);
}

Bag::Bag(double totalDistance, double distancePerDay)
: totalDistance(totalDistance), distancePerDay(distancePerDay) { }

Bag::~Bag() = default;

void Bag::setSeason(int season_)
{
   if(season_ == 1 || season_ == 2 || season_ == 3 || season_ == 4){
        season = season_;
   } else{
        throw std::invalid_argument("Entered invalid choice of season."
                                    " Please select season by entering value from interval [ 1 ; 4 ].\n");
    }
}

void Bag::setTotalDistance(double totalDistance_)
{
    if(0 < totalDistance_ && totalDistance_ <= 999){
        totalDistance = totalDistance_;
    } else{
        throw std::invalid_argument("Entered invalid distance value. "
                                    " Please enter distance value from interval [ 1 ; 999 ].\n");
    }
}

void Bag::setDistancePerDay(double distancePerDay_)
{
    if(0 < distancePerDay_ && distancePerDay_ <= 200 && distancePerDay_ <= totalDistance){
        distancePerDay = distancePerDay_;
    } else{
        throw std::invalid_argument("Entered invalid distance per day value. "
                                    " Please enter distance per day value from interval [ 1 ; 200 ].\n");
    }
}

void Bag::setDays(int days_)
{
    days = days_;
}

int Bag::getSeason() const
{
    return season;
}

double Bag::getTotalDistance() const
{
    return totalDistance;
}

double Bag::getDistancePerDay() const
{
    return distancePerDay;
}

int Bag::getDays() const
{
    return days;
}

int Bag::calculateDays()
{
    double d;
    d = totalDistance / distancePerDay;
    days = ceil(d);
    return days;
}

bool Bag::increaseOrNot() const
{
    if(days > 1){
        return true;
    } else{
        return false;
    }
}

void Bag::sleepingPlace() const
{
    if(days > 1){
        std::cout << "\n\nYour trip is planned for " << days << " days. Concider renting a"
                     "camper/hostel/Airbnb or anything what seems suitable for you to spend"
                     "the nights in." << std::endl;
    }
}

void Bag::printFood()
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

void Bag::printClothes()
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
}

void Bag::printGear()
{
    std::cout << "\nGEAR:\n";
    std::cout << "\n   Amount\t\tItem\n";
    while(in_file3 >> quantity >> gear){
        std::cout << "\t" << quantity << "\t\t" << gear << std::endl;
    }
}

void Bag::printAll()
{
    std::cout << "\n______________________________________________________________\n\n";
    std::cout << "List items you might need for a trip, and their quantities:\n";
    std::cout << "______________________________________________________________\n";

    printFood();
    printClothes();
    printGear();
    sleepingPlace();
}


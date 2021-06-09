#include "Bag.h"
//#include "Bag.cpp"
#include "SummerBag.h"
#include "SummerBag.cpp"
#include "AutumnBag.h"
#include "AutumnBag.cpp"
#include "WinterBag.h"
#include "WinterBag.cpp"
#include "SpringBag.h"
#include "SpringBag.cpp"

#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>

void welcome();
void selectSeason(std::vector<std::string> season);
void enterDistance();
void enterKmPerDay();
void enteredValues(std::vector<std::string> seasonVec, int season, double distance, double perDay);

int main(int argc, char *argv[]){
    /* universal lists of items in each file */
    std::string food_file = "input_food.txt";
    std::string clothes_file = "input_clothes.txt";
    std::string gear_file = "input_gear.txt";

    std::ifstream in_file1, in_file2, in_file3;
    in_file1.open(food_file);
    in_file2.open(clothes_file);
    in_file3.open(gear_file);

    if(!in_file1 || !in_file2 || !in_file3){
        std::cerr << "Error: failed to open input file.\n";
    }
    std::vector<std::string> seasonVec = {"Summer", "Autumn", "Winter", "Spring"};

    int season;
    double distance = 0, perDay = 0;
    int n = 10;

    Bag backpack;
    welcome();

    /* separate try-catch blocks to re-enter values if any exceptions caught */
    for(int i = 0; i < n;){
        try{
            selectSeason(seasonVec);
            std::cin >> season;
            backpack.setSeason(season);
            break;
        } catch(std::invalid_argument &err){
                std::cerr << "Error Occurred: " << err.what() <<std::endl;
        } catch(...){
                std::cerr << "Undefined Error" << std::endl;
        }
    }

    for(int i = 0; i < n;){
        try{
            enterDistance();
            std::cin >> distance;
            backpack.setTotalDistance(distance);
            break;
        } catch(std::invalid_argument &err){
            std::cerr << "Error Occurred: " << err.what() <<std::endl;
        } catch(...){
            std::cerr << "Undefined Error" << std::endl;
        }
    }

    for(int i = 0; i < n;){
        try{
            enterKmPerDay();
            std::cin >> perDay;
            backpack.setDistancePerDay(perDay);
            break;
        } catch(std::invalid_argument &err){
            std::cerr << "Error Occurred: " << err.what() <<std::endl;
        } catch(...){
            std::cerr << "Undefined Error" << std::endl;
        }
    }

    try{
        enteredValues(seasonVec, season, distance, perDay);

        if(season == 1){
            SummerBag summer(distance, perDay, food_file, clothes_file, gear_file);
            summer.printAll();
        } else if(season == 2){
            AutumnBag autumn(distance, perDay, food_file, clothes_file, gear_file);
            autumn.printAll();
        } else if(season == 3){
            WinterBag winter(distance, perDay, food_file, clothes_file, gear_file);
            winter.printAll();
        } else if(season == 4){
            SpringBag spring(distance, perDay, food_file, clothes_file, gear_file);
            spring.printAll();
        } else{
            throw std::runtime_error("Default error when opening selected season class.");
        }

    } catch(std::runtime_error &err){
            std::cerr << "Error Occurred: " << err.what() <<std::endl;
    } catch(...){
            std::cerr << "Undefined Error" << std::endl;
    }

    in_file1.close();
    in_file2.close();
    in_file3.close();

    system("pause");
}

void welcome()
{
    std::cout << "\t\t\t\tWelcome!\n"
                 "Follow the instructions bellow to enter necessary information and successfully\n"
                 "prepare for your upcoming trips.\n\n"
                 "   ________________________________________________________________________\n\n";
}

void selectSeason(std::vector<std::string> season)
{
    std::cout << "Select the season when your trip is planned.\n";
    for(int i = 0; i <= 3; ++i){
        std::cout << "  " << i+1 << "-> " << season[i] << std::endl;
    }
    std::cout << "\nEnter a number from the interval [ 1 ; 4 ] to select an item: ";
}

void enterDistance()
{
    std::cout << "\nNow, enter planned distance of the trip of hiking/running/walking.\n";
    std::cout << "Enter a number from the interval [ 1 ; 999 ] in kilometers: ";
}

void enterKmPerDay()
{
    std::cout << "\nLastly, enter estimated distance you wish to accomplish in in one day (approximately).\n";
    std::cout << "Enter a number from the interval [ 1 ; 200 ] in kilometers: ";
}

void enteredValues(std::vector<std::string> seasonVec, int season, double distance, double perDay)
{
    std::cout << "\n\nEntered values are:\n\n"
                 "  | SEASON:\t\t\t" << seasonVec[season-1] << "\t|\n"
                 "  | TOTAL DISTANCE:\t\t" << distance << "\t|\n"
                 "  | DISTANCE PER DAY:\t\t" << perDay << "\t|\n" << std::endl;
}


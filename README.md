## C++ program: Travelling Essentials

### How to run the program
1) Open project through your preffered IDE (that supports C++) (for example, CodeBlocks with GNU GCC compiler(MinGW))
2) Run the program from the opened **main.cpp** file

### How to use it
After running the program, all you need to do is to provide enter main information:
1) Select season (enter a number from the list)
2) Enter distance of planned trip
3) Enter estimated distance of traveling (walking/hiking) per day

### Output & How does it work
* Output consists of 3 categories: food, clothing, and gear. User receives a list for each one of them. All of them are in seperate .txt files are used for all seasons. 

* Depending on a selected season, the list adds new values for that specific time of the year - thats how the output differs (specifically the items). 

* Program requires for total trip distance and an estimation of travelling distance per day. Based on these variables, program calculates how many days user's trip will take. In front of each element in the list there is quantity (for that item). Depending on the number of days the trip will take, program decides whether it's needed to change the quantity of the (some) items or not. 


### About the code
Structure:
  * **main.cpp** file;
  * Hierarchical Inheritance:
    * parent (base) **Bag class**;
    * 4 derived classes (**Summer, Autumn, Winter and Spring**);
  * for each class *.h* and *.cpp* files
  * 3 input files (*.txt* files)

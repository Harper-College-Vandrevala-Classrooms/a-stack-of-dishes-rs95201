#include <string>
#include <iostream>
#include "my_stack.hpp"
using namespace std;
int main()
{

DishStack stack;
Dish one_dish = Dish("A dish with one fish pattern on it");
Dish two_dish = Dish("A dish with two fish patterns on it");
Dish red_dish = Dish("A dish with a red fish pattern on it");
Dish blue_dish = Dish("A dish with a blue fish pattern on it");


int stack_size = stack.size();
std::cout << "Stack size (before pushing): " << stack_size << std::endl;

stack.push(one_dish);
stack.push(two_dish);
stack.push(red_dish);
stack.push(blue_dish);

int size_after_pushes = stack.size();
    std::cout << "Stack size (after pushing dishes): " << size_after_pushes << std::endl;

    Dish peeked_dish = stack.peek();
    cout << peeked_dish.get_description() << endl;

    Dish popped_dish = stack.pop();
    cout << popped_dish.get_description() << endl;
    
    Dish another_popped_dish = stack.pop();
    cout << another_popped_dish.get_description() << endl;
    
    int final_size = stack.size();
    cout << "Final size: " << final_size << endl;
    

    return 0;
}

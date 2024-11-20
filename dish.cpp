#include <string>
#include <iostream>
#include "my_stack.hpp"


class Dish 
{
  private:
    std::string description;
  public:
    Dish(){}
    Dish(std::string description)
    {
      this->description = description;
    }
    std::string get_description() 
    {
      return this->description;
    }
};

int main()
{
DishStack<Dish> stack;
//DishStack stack;
Dish one_dish = Dish("A dish with one fish pattern on it");
Dish two_dish = Dish("A dish with two fish patterns on it");
Dish red_dish = Dish("A dish with a red fish pattern on it");
Dish blue_dish = Dish("A dish with a blue fish pattern on it");

// The variable stack_size should equal zero.
int stack_size = stack.size();
std::cout << "Stack size (before pushing): " << stack_size << std::endl;

stack.push(one_dish);
stack.push(two_dish);
stack.push(red_dish);
stack.push(blue_dish);

int size_after_pushes = stack.size();
    std::cout << "Stack size (after pushing dishes): " << size_after_pushes << std::endl;

    // Peek the top dish (blue dish in this case)
    Dish peeked_dish = stack.peek();

    // Pop the top dish (blue dish)
    Dish popped_dish = stack.pop();
    

    // Pop the next dish (red dish)
    Dish another_popped_dish = stack.pop();
    

    // The variable final_size should equal two after popping two dishes
    int final_size = stack.size();
    

    return 0;
}

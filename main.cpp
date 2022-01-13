#include <iostream>
#include <iomanip>

double cube_volume(double side_length);  // prototype



int main(){
std::cout << "Enter the length of one side of the cube: ";
double side{};
std::cin >> side;
std::cout << "The volume of the cube is: " << std::setprecision(10)  << cube_volume(side) << std::endl;
 return 0;
}

double cube_volume(double side_length){
 double volume = side_length * side_length * side_length;
 return volume;
}

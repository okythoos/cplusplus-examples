#include <iostream>
 
int main() {
 
  double weight;                       //"double" floating-point numbers --- "weight" keyword
  int x;                               //INT(x) rounds the number x down to an integer
 
  std::cout << "Please enter your current earth weight: \n";             //text
  std::cin >> weight;                                                    //input
 
  std::cout << "\nI have information for the following planets:\n\n";      //text
  std::cout << "   1. Venus   2. Mars    3. Jupiter\n";                    //text
  std::cout << "   4. Saturn  5. Uranus  6. Neptune\n\n";                  //text
 
  std::cout << "Which planet are you visiting? ";                          //text
  std::cin >> x;                                                    //input
 
  if (x == 1) {                                                     //if statement
 
    weight = weight * 0.78;                                         //if you take out "weight =" it won't change regular input
 
  } else if (x == 2) {                                              //else if - x is the input number
 
    weight = weight * 0.39;
 
  } else if (x == 3) {                                              //else if 
 
    weight = weight * 2.65;
 
  } else if (x == 4) {                                              //else if 
 
    weight = weight * 1.17;
 
  } else if (x == 5) {                                              //else if 
 
    weight = weight * 1.05;
 
  } else if (x == 6) {                                              //else if 
 
    weight = weight * 1.23;
 
  }
 
  std::cout << "\nYour weight: " << weight << "\n";                //output
 
}

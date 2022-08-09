// NOT FINISHED


#include <iostream>

int main() {

  int year = 0;

  std::cout << "Enter year: ";
  std::cin >> year;                         //firstly to make a manual input
  
  
  
 // i need to make a code that verifies it's a four digit.. how? make an if statement and out last 4 digit numbers 1000 to 9999 as borders
  
  if (year < 1000 || year > 9999) {
  
    std::cout << "Invalid Number\n";
  }
  
  /* now i need to display whether or not the year falls on a leap year
  leap year define - A leap year is a calendar year that contains an additional day added to keep the calendar year synchronized with the astronomical - 
  year or seasonal year. */
  
 
  /*  There are 3 criteria that must be taken into account to identify a leap year:

- If the year can be evenly divided by 4 then it is a leap year, however…
- If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
- If that year is evenly divisible by 400, then it is a leap year.*/
    }
  else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
 
    std::cout << year;
    std::cout << " falls on a leap year.\n";
 
  }
  else {
 
    std::cout << year;
    std::cout << " is not a leap year.\n";
 
  }
 
}
  
}

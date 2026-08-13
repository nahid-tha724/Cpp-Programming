#include<iostream>
int main ( ) {
enum Day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
Day today{MONDAY};
if (today == SUNDAY) {
     std:: cout << “Holiday! Enjoy yourself.”;
    }
else if (today == MONDAY) {
    std:: cout << “Team meeting at 10 AM”;
    }
return 0;
}

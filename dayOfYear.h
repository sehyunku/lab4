#pragma once
#include <iostream>

namespace SehyunKu2693015
{
    class dayOfYear
    {
        int month{};
        int day{};
        void testMonth()
        {
            if ((month<1)||(month>12)){
                std::cout << "Illegal month value!\n";
                std::exit(1);
            }
        }
        void testDay()
        {
            if((day<1)||(day>31)){
                std::cout<< "Illegal day value!\n";
                std::exit(1);
            }
        }
    public:
        dayOfYear(int m=1, int d=1) : month{m}, day{d}
        {
            testMonth();
            testDay();
        }
        void input()
        {
            std::cin >> month; testMonth();
            std::cin >> day; testDay();
        }
        void print() const
        { 
            switch(month)
            {
                case 1: std::cout << "Jan."; break;
                case 2: std::cout << "Feb."; break;
                case 3: std::cout << "Mar."; break;
                case 4: std::cout << "Apr."; break;
                case 5: std::cout << "May."; break;
                case 6: std::cout << "Jun."; break;
                case 7: std::cout << "Jul."; break;
                case 8: std::cout << "Aug."; break;
                case 9: std::cout << "Sep."; break;
                case 10: std::cout << "Oct."; break;
                case 11: std::cout << "Nov."; break;
                case 12: std::cout << "Dec."; break;
            } std::cout << day << "\n";
        }
        int getMonth() const { return month; }
        int getDay() const { return day; }
        void setMonth(int newMonth) { month = newMonth; testMonth();}
        void setDay(int newDay) { day = newDay; testDay();}
    };
}
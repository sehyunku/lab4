#pragma once
#include "dayOfYear.h"

namespace SehyunKu2693015
{
    class holiday
    {
        dayOfYear d{};
        bool parkingEnforcement{};
    public:
        holiday(dayOfYear d0 = dayOfYear{1,1}, bool p0=false);
        : date{d0}, parkingEnforcement{p0}
        {}
        void print() const
        {
            date.print();
            if(parkingEnforcement)
            std::cout << "Parking laws will be enforced.\n";
            else
            std::cout << "Parking laws will NOT be enforced.\n";
        }
        dayOfYear getDate() const {return date;}
        void setDate(dayOfYear d) {date = d;}


        const dayOfYear& getDate(){return date;}    
        void setDate(dayOfYear& d){date = d;}
    };
}
#include "holiday.h"

namespace SehyunKu2693015
{
    bool compareDayOfYear(const dayOfYear& d1, const dayOfYear& d2)
    {
        return (d1.getDay()==d2.getDay()) && (d1.getMonth()==d2.getMonth());
    }
}
int main()
{
    using namespace SehyunKu2693015;
    holiday h1; h1.print();
    holiday h2{dayOfYear{12,25},true}; h2.print();
    
    if(compareDayOfYear(h1.getDate(),h2.getDate()))
    std::cout << "It's holiday!";
    else
    std::cout << "It's just a day!";

return 0;
}
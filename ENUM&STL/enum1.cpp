#include <iostream>
using namespace std;

//enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
//              0    1        2         3          4        5       6
enum week { Sunday=1, Monday=2, Tuesday=3, Wednesday=4, Thursday=5, Friday=6, Saturday=7 };
int main()
{
    week today;
    today = Wednesday;//3
    cout << "Day " << today+1;//4
    return 0;
}

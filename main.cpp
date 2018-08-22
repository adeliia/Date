#include <iostream>

using namespace std;

#include "date.h"

int main()
{
    Date d1; //default
    Date d2(2, 27, 1992);
    Date d3(0, 99, 8045);

    cout << "d1 is " << d1 << "\nd2 id " << d2 << "\nd3 is " << d3;
    cout << "\n\nd2 += 7 is " << (d2 += 7);

    Date d4(7, 13, 2018);

    cout << "\nTesting the prefix increment oper:\n"
         << " d4 is " << d4 << endl;
       cout << "++d4 is " << ++d4 << endl;
    cout << " d4 is " << d4 << endl;

    cout << "\nTextong postfix increment oper:\n"
             << " d4 is " << d4 << endl;
    cout     << " d++ is " << d4++ << endl;
    cout << " d4 is " << d4 << endl;


    return 0;
}

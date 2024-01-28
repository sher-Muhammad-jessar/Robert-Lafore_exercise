#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    cout <<left<<setw(12) << "Last name" <<setw(12)<<"First name"
              << setw(17) << "Street address" <<setw(12)<<"Town"
              << "State" <<endl;


    cout << setw(12) << "Jones" << setw(12) << "Bernard"
              <<setw(17) << "109 Pine Lane" << setw(12) << "Littletown"
              << "MI" << endl;

    cout << setw(12) << "O’Brian" << setw(12) << "Coleen"
              << setw(17) << "42 E. 99th Ave." << setw(12) << "Bigcity"
              << "NY" << endl;

    cout << setw(12) << "Wong" << setw(12) << "Harry"
              << setw(17) << "121-A Alabama St." <<setw(12) << "Lakeville"
              << "CA" << endl;

    return 0;
}


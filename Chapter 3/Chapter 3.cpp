#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {

    string FirstName;
    string LastName;
    double Pay;
    double Increase;
    double UpdatedSalary;



    ifstream FileIn;
    string FileName;
    cout << "enter a file name: ";
    cin >> FileName;
    FileIn.open(FileName);

    ofstream FileOut("SalaryOut.txt");
    FileOut << setprecision(2) << fixed;

    while (FileIn >> LastName >> FirstName >> Pay >> Increase)
    {
        UpdatedSalary = ((Pay * (Increase / 100)) + Pay);
        FileOut << " " << FirstName << " " << LastName << " " << UpdatedSalary << endl;
    }
    FileIn.close();
    FileOut.close();
    return 0;
}
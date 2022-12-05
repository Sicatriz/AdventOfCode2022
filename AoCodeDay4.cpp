#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    string line;
    ifstream myfile("InputDay4.txt");

    int elf1Start;
    int elf1Stop;
    int elf2Start;
    int elf2Stop;
    char dash;
    char comma;

    int FullDoubleZone = 0;
    int DoubleZones = 0;

	if (myfile.is_open())
	{
        while (getline(myfile, line))
        {
            myfile >> elf1Start >> dash >> elf1Stop >> comma >> elf2Start >> dash >> elf2Stop;
            

            if ((elf2Start <= elf1Start && elf2Stop >= elf1Stop) || (elf1Start <= elf2Start && elf1Stop >= elf2Stop))
            {
                FullDoubleZone++;
            }

            if ((elf2Start >= elf1Start && elf2Start <= elf1Stop) || (elf1Start >= elf2Start && elf1Start <= elf2Stop))
            {
                DoubleZones++;
            }
            
        }
        myfile.close();
    }
    else
    {
        cout << "Can not open file";
    }

    cout << "Totaal aan volledig dubbele zones is : " << FullDoubleZone << endl;
    cout << "Totaal aan zones met overlap is :" << DoubleZones << endl;


    return 0;
		
}


        



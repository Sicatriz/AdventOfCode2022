#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    string line;
    ifstream myfile("InputDay1.txt");


	int totCal = 0;
	int callories[3] = {0};

	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			if (line.empty())
			{
				totCal = 0;
			}
			else
			{
				totCal = totCal + atoi(line.c_str());

				if (totCal > callories[0])
				{
					callories[2] = callories[1];
					callories[1] = callories[0];
					callories[0] = totCal;
				}
				else if (totCal > callories[1])
				{
					callories[2] = callories[1];
					callories[1] = totCal;
				}
				else if (totCal > callories[2])
				{
					callories[2] = totCal;
				}
			}
		}
		myfile.close();
	}

    else
    {
        cout << "Unable to open file";
    }
        
    cout << callories[0] + callories[1] + callories[2] << endl;
    cout << callories[0] << " " << callories[1] << " " << callories[2] << endl;

    return 0;
}

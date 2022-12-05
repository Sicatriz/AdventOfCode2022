#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;

int main()
{

    ifstream myfile("InputDay3.txt");
    string one, two, three;
    int tempChar = 0;
    int priorTot = 0;
    int lineCount = 0;

    if (myfile.is_open())
    {
        while (getline(myfile, one))
        {
            
            getline(myfile, two);
            getline(myfile, three);

            for (tempChar = 'a'; tempChar <= 'z'; ++tempChar)
			{
				if (one.find(tempChar) != one.npos && two.find(tempChar) != two.npos && three.find(tempChar) != three.npos)
				{
					lineCount += tempChar - 'a' + 1;
				}
			}
           
           for (tempChar = 'A'; tempChar <= 'Z'; ++tempChar)
			{
				if (one.find(tempChar) != two.npos && two.find(tempChar) != two.npos && three.find(tempChar) != three.npos)
				{
					lineCount += tempChar - 'A' + 27;
				}
			}

            priorTot += lineCount;
            lineCount = 0;
        }
        
        myfile.close();
    }
    else
    {
        cout << "Can not open file";
    }

    cout << "Priority total is : " << priorTot << endl;

    return 0;
}

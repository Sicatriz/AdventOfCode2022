#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    string line;
    ifstream myfile("InputDay6.txt");


	char s1, s2, s3, s4;
    int stringLength;
    vector <int> bingo = {};
    int roundBingo;
    int counter = 0;

	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{

            stringLength = line.length();
            for (size_t i = 0; i < stringLength ; i++)
            {
                s1 = line[i];
                s2 = line[i+1];
                s3 = line[i+2];
                s4 = line[i+3];
                counter++;
              //  cout << "ROUND " << counter << " chars " << s1 << s2 << s3 << s4 << endl;

                if (s1 != s2 && s1 != s3 && s1 != s4)
                {
                    
                    if (s2 != s3 && s2 != s4)
                    {
                        if (s3 != s4)
                        {
                            bingo.push_back(counter);
                        }
                    }
                }
                else 
                {
                    // cout << "round" << counter <<"has double chars" << endl;
                    
                }
            }
		}
		myfile.close();
	}

    else
    {
        cout << "Can not open file";
    }

    cout << "Bingo's : ";
                for(int i=0; i < bingo.size(); i++)
                {
                    cout << bingo.at(i) << " ";
                } cout << endl;
    cout << "first BINGO is " << bingo.at(0)+3 << endl;

    return 0;
}

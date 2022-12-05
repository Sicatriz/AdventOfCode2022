#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;

int main()
{

    string line;
    ifstream myfile("InputDay3.txt");

    int stringLength = 0;
    int halfLength = 0;
    int counter = 0;
    char commonChar;
    int priorTot = 0;
    char letter1;
    char letter2;

    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {

            stringLength = line.length();
            halfLength = stringLength / 2;
            string comp1[halfLength];
            string comp2[halfLength];
            char charCount1[halfLength];
            char charCount2[halfLength];

            comp1[0] = line.substr(0, halfLength);
            comp2[0] = line.substr(halfLength, stringLength);

            // DEBUG CHECK
            cout << stringLength << endl;
            cout << line << endl;
            cout << "comp 1 = " << comp1[0] << endl;
            cout << "comp 2 = " << comp2[0] << endl;

            for (size_t i = 0; i <= stringLength / 2; i++)
            {
                for (size_t j = 0; j <= stringLength / 2; j++)
                {
                    letter1 = comp1[0][i];
                    letter2 = comp2[0][j];

                    if (letter1 == letter2)
                    {
                        if (letter1 != '\0')
                        {
                            commonChar = letter1;
                        }
                    }
                }

                if (i == (stringLength / 2) - 1)
                {
                    cout << "commonchar is " << commonChar << endl;

                    switch (commonChar)
                    {
                    case 'a':
                        priorTot = priorTot + 1;
                        break;
                    case 'b':
                        priorTot = priorTot + 2;
                        break;
                    case 'c':
                        priorTot = priorTot + 3;
                        break;
                    case 'd':
                        priorTot = priorTot + 4;
                        break;
                    case 'e':
                        priorTot = priorTot + 5;
                        break;
                    case 'f':
                        priorTot = priorTot + 6;
                        break;
                    case 'g':
                        priorTot = priorTot + 7;
                        break;
                    case 'h':
                        priorTot = priorTot + 8;
                        break;
                    case 'i':
                        priorTot = priorTot + 9;
                        break;
                    case 'j':
                        priorTot = priorTot + 10;
                        break;
                    case 'k':
                        priorTot = priorTot + 11;
                        break;
                    case 'l':
                        priorTot = priorTot + 12;
                        break;
                    case 'm':
                        priorTot = priorTot + 13;
                        break;
                    case 'n':
                        priorTot = priorTot + 14;
                        break;
                    case 'o':
                        priorTot = priorTot + 15;
                        break;
                    case 'p':
                        priorTot = priorTot + 16;
                        break;
                    case 'q':
                        priorTot = priorTot + 17;
                        break;
                    case 'r':
                        priorTot = priorTot + 18;
                        break;
                    case 's':
                        priorTot = priorTot + 19;
                        break;
                    case 't':
                        priorTot = priorTot + 20;
                        break;
                    case 'u':
                        priorTot = priorTot + 21;
                        break;
                    case 'v':
                        priorTot = priorTot + 22;
                        break;
                    case 'w':
                        priorTot = priorTot + 23;
                        break;
                    case 'x':
                        priorTot = priorTot + 24;
                        break;
                    case 'y':
                        priorTot = priorTot + 25;
                        break;
                    case 'z':
                        priorTot = priorTot + 26;
                        break;
                    case 'A':
                        priorTot = priorTot + 27;
                        break;
                    case 'B':
                        priorTot = priorTot + 28;
                        break;
                    case 'C':
                        priorTot = priorTot + 29;
                        break;
                    case 'D':
                        priorTot = priorTot + 30;
                        break;
                    case 'E':
                        priorTot = priorTot + 31;
                        break;
                    case 'F':
                        priorTot = priorTot + 32;
                        break;
                    case 'G':
                        priorTot = priorTot + 33;
                        break;
                    case 'H':
                        priorTot = priorTot + 34;
                        break;
                    case 'I':
                        priorTot = priorTot + 35;
                        break;
                    case 'J':
                        priorTot = priorTot + 36;
                        break;
                    case 'K':
                        priorTot = priorTot + 37;
                        break;
                    case 'L':
                        priorTot = priorTot + 38;
                        break;
                    case 'M':
                        priorTot = priorTot + 39;
                        break;
                    case 'N':
                        priorTot = priorTot + 40;
                        break;
                    case 'O':
                        priorTot = priorTot + 41;
                        break;
                    case 'P':
                        priorTot = priorTot + 42;
                        break;
                    case 'Q':
                        priorTot = priorTot + 43;
                        break;
                    case 'R':
                        priorTot = priorTot + 44;
                        break;
                    case 'S':
                        priorTot = priorTot + 45;
                        break;
                    case 'T':
                        priorTot = priorTot + 46;
                        break;
                    case 'U':
                        priorTot = priorTot + 47;
                        break;
                    case 'V':
                        priorTot = priorTot + 48;
                        break;
                    case 'W':
                        priorTot = priorTot + 49;
                        break;
                    case 'X':
                        priorTot = priorTot + 50;
                        break;
                    case 'Y':
                        priorTot = priorTot + 51;
                        break;
                    case 'Z':
                        priorTot = priorTot + 52;
                        break;
                    default:
                        break;
                    }
                }
            }

            
          //  cout << "counter is " << counter << endl;

            cout << endl;
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

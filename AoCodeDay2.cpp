#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    string line;
    ifstream myfile("InputDay2.txt");

    int rock = 1;       //A  X
    int paper = 2;      //B  Y
    int scissor = 3;    //C  Z

    int loss = 0;       
    int draw = 3;       
    int win = 6;        

    int score = 0;    
    int score2 = 0;


	if (myfile.is_open())
	{
        while (getline(myfile, line))
        {
            if (line[2] == 'X') // I have ROCK    -->  need loss
            {
                score += rock;
                

                if (line[0] == 'A')  // opponent has ROCK
                {
                    score += draw;
                    score2 += loss + scissor;
                }
                else if(line[0] == 'B')  // opponent has PAPER
                {
                    score += loss;
                    score2 += loss + rock;
                    
                }
                else if(line[0] == 'C')  // opponent has SCISSOR
                {
                    score += win;
                    score2 += loss + paper;
                }
            }
            else if (line[2] == 'Y') // I have PAPER    -->  need draw
            {
                score += paper;
                

                if (line[0] == 'A')  // opponent has ROCK
                {
                    score += win;
                    score2 += draw + rock;
                }
                else if(line[0] == 'B')  // opponent has PAPER
                {
                    score += draw;
                    score2 += draw + paper;
                }
                else if(line[0] == 'C')  // opponent has SCISSOR
                {
                    score += loss;
                    score2 += draw + scissor;
                }
            }
            else if (line[2] == 'Z') // I have SCISSOR    -->  need win
            {
                score += scissor;
                

                if (line[0] == 'A')  // opponent has ROCK
                {
                    score += loss;
                    score2 += win + paper;
                }
                else if(line[0] == 'B')  // opponent has PAPER
                {
                    score += win;
                    score2 += win + scissor;
                }
                else if(line[0] == 'C')  // opponent has SCISSOR
                {
                    score += draw;
                    score2 += win + rock;
                }
            }
        }

		myfile.close();
	}

    else
    {
        cout << "Unable to open file";
    }
        
    cout << "Mijn score is " << score << endl;
    cout << "Mijn score 2 is " << score2 << endl;

    return 0;
}

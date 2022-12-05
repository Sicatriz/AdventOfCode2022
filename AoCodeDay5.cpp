#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

int main()
{

    ifstream myfile("InputDay5.txt");
    string line;

    int iCratesQ, iFromCol, iToCol;
    string sCratesQ, sFromCol, sToCol;
    //int fromColSize, toColSize;
    //int lastPos;

    vector <string> crates1 = {"S","M","R","N","W","J","V","T"};
    vector <string> crates2 = {"B","W","D","J","Q","P","C","V"};
    vector <string> crates3 = {"B","J","F","H","D","R","P"};
    vector <string> crates4 = {"F","R","P","B","M","N","D"};
    vector <string> crates5 = {"H","V","R","P","T","B"};
    vector <string> crates6 = {"C","B","P","T"};
    vector <string> crates7 = {"B","J","R","P","L"};
    vector <string> crates8 = {"N","C","S","L","T","Z","B","W"};
    vector <string> crates9 = {"L","S","G"};


    int counter = 0;


    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            sCratesQ = line.substr(0,2);
            iCratesQ = stoi(sCratesQ);
            cout << "Crates Q is " << iCratesQ << endl;

            sFromCol = line.substr(3,1);
            iFromCol = stoi(sFromCol);
            sToCol = line.substr(5,1);
            iToCol = stoi(sToCol);
            string tempChar;
            vector <string> tempCrates = {};
            vector <string> tempCrates2 = {};
            counter++;
            cout << "From column is " << iFromCol << " || " << "To column is " << iToCol << endl;
            cout << "ROUND "<< counter << endl;

            switch (iFromCol)
            {
            case 1:
                //debug
                cout << "start col1" << endl;
                // print col1
                cout << "crates1 startpunt : ";
                for(int i=0; i < crates1.size(); i++)
                {
                    cout << crates1.at(i);
                } cout << endl;
                
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    tempCrates.push_back(crates1.back());
                    crates1.pop_back();
                }

                //MIRROR TEMP CRATES
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    tempCrates2.push_back(tempCrates.back());
                    //tempCrates.pop_back();
                }

                // print tempCrates
                cout << "tempCrates eindpunt : ";
                for(int i=0; i < tempCrates.size(); i++)
                {
                    cout << tempCrates.at(i);
                } cout << endl;

                // print crates1
                cout << "crates1 eindpunt : ";
                for(int i=0; i < crates1.size(); i++)
                {
                    cout << crates1.at(i);
                } cout << endl << "- - - - - - - - - - - - - -"<< endl;  
                break;
            case 2:
                //debug
                cout << "start col2" << endl;
                // print col2
                cout << "crates2 startpunt : ";
                for(int i=0; i < crates2.size(); i++)
                {
                    cout << crates2.at(i);
                } cout << endl;
                
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    tempCrates.push_back(crates2.back());
                    crates2.pop_back();
                }

                //MIRROR TEMP CRATES
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    tempCrates2.push_back(tempCrates.back());
                    //tempCrates.pop_back();
                }

                // print tempCrates
                cout << "tempCrates eindpunt : ";
                for(int i=0; i < tempCrates.size(); i++)
                {
                    cout << tempCrates.at(i);
                } cout << endl;

                // print crates2
                cout << "crates2 eindpunt : ";
                for(int i=0; i < crates2.size(); i++)
                {
                    cout << crates2.at(i);
                } cout << endl << "- - - - - - - - - - - - - -"<< endl;
                break;
            case 3:
                //debug
                cout << "start col3" << endl;
                // print col3
                cout << "crates3 startpunt : ";
                for(int i=0; i < crates3.size(); i++)
                {
                    cout << crates3.at(i);
                } cout << endl;
                
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    tempCrates.push_back(crates3.back());
                    crates3.pop_back();
                }

                //MIRROR TEMP CRATES
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    tempCrates2.push_back(tempCrates.back());
                    //tempCrates.pop_back();
                }

                // print tempCrates
                cout << "tempCrates eindpunt : ";
                for(int i=0; i < tempCrates.size(); i++)
                {
                    cout << tempCrates.at(i);
                } cout << endl;

                // print crates3
                cout << "crates3 eindpunt : ";
                for(int i=0; i < crates3.size(); i++)
                {
                    cout << crates3.at(i);
                } cout << endl << "- - - - - - - - - - - - - -"<< endl;
                break;
            case 4:
                //debug
                cout << "start col4" << endl;
                // print col4
                cout << "crates4 startpunt : ";
                for(int i=0; i < crates4.size(); i++)
                {
                    cout << crates4.at(i);
                } cout << endl;
                
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    tempCrates.push_back(crates4.back());
                    crates4.pop_back();
                }

                //MIRROR TEMP CRATES
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    tempCrates2.push_back(tempCrates.back());
                    //tempCrates.pop_back();
                }

                // print tempCrates
                cout << "tempCrates eindpunt : ";
                for(int i=0; i < tempCrates.size(); i++)
                {
                    cout << tempCrates.at(i);
                } cout << endl;

                // print crates4
                cout << "crates4 eindpunt : ";
                for(int i=0; i < crates4.size(); i++)
                {
                    cout << crates4.at(i);
                } cout << endl << "- - - - - - - - - - - - - -"<< endl;
                break;
            case 5:
                //debug
                cout << "start col5" << endl;
                // print col5
                cout << "crates5 startpunt : ";
                for(int i=0; i < crates5.size(); i++)
                {
                    cout << crates5.at(i);
                } cout << endl;
                
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    tempCrates.push_back(crates5.back());
                    crates5.pop_back();
                }

                //MIRROR TEMP CRATES
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    tempCrates2.push_back(tempCrates.back());
                    //tempCrates.pop_back();
                }

                // print tempCrates
                cout << "tempCrates eindpunt : ";
                for(int i=0; i < tempCrates.size(); i++)
                {
                    cout << tempCrates.at(i);
                } cout << endl;

                // print crates5
                cout << "crates5 eindpunt : ";
                for(int i=0; i < crates5.size(); i++)
                {
                    cout << crates5.at(i);
                } cout << endl << "- - - - - - - - - - - - - -"<< endl;
                break;
            case 6:
                //debug
                cout << "start col6" << endl;
                // print col6
                cout << "crates6 startpunt : ";
                for(int i=0; i < crates6.size(); i++)
                {
                    cout << crates6.at(i);
                } cout << endl;
                
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    tempCrates.push_back(crates6.back());
                    crates6.pop_back();
                }

                //MIRROR TEMP CRATES
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    tempCrates2.push_back(tempCrates.back());
                    //tempCrates.pop_back();
                }

                // print tempCrates
                cout << "tempCrates eindpunt : ";
                for(int i=0; i < tempCrates.size(); i++)
                {
                    cout << tempCrates.at(i);
                } cout << endl;

                // print crates6
                cout << "crates6 eindpunt : ";
                for(int i=0; i < crates6.size(); i++)
                {
                    cout << crates6.at(i);
                } cout << endl << "- - - - - - - - - - - - - -"<< endl;
                break;
            case 7:
                //debug
                cout << "start col7" << endl;
                // print col7
                cout << "crates7 startpunt : ";
                for(int i=0; i < crates7.size(); i++)
                {
                    cout << crates7.at(i);
                } cout << endl;
                
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    tempCrates.push_back(crates7.back());
                    crates7.pop_back();
                }

                //MIRROR TEMP CRATES
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    tempCrates2.push_back(tempCrates.back());
                    //tempCrates.pop_back();
                }

                // print tempCrates
                cout << "tempCrates eindpunt : ";
                for(int i=0; i < tempCrates.size(); i++)
                {
                    cout << tempCrates.at(i);
                } cout << endl;

                // print crates7
                cout << "crates7 eindpunt : ";
                for(int i=0; i < crates7.size(); i++)
                {
                    cout << crates7.at(i);
                } cout << endl << "- - - - - - - - - - - - - -"<< endl;
                break;
            case 8:
                //debug
                cout << "start col8" << endl;
                // print col8
                cout << "crates8 startpunt : ";
                for(int i=0; i < crates8.size(); i++)
                {
                    cout << crates8.at(i);
                } cout << endl;
                
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    tempCrates.push_back(crates8.back());
                    crates8.pop_back();
                }

                //MIRROR TEMP CRATES
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    tempCrates2.push_back(tempCrates.back());
                    //tempCrates.pop_back();
                }

                // print tempCrates
                cout << "tempCrates eindpunt : ";
                for(int i=0; i < tempCrates.size(); i++)
                {
                    cout << tempCrates.at(i);
                } cout << endl;

                // print crates8
                cout << "crates8 eindpunt : ";
                for(int i=0; i < crates8.size(); i++)
                {
                    cout << crates8.at(i);
                } cout << endl << "- - - - - - - - - - - - - -"<< endl;
                break;   
            case 9:
                //debug
                cout << "start col9" << endl;
                // print col9
                cout << "crates9 startpunt : ";
                for(int i=0; i < crates9.size(); i++)
                {
                    cout << crates9.at(i);
                } cout << endl;
                
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    tempCrates.push_back(crates9.back());
                    crates9.pop_back();
                }

                //MIRROR TEMP CRATES
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    tempCrates2.push_back(tempCrates.back());
                    //tempCrates.pop_back();
                }

                // print tempCrates
                cout << "tempCrates eindpunt : ";
                for(int i=0; i < tempCrates.size(); i++)
                {
                    cout << tempCrates.at(i);
                } cout << endl;

                // print crates9
                cout << "crates9 eindpunt : ";
                for(int i=0; i < crates9.size(); i++)
                {
                    cout << crates9.at(i);
                } cout << endl << "- - - - - - - - - - - - - -"<< endl;
                break;  
            default:
                cout << "A problem accured when picking up the crates..." << endl;
                break;
            }

            // MANUAL CHANGE!!!!!!!
            //FOR PART ONE  ==> PUSH TEMPCRATES
            //FOR PART TWO ==> PUSH TEMPCRATES2
            switch (iToCol)
            {
            case 1:
                //debug
                cout << "Fillin col1" << endl;
                // print col1
                cout << "crates1 before filling : ";
                for(int i=0; i < crates1.size(); i++)
                {
                    cout << crates1.at(i);
                } cout << endl;
                
                
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    crates1.push_back(tempCrates.back());
                    tempCrates.pop_back();
                }
                 // print tempCrates
                // cout << "tempCrates leeg : ";
                // for(int i=0; i < tempCrates.size(); i++)
                // {
                //     cout << tempCrates.at(i);
                // } cout << endl;

                // print crates1
                cout << "crates1 filled : ";
                for(int i=0; i < crates1.size(); i++)
                {
                    cout << crates1.at(i);
                } cout << endl << "- - - - - - - - - - - - - -"<< endl << "- - - - - - - - - - - - - -"<< endl;
                break;
            case 2:
                //debug
                cout << "Fillin col2" << endl;
                // print col2
                cout << "crates2 before filling : ";
                for(int i=0; i < crates2.size(); i++)
                {
                    cout << crates2.at(i);
                } cout << endl;
                
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    crates2.push_back(tempCrates.back());
                    tempCrates.pop_back();
                }
                 // print tempCrates
                // cout << "tempCrates leeg : ";
                // for(int i=0; i < tempCrates.size(); i++)
                // {
                //     cout << tempCrates.at(i);
                // } cout << endl;

                // print crates2
                cout << "crates2 filled : ";
                for(int i=0; i < crates2.size(); i++)
                {
                    cout << crates2.at(i);
                } cout << endl << "- - - - - - - - - - - - - -"<< endl << "- - - - - - - - - - - - - -"<< endl;
                break;
            case 3:
                //debug
                cout << "Fillin col3" << endl;
                // print col3
                cout << "crates3 before filling : ";
                for(int i=0; i < crates3.size(); i++)
                {
                    cout << crates3.at(i);
                } cout << endl;
                
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    crates3.push_back(tempCrates.back());
                    tempCrates.pop_back();
                }
                 // print tempCrates
                // cout << "tempCrates leeg : ";
                // for(int i=0; i < tempCrates.size(); i++)
                // {
                //     cout << tempCrates.at(i);
                // } cout << endl;

                // print crates3
                cout << "crates3 filled : ";
                for(int i=0; i < crates3.size(); i++)
                {
                    cout << crates3.at(i);
                } cout << endl << "- - - - - - - - - - - - - -"<< endl << "- - - - - - - - - - - - - -"<< endl;
                break;
            case 4:
                //debug
                cout << "Fillin col4" << endl;
                // print col4
                cout << "crates4 before filling : ";
                for(int i=0; i < crates4.size(); i++)
                {
                    cout << crates4.at(i);
                } cout << endl;
                
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    crates4.push_back(tempCrates.back());
                    tempCrates.pop_back();
                }
                 // print tempCrates
                // cout << "tempCrates leeg : ";
                // for(int i=0; i < tempCrates.size(); i++)
                // {
                //     cout << tempCrates.at(i);
                // } cout << endl;

                // print crates4
                cout << "crates4 filled : ";
                for(int i=0; i < crates4.size(); i++)
                {
                    cout << crates4.at(i);
                } cout << endl << "- - - - - - - - - - - - - -"<< endl << "- - - - - - - - - - - - - -"<< endl;
                break;
            case 5:
                //debug
                cout << "Fillin col5" << endl;
                // print col5
                cout << "crates5 before filling : ";
                for(int i=0; i < crates5.size(); i++)
                {
                    cout << crates5.at(i);
                } cout << endl;
                
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    crates5.push_back(tempCrates.back());
                    tempCrates.pop_back();
                }
                 // print tempCrates
                // cout << "tempCrates leeg : ";
                // for(int i=0; i < tempCrates.size(); i++)
                // {
                //     cout << tempCrates.at(i);
                // } cout << endl;

                // print crates5
                cout << "crates5 filled : ";
                for(int i=0; i < crates5.size(); i++)
                {
                    cout << crates5.at(i);
                } cout << endl << "- - - - - - - - - - - - - -"<< endl << "- - - - - - - - - - - - - -"<< endl;
                break;
            case 6:
                //debug
                cout << "Fillin col6" << endl;
                // print col6
                cout << "crates6 before filling : ";
                for(int i=0; i < crates6.size(); i++)
                {
                    cout << crates6.at(i);
                } cout << endl;
                
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    crates6.push_back(tempCrates.back());
                    tempCrates.pop_back();
                }
                 // print tempCrates
                // cout << "tempCrates leeg : ";
                // for(int i=0; i < tempCrates.size(); i++)
                // {
                //     cout << tempCrates.at(i);
                // } cout << endl;

                // print crate6
                cout << "crates6 filled : ";
                for(int i=0; i < crates6.size(); i++)
                {
                    cout << crates6.at(i);
                } cout << endl << "- - - - - - - - - - - - - -"<< endl << "- - - - - - - - - - - - - -"<< endl;
                break;
            case 7:
                //debug
                cout << "Fillin col7" << endl;
                // print col7
                cout << "crates7 before filling : ";
                for(int i=0; i < crates7.size(); i++)
                {
                    cout << crates7.at(i);
                } cout << endl;
                
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    crates7.push_back(tempCrates.back());
                    tempCrates.pop_back();
                }
                 // print tempCrates
                // cout << "tempCrates leeg : ";
                // for(int i=0; i < tempCrates.size(); i++)
                // {
                //     cout << tempCrates.at(i);
                // } cout << endl;

                // print crates7
                cout << "crates7 filled : ";
                for(int i=0; i < crates7.size(); i++)
                {
                    cout << crates7.at(i);
                } cout << endl << "- - - - - - - - - - - - - -"<< endl << "- - - - - - - - - - - - - -"<< endl;
                break;
            case 8:
                //debug
                cout << "Fillin col8" << endl;
                // print col8
                cout << "crates8 before filling : ";
                for(int i=0; i < crates8.size(); i++)
                {
                    cout << crates8.at(i);
                } cout << endl;
                
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    crates8.push_back(tempCrates.back());
                    tempCrates.pop_back();
                }
                 // print tempCrates
                // cout << "tempCrates leeg : ";
                // for(int i=0; i < tempCrates.size(); i++)
                // {
                //     cout << tempCrates.at(i);
                // } cout << endl;

                // print crates8
                cout << "crates8 filled : ";
                for(int i=0; i < crates8.size(); i++)
                {
                    cout << crates8.at(i);
                } cout << endl << "- - - - - - - - - - - - - -"<< endl << "- - - - - - - - - - - - - -"<< endl;
                break;   
            case 9:
                //debug
                cout << "Fillin col9" << endl;
                // print col9
                cout << "crates1 before filling : ";
                for(int i=0; i < crates9.size(); i++)
                {
                    cout << crates9.at(i);
                } cout << endl;
                
                for (size_t i = 0; i < iCratesQ; i++)
                {
                    crates9.push_back(tempCrates.back());
                    tempCrates.pop_back();
                }
                 // print tempCrates
                // cout << "tempCrates leeg : ";
                // for(int i=0; i < tempCrates.size(); i++)
                // {
                //     cout << tempCrates.at(i);
                // } cout << endl;

                // print crates9
                cout << "crates9 filled : ";
                for(int i=0; i < crates9.size(); i++)
                {
                    cout << crates9.at(i);
                } cout << endl << "- - - - - - - - - - - - - -"<< endl << "- - - - - - - - - - - - - -"<< endl;
                break;  
            default:
                cout << "A problem accured when placing the crates..." << endl;
                break;
            }
            
        }
        
        myfile.close();
    }
    else
    {
        cout << "Can not open file";
    }

    cout << "crates1 startpunt : ";
                for(int i=0; i < crates1.size(); i++)
                {
                    cout << crates1.at(i);
                } cout << endl;
    cout << "crates2 startpunt : ";
                for(int i=0; i < crates2.size(); i++)
                {
                    cout << crates2.at(i);
                } cout << endl;
    cout << "crates3 startpunt : ";
                for(int i=0; i < crates3.size(); i++)
                {
                    cout << crates3.at(i);
                } cout << endl;
    cout << "crates4 startpunt : ";
                for(int i=0; i < crates4.size(); i++)
                {
                    cout << crates4.at(i);
                } cout << endl;
    cout << "crates5 startpunt : ";
                for(int i=0; i < crates5.size(); i++)
                {
                    cout << crates5.at(i);
                } cout << endl;
    cout << "crates6 startpunt : ";
                for(int i=0; i < crates6.size(); i++)
                {
                    cout << crates6.at(i);
                } cout << endl;
    cout << "crates7 startpunt : ";
                for(int i=0; i < crates7.size(); i++)
                {
                    cout << crates7.at(i);
                } cout << endl;
    cout << "crates8 startpunt : ";
                for(int i=0; i < crates8.size(); i++)
                {
                    cout << crates8.at(i);
                } cout << endl;
    cout << "crates9 startpunt : ";
                for(int i=0; i < crates9.size(); i++)
                {
                    cout << crates9.at(i);
                } cout << endl;


    


    //cout << "Priority total is : " << priorTot << endl;

    return 0;
}

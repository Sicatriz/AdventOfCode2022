#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    string line;
    ifstream myfile("InputDay6.txt");

	string s1, s2;
    //vector <string> s1 = {};
    //vector <string> s2 = {};
    int stringLength;
    string found1, found2;
    vector <int> bingo = {};
    int roundBingo, hit, round;
    //int counter = 0;
    string mainS("qfmfhmhjmjggwbbvdvwvlvrrtsrsccwsslvlffjrrtprprjjvmmclmmghhddpvddclctcqtccgbgdbgdgsdgghqhtqtvvptvppwrwprpvrrrhpphththvhhrnnhnlnslnlhnhnhgnhnpnqqsmsgsllprlprrlzzqzffmzztctbtnbtthlttqvqcqmcmpcpbbczzbqbgghcghchhvwvllfrfnnbssfzsszpsplpglpprnpnfnbnhbnbtbzzvbvpbbhjjlzzbtbvbppczppbwppqwwnwlwccglgvgrgmmdwmwrmrppnfnhhhhqthqthqqrhrshhhqbhqqjgjvjllzvzbzhbbpttjsszvzqqtzzmbmddpldpdcdnccrmcrmmpwprplrrqssvddmpdmmwfwwlrljrrdsssmhsspnpffjggqllnzlnlhnnmddfrfpfbbvssjsrrznngcghgchcmhmrrrtzztjzzhchssslsmlmvvpwpqpjqjdddmsdmmtgtmgtglttfbbgrrcprrqffmmjnjttcmczzgbzggthhsttpggrmmgwwnpnqnqvnqvqppmlpmlpmpjpljljmmtpptfppfrppfdpfdppddmdttgzgzzdbzdzhzhnnsqssvmvbbpjjzwwvnwvvzmvzmzpmpttvrvccqddpgdppgmmthmthtggsfsbbvfbvfvhfvhvvpwpddqrqgqhghnnfmfbbwrbrgbgbvgbbdttffrddqbqpqzzmttlhhsqhsqhsqhhlplttpnpsstpthhpfhpfplprrgfrgffjppghgppghgdggjmmcgmccjvvsrvsrrwgrgmrrngrgttvbtbltthrthrttmfffjpfpssncnrngrrltrltlggjgcgllrzzllhwwjwrwgrgsrgrhrphrhhqwqsqmqlmqlmqmqrmrnnwnhwnhwhzwzjwwgbghhsjspszsznzfztfzfpzzlczztctsstctqtfqfqcfqqjrjccttmqqfpfdfnfwnffqbfbblpbpfpcfcwfccblbwwmqwqrrgprpccngnhghpppwmpplcppfrfjjgmmbzbhbcbzzgdgsdsvvqllzlppnfnlnlslsljlppcscqqfjjjwzwppfgfjjsvvsggjbjljpjpzjzrzjrzzfnfpnfpnfpnfnsnggmpggdllpmmrhhdqqppttgqqcsqsjsbjsjrsrqrbqqmbmcbmcbmbfmfvfqqdbdppmrprnrggmjjhnhbhdhbbfcbbcjjdhhwjwmjmssjswscswcwzccbgbqqmqgmmsdsjsbsdbsddvttjpppcqpcqcgqqslqsssczszrzvvrtvvjppswwhnnwlwtwhhwwzfwwpfpddlvvnvnnvlnntjtqjqjzzjttvvbqbhqbhbbbwnwhnwnppdbpdpvddrqdqjjlvlqqdfdhdjhdjdcjcrcjjggfmfvvfllvfvgglzllmhmzmdddfwddqjjqjfqfcfrrstrssptsstllrflfwwgswslwlbwbwjjvhvfvhfhffhsslwsllbnbblccbwwjqwqqdllrdrnrnffcbbqqpnqqdmdndtntvvrjvvsvmvgvnnmjlwgnjcwljgwnrwpqlztwrpmpgqtwlhrcwsrrhqhjhznrtpqfdnzbfqrzwslptdbdcnqvcllpjsfdvmzqwvzbpnmfcfcjnbmhtwhttjgtnczwctpdthhwmzvzrrgsnmbflgmszgsbvghbzgcmcmszgsbfmlmpbdspqlftmqrcjtmvgcrzznlfwjcbmddplsqrfflqnqfsldwhnncczdmfrrrsbjjqsdzrsgbdbwjbslfcqglsqfddhdsrcdrgqfqthgmfjvnfdfgdncfzpvqcpscnpmfgvqbfwszwzgmqvmcrdrwplfshdgqrchmccpqfznbmfvlhdpctlqgjslrwhjfjlmqfblgjrdlnzdtwlpwhnrhrcrpfwqpmjlgrdbgpbljntmbqlblqqqpgrnjtmjqvjpzvsqdpgtchmmwbhtmgcjqdplrtptqcvdjjpqdzsrcjhcwvdcghlwrdhtdfctmqfcjcqhcvvbzgsvlggcrdgqbtznwwmnbgsfrjprqgcmlswftlwpqqqvshdprldrsghmhrqvmqmvglbvzpvtrjbhcvhqmvdtcvsllznqzjmhpnlbhmlzthbwwhhvdtcdfdcdzhnbsrnqqjvzzsvfjhbsdlsbdlqjnlpnhfcjtdppzmphghltztzcdvzwbftbvwhvgmrllqfzrpbltptdtjjqtfwjfmczzgdvclqbsbftgtlhnhrrvbpvdltstdnhqvpvtjhmghptvsfnlspslmfsftzdrwljrgblgmcbmlszmhnlfdtmsrnjqwrfmsnfgpcqgzmlwppffrmbvhnlstfpgzwwmwffrqpdfvrspbczbrclwljgzfhpsrwwpdndfgjwbjtftnjrqvmtmzvjmtlmjhhptmgjvfrlzncmhnmpfcwpjbcpftqfzvmtldqhjpwvzrdnvnwnscgzslvfgjjpcvjshctmmpjbgdwtdjtlmztsbmwrjtmltnlsmwmjnpcgpprnfwcqdldbbqbfmdnvprzqwvntgzdbrsgdpgdjbcblmqpdphmwgvbgwlpblflphvjgjsjfshbjdftcqmsdnrzbgngcvddddjvrndhdcscqqswrnvslfrlvvncqjhzlbhdqhtrlvdsvjsbglhfzfphmzfmzqdvjqdwhjgfdwmzsdmbjzstjddfmfqjhmbdgdbvvhbqgstrzpvhpthhbwljczzrmvgsmbqvzdrmhvvjlmphzjfbmfqvwhtnrlfnfmqnnjvnwjswzshwgljmfjhrwbwgtpdqnqgqdzbssbjfbsgwmfzpfjdrtrnmsdffhnbgnrdlbjzfjrvtjgjgcvvzgllljrcrshczvpfqgnwnjjnhbwgvzwrptrgrdgtczjfzzndsqhqpmtqsvmcncfszsjllzzsjjmwgplpjwlhnhgbhctrttgzqbbcflzqvqgmhgdtlvfpbtncbwsjgnzpmbspcqzzwfplfprqlnbctwwrzpjtpfrmnpvnjrjppqrzjrcmggfmhrstzhmsjllcgjhwrbhcrvdvgmvjqqgmczlmhstmthzphlvrrvqmhjzzfzbhphstflhfjdlwqvzlsszctrdchwjssdfjjfzszlqdtwwthfjdqprpfftgdrpdhhcsdcpjbhdrgzwbgjspmffcmgcjnpmwsqwsvpfwzddlcpvlgpvctrssghndhvdmmmgndcjvhdjwttqphsjpgfbsdczmplfpwpzzjlbhrjptmsshfttnmhzdzmjctbltqjmfnpndqgwjzwdwrgdjdmcbtvjqwjngrtbfrwcttpdvcqtwqndznbchjqcqttrhjpjgwdbwzvwgmdsdfmpdwctvntvnsdmfnznfrsdcllpgpnstrrfrwrfrwnhbclnqhltrcdwqwzzldgbbtzmcvnbzmwcmntqpbscqrpzcjnbgbrzpcrcmdmdfsfgdpmgvwccqjrltrgfvjdgbhjndnmtnjjhzvghscdhnhflwplrqdzrnlnsvrtrdnphgqwjwqcjvtfdfshqdwbsvgrqbdlncjmhdmrlsvdnrhztznczzllsvpqlvwgqjvgvvwgrjcvtjvhrsgbdgvlmmtjbwrnftzphnqslcpggztgsdbjsbdtzwprsbcljpbwjhcrffnvtplcdlgmbtcgbllbdmwhwcllbqstnqqvdbcjrglwbmcfqvlvtpqncbspbphflvvrrsprlhqspfmqrsdtdlftsfzrqwdfffbhccvpfdtlptqzllfsbbrfnhjgwhlfcwmmjgjndcwfhdzvvvrzmwllthwsdmbbsrfrzmqnlnqnjnfpgfvrhsbzhjftmvzrzpqpmlcbnwmbssmvssmmqpvwnsjppdhmnhpntlvqmjnbmtvjnmtbpbzrcfhjfhvztnwrmthbswwthjddjmsdnjmzhhpjdllgscdrgmhfpljfzsmszqsqqgrznddhfmstzdcqpgztgwwqpvrghtmqlgdddlqqwwwtnpldbqtf");
    

    for (size_t i = 0; i < 4000; i++)
    {
        s1 = mainS.substr(i, 14);
        //s2 = mainS.substr(i+1,13);
        //cout << s1[0] << endl;
        //cout << s2[0] << endl;
        round++;
        //counter = 0;

        for (size_t j = 0; j < 14; j++)
        {
//system("pause");

            for (size_t k = j+1; k < 14; k++)
            {

            found1 = s1[j];
           //cout << "found 1 is " << found1 << endl;
            found2 = s1[k];
            //cout << "found 2 is " << found2 << endl;

                if (found1 == found2)
                {
                   // cout << "no match" << endl;
                    //counter++;
                    break;
                }
            }

            if (found1 == found2)
            {
                // cout << "no match" << endl;
                //counter++;
                break;
            }
            
        }
        if (found1 != found2)
        {
            roundBingo = round;
            bingo.push_back(roundBingo);
            
        }       

    }
    
    cout << "Bingo's : ";
                for(int i=0; i < bingo.size(); i++)
                {
                    cout << bingo.at(i) << " ";
                } cout << endl;

    cout << "first BINGO is " << bingo.at(0)+13 << endl;


    return 0;
}

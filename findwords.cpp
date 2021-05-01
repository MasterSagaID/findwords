#include <iostream>
#include <cstring>

using namespace std;
const int cols = 16, rows = 15;
int hasil;

 char words[rows][cols] = {"tgbwwinterwsesn",
                                "aaunttmmhfoodnb",
                                "jlwcqldzmpmvdmr",
                                "asagmquwvvbsohi",
                                "bwplotanadtpgnc",
                                "rewngodjcpnatnk",
                                "eeotwosbqharrsa",
                                "azcgeswewnaknpb",
                                "dinnerqodlwdcar",
                                "onopkwmparktzcc",
                                "qbfrogmamwpweey",
                                "lqzqnnmrzjjsclg",
                                "mosgzczetdbooto",
                                "pdcrzmsngrdnrpz",
                                "ohnkzwaterjgtra"};

char *getWordVertical(int);
char *reverse(char *);
bool searchVertical(char *);
bool searchHorizontal(char *);


int main()
{
    char word[16];
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin.getline(word,16,'\n');
        if (searchVertical(word) || searchHorizontal(word))
            cout << "Ada\n";
        else 
            cout << "Tidak Ada\n";
    }
    return 0;
}

char *getWordVertical(int kolom){
    char wordvertical[cols];

    for (int i = 0; i < cols; ++i){
        wordvertical[i] = words[i][kolom];
    }

    char *strvert = wordvertical

    return strvert;
}

char *reverse(char *){

}

bool searchVertical(char *str){
    char* carikata = strstr(getWordVertical(kolom))

    for (int i = 0; i < cols; ++i)
    {
        if (str == carikata[i])
        {
            return true;
            break;
        }
        else{
            continue;
        }
        return false;
    }
}

bool searchHorizontal(char *str){

}
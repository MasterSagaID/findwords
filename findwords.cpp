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

char *getWordVertical(int kol);
// char *reverse(char *str);
bool searchH(char *str);
bool searchV(char *str);

int main(){
    char word[7];
    int n;
    cin >> n;
    cin.ignore(1,'\n');
    for(int i = 0; i < n; i++){
        cin.getline(word,16,'\n');
        if(searchV(word) || searchH(word)){
            cout << "Ada\n";
        }
        else{
            cout << "Tidak Ada\n";
        }
    }
    return 0;
}

char *getWordVertical(int col){
    char vword[rows];
    for (int i = 0; i < col; ++i){
        vword[col] = words[i][col];
    }
    char *ptrword = vword;
    return ptrword;
}

// char *reverse(char *str){}

bool searchH(char *str){
    for (int i = 0; i < rows; i++){
        char *ptrwordH = words[i];
        char *ptr = strstr(ptrwordH, str);
        if(ptr != 0){
            return true;
        }
        else{
            continue;
        }   
    }
    return false;
}

bool searchV(char *str){
    char *ptrwordV;
    for(int i = 0; i < rows; i++){
        ptrwordV = getWordVertical(i);
        char *ptr = strstr(ptrwordV, str);
        if(ptr != 0){
            return true;
        }
        else{
            continue;
        }
    }
    return false;
}
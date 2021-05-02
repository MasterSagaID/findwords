#include <iostream>
#include <cstring>
using namespace std;

const int cols = 16, rows = 15;
int hasil;

 char words[rows][cols] =      {"tgbwwinterwsesn",
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

char *getWordVertical(int col);
char *getWordHorizontal(int col);
char *reverse(char *str);
bool searchH(char *str);
bool searchV(char *str);

int main(){
    char word[16];
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
    static char vword[rows];
    for (int i = 0; i < rows; i++){
        vword[i] = words[i][col];
    }
    return vword;
}

char *reverse(char *str){
    static char balik[16];
    int k = 0;
    for(int i = strlen(str)-1; i >= 0; i--){
        balik[k] = str[i];
        k++;
    }
    return balik;
}


bool searchV(char *str){
    for(int i = 0; i < cols; i++){
        char *ptrwordV = getWordVertical(i);
        char *ptr = strstr(ptrwordV, str);
        char *ptrbalikV = strstr(reverse(ptrwordV), str);
        if(ptr){
            return true;
        }
        else if(ptrbalikV){
            return true;
        }
        else{
            continue;
        }
    }
    return false;
}

char *getWordHorizontal(int col){
    static char hword[rows];
    for (int i = 0; i < rows; i++){
        hword[i] = words[col][i];
    }
    return hword;
}

bool searchH(char *str){
    for (int i = 0; i < rows; i++){
        char *ptrwordH = getWordHorizontal(i);
        char *ptr = strstr(ptrwordH, str);
        char *ptrbalikH = strstr(reverse(ptrwordH), str);
        if(ptr != 0){
            return true;
        }
        else if(ptrbalikH != 0){
            return true;
        }
        else{
            continue;
        }   
    }
    return false;
}

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

char *getWordVertical(int col);
// char *reverse(char *str);
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
    // for(int j = 0; j < cols; j++){
    //      char *wordvertical = getWordVertical(j);
    //      cout << *wordvertical << endl;
    //  }

    return 0;
}

char *getWordVertical(int col){
    static char vword[rows];
    for (int i = 0; i < rows; i++){
        vword[i] = words[i][col];
    }
    
    return vword;
}

// char *reverse(char *str){

// }

bool searchV(char *str){
    for(int i = 0; i < cols; i++){
        char *ptrwordV = getWordVertical(i);
        char *ptr = strstr(ptrwordV, str);
        if(ptr){
            return true;
        }
        else{
            continue;
        }
    }
    return false;
}

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
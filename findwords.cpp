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

char *getWordVertical(int kolom);
//char *reverse(char *);
bool searchVertical(char *kata);
bool searchHorizontal(char *kata);


int main()
{
    char word[16];
    int n;
    cin>>n;
    cin.get();
    for (int i=0;i<n;i++){
        cin.getline(word,16,'\n');
        if (searchHorizontal(word)) || (searchVertical(word)){
            cout << "Ada\n";
        }
        else
            cout << "Tidak Ada\n";
    }
    return 0;
}

bool searchHorizontal(char *kata){
     char *ptrHorizontal[rows];

     for(int i = 0 ; i < rows ; i++){
        *ptrHorizontal = words[i];
        if(strstr(*ptrHorizontal,kata)){
            return true;
            break;
            }
        else if(i == rows){
            return false;
            }
    }
}

char *getWordVertical(int kolom){
        char kolom[16];
	for(int i=0;i<rows;i++){
		kolom[i] = * ( * (words+i)+kolom);
	}
}

bool searchVertical(char *kata){
    for(int i = 0; i < cols; i++){
        char *ptrwordVertical = getWordVertical(i);
        char *pointer = strstr(ptrwordVertical, kata);
        if(pointer){
            return true;
            break;
        }
        else{
            return false;
          }
    }
}

//char *reverse(char *)


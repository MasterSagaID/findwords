#include <iostream>
#include <cstring>

using namespace std;

const int cols = 16, rows = 15;

 char words[rows][cols] = {     "tgbwwinterwsesn",
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

char kata_transpor[cols][rows];
// char *getWordVertical(int);
char reverse(char *kata_input);
bool searchVertical(char *kata_input);
bool searchHorizontal(char *kata_input);


int main()
{
    char word[16];
    int n;
    cin>>n;
    cin.get();
    for (int i=0;i<n;i++){
        cin.getline(word,16,'\n');
        if ( searchHorizontal(word) || searchHorizontal(word))
            cout << "Ada\n";
        else 
            cout << "Tidak Ada\n";
    }
    return 0;
}

bool searchHorizontal(char *kata_input){
     char *ptrWords[rows];

     for(int i = 0 ; i < rows ; i ++){
        *ptrWords = words[i];
        if(strstr(*ptrWords,kata_input)){
            return true;
            break;
            }
        else if(i==rows-1){
                return false;
            }
    }
return false;
}


bool searchVertical(char *kata_input){
  
    for(int i = 0 ; i < rows; i ++){
        for(int j = 0 ; j<cols ; j++ ){
            kata_transpor [j][i] = words[i][j];
        }
    }
    for(int i = 0 ; i < rows; i ++){
        for(int j = 0 ; j< rows ; j++ ){
            kata_transpor [i][j] ;
        }
    }
    
    for(int i = 0 ; i < rows ; i ++){
        char *ptrWords[i];
        if(strstr(*ptrWords,kata_input)){
            return true;
                break;
            }
            else if(i == rows-1){
                return false;
            }
    }
return false;

}
// char *getWordVertical(){
//     char Transpor_kata [cols][rows];

// }


// char reverse(char *kata_input){
//     for(int i = 0  ; i < rows; i++){
//         for(int j = cols-1 ; j >=0;j--){
//             words[i][j];
//         }
//     }
//     char *ptrWords[rows];
//      for(int i = 0 ; i < rows ; i ++){
//         *ptrWords = words[i];
//         if(strstr(*ptrWords,kata_input)){
//             return true;
//             break;
//             }
//         else if(i == rows-1){
//             return false;
//             }
//     }
// return false;

// }


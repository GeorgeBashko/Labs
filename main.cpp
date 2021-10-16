#include <iostream>
#include <fstream>
using namespace std;
int main() {
/*ofstream fout;
fout.open("myFile.txt");
fout<<"My First file";
fout.close();*/
ifstream fin;
int filesize = 0;
int i = 0;
int word_count = 1;
fin.open("myFile.txt");
if(!fin.is_open()) {
    cout << "Error";
}
else
{
    char str[2000];
    cout<<"File was opened and changed!!!"<<endl;
    while(!fin.eof()){
        filesize++;
        fin.getline(str,2000);
        while(str[i] != 0){
            if(str[i] ==' '){
                while(str[i] == ' '){
                    i++;
                }
                word_count++;
            }
            i++;
        }
       if(word_count==1 || word_count==2){
                ofstream fout1;
                fout1.open("Strings_with_2_or_1_words.txt",ios::app);
                fout1<<str<<endl;
                fout1.close();
            }
        if(word_count>=3 && word_count<=6){
            ofstream fout2;
            fout2.open("Strings_with_3_to_6_words.txt",ios::app);
            fout2<<str<<endl;
            fout2.close();
        }
        i=0;
        word_count=1;
    }
}
fin.close();
    return 0;
}

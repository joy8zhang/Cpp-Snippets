#include <iostream> // cout and other std functions
#include <vector>
#include <string>
#include <fstream> // IO capabilities
#include <zconf.h>

using namespace std; // avoid typing std all times
int main() {
    /** basics and variables*/
//    cout << "Hello, World!" << endl;
//
//    const double PI = 3.1415;
//    bool isHappy = false;
//    float favNum = 4.2562351;
//
//    cout << "Favorite Number " << favNum << endl; // endl terminates line
//    cout << "Size of float " << sizeof(favNum) << endl; // sizeOf returns size in bytes
//
//    int largestInt = 2147483647;
//    cout << "Largest int " << largestInt << endl;
//
//    int largestInt1 = 2147483648;
//    cout << "Largest int " << largestInt1 << endl;
//
//    cout << "4 / 5 = " << 4 / 5 << endl;
//    cout << "4 / 5 = " << (float) 4 / 5 << endl;

    /** user input*/

//    string numberGuessed;
//    int intNumberGuessed = 0;
//
//    do {
//        cout << " Guess btwn 1 and 10";
//        getline(cin, numberGuessed); // cin is standard input stream
//        intNumberGuessed = stoi(numberGuessed);
//
//        cout << intNumberGuessed << endl;
//    } while(intNumberGuessed != 4);
//
//    cout << "you win" << endl;

    /** File IO*/ 
//    string steveQuote = "blah blah steve";
//    ofstream writer("stevequote.txt"); // output file stream
//
//    if(! writer){
//        cout << "Error opening file" << endl;
//        return -1;
//    } else {
//        writer << steveQuote << endl;
//        writer.close();
//    }
//
//    ofstream writer2("stevequote.txt", ios::app);
//
//    if(! writer2){
//        cout << "Error opening file" << endl;
//        return -1;
//    } else {
//        writer2 << "\n -Steve Something" << endl;
//        writer2.close();
//    }
//
//    char letter;
//    ifstream reader("stevequote.txt"); // input file stream
//    if(! reader) {
//        cout << "Error opening file" << endl;
//        return -1;
//    } else {
//        for(int i = 0; ! reader.eof(); i++) { // .eof is end of file
//            reader.get(letter);
//            cout << letter;
//        }
//
//        cout << endl;
//        reader.close();
//    }


    return 0;
}
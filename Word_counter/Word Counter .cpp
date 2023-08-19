#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int countWords(const string& text) {
    int wordCount = 0;
    stringstream ss(text);
    string word;

    while (ss >> word) {
        wordCount++;
    }

    return wordCount;
}

int main() {


    cout<<"\t\t\t\t\t\t\t\t|||Word Counter|||"<<endl<<endl;
    string fileName;
    int t=1;

   h1:do{
    cout << "Enter the name of the text file: ";
    cin >> fileName;

    ifstream inputFile(fileName);
    if (!inputFile) {
        cout << "Error: Unable to open the file. Please check the file name and try again." << endl;


    cout<<"\nEnter 1 to continue\nEnter 0 to terminate"<<endl;
    cin>>t;
    if(t==0)
        return 1;
        else
       goto h1;

    }

    string content;
    stringstream buffer;
    buffer << inputFile.rdbuf();
    content = buffer.str();

    inputFile.close();

    int wordCount = countWords(content);

   h2: cout << "Total word count in the file: " << wordCount << endl;
    cout<<"\nEnter 1 to continue\nEnter 0 to terminate"<<endl;
    cin>>t;
    if(t!=0 && t!=1){
        cout<<"ENTER CORRECT VALUE OF T"<<endl;
    goto h2;}
   }while(t);
    return 0;
}

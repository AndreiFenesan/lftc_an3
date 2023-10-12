#include <iostream>
#include <unordered_map>
#include <fstream>
#include <vector>
#include <regex>

#define KEYWORD "KEYWORD"
#define TYPE "TYPE"
#define OPERATOR "OPERATOR"
#define SEPARATOR "SEPARATOR"
using namespace std;

std::string trimSpaces(const string &str) {
    size_t stringLength = str.length();
    size_t start = 0;
    size_t end = stringLength - 1;

    while (start < stringLength && isspace(str[start])) {
        start++;
    }
    while (isspace(str[end])) {
        end--;
    }
    return str.substr(start, end);
}

int main() {
    unordered_map<string, string> static_atoms = {
            {"int",   TYPE},
            {"char",  TYPE},
            {"while", KEYWORD},
            {"if",    KEYWORD},
            {"main",  KEYWORD},
            {";",     SEPARATOR},
            {",",     SEPARATOR},
            {"{",     SEPARATOR},
            {"}",     SEPARATOR},
            {"(",     SEPARATOR},
            {")",     SEPARATOR},
            {"=",     OPERATOR},
            {"+",     OPERATOR},
            {"-",     OPERATOR},
            {"*",     OPERATOR},
            {"/",     OPERATOR},
            {"&&",    OPERATOR},
            {"||",    OPERATOR},
            {"<",     OPERATOR},
            {"<=",    OPERATOR},
            {">",     OPERATOR},
            {">=",    OPERATOR},
            {"==",    OPERATOR},
            {"!=",    OPERATOR},
    };
    const string constantNumberRegex = "[1-9][0-9]{0,14}";
    const string variableRegex = "[a-zA-Z_][a-zA-Z0-9_]*";

    ifstream sourceFile = ifstream("/home/andrei/Desktop/an3_sem1/lftc/lab2/atomic_lexic/a.txt");
    vector<string> lexicalAtoms;

    if (!sourceFile.is_open()) {
        cout << "Invalid file";
        return 1;
    }
    regex reg = regex(" ");
    string line;
    while (getline(sourceFile, line)) {
        stringstream ss(trimSpaces(line));
        string token;
        while (getline(ss, token, ' ')) {
            cout << token << endl;
        }
//        cout<<line<<endl;
    }


    return 0;
}

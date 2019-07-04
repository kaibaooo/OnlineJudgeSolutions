#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int main() {
    char stdkb[] = { 
        '3','e','d','c','4',
        'r','f','v','5','t',
        'g','b','6','y','h',
        'n','7','u','j','m',
        '8','i','k',',','9',/**/
        'o','l','.','0','p',
        ';','/','-','[','=',
        ']','\''};
    char terrikb[] = { 
        '1','q','a','z','2',
        'w','s','x','3','e',
        'd','c','4','r','f',
        'v','5','t','g','b',
        '6','y','h','n','7',/**/
        'u','j','m','8','i',
        'k',',','9','o','0',
        'p','l'};
    string str;
    
    while (getline(cin, str)) {
        if (cin.eof()) break;
        for (int i = 0; i < str.length(); i++) {
            if (str.at(i) == ' ') {
                printf(" ");
                continue;
            }

            if (str.at(i) >= 'A' && str.at(i) <= 'Z') {
                for (int j = 0; j < strlen(stdkb); j++) {
                    if (str.at(i) - 'A' + 'a' == stdkb[j]) {
                        printf("%c", terrikb[j]);
                        break;
                    }
                }
            }
            else {
                for (int j = 0; j < strlen(stdkb); j++) {
                    if (str.at(i) == stdkb[j]) {
                        printf("%c", terrikb[j]);
                        break;
                    }
                }
            }
        }
        str.clear();
        printf("\n");
    }
    return 0;
}
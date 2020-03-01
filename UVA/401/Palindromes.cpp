#include<iostream>
#include<string>

using namespace std;

string before = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
string after  = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";

char exchange(char a){
    for(int i = 0;i<before.length();i++){
        if(before[i] == a){
            if(after[i] == ' '){
                return '.';
            }
            else{
                return after[i];
            }
        }
    }
}

int main(){
    string input;
    
    while(cin >> input){
        bool isP = true;
        bool isM = true;
        int len = input.length();
        for(int i = 0;i<(len+1)/2;i++){
            if(input[i] != input[len-1-i]) isP = false;
            if(input[i] != exchange(input[len-1-i])) isM = false;
        }
        if(isP && isM) cout << input << " -- is a mirrored palindrome.\n\n";
        else if(isP) cout << input << " -- is a regular palindrome.\n\n";
        else if(isM) cout << input << " -- is a mirrored string.\n\n";
        else cout << input << " -- is not a palindrome.\n\n";
    }

    return 0;
}


#include<cstdio>
#include<utility>
#include<vector>
#include<iostream>
#include<string>
using namespace std;

int main() {
    vector<pair<char, int>> datas;
    //建表
    for (int i = 0; i < 26; i++) {
        datas.push_back(make_pair(0, 'A' + i));
    }
    int cases;
    int biggest = 0;
    scanf("%d", &cases);
    getchar();
    for (int i = 0; i < cases; i++) {
        string str;
        getline(cin, str);
        //算字數
        for (int j = 0; j < str.length(); j++) {
            if (str.at(j) >= 'A' && str.at(j) <= 'Z') {
                datas[str.at(j) - 'A'].first++;
                if (datas[str.at(j) - 'A'].first > biggest) 
                    biggest = datas[str.at(j) - 'A'].first;
            }
            else if (str.at(j) >= 'a' && str.at(j) <= 'z') {
                datas[str.at(j) - 'a'].first++;
                if (datas[str.at(j) - 'a'].first > biggest) 
                    biggest = datas[str.at(j) - 'a'].first;
            }
        }
    }
    int flag = 0;
    //輸出兼排序
    for (int idx = 0; idx < datas.size(); idx++) {
        for(int j = 0;j<26;j++){
            if (datas[j].first == biggest)
                printf("%c %d\n", datas[j].second, datas[j].first);
        }
        biggest--;
        if (biggest == 0) break;
    }
    system("pause");
    return 0;
}
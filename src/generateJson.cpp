#include <bits/stdc++.h>

using namespace std;

/*
 * Generates json with the champion name, and the url of your image
*/

int main() {

    freopen("../data/championsName","r",stdin);
    freopen("../data/champions.json","w",stdout);

    string champion;
    bool status = false;
    cout << "{\"champions\":\n\t[" << endl;
    while(getline(cin,champion)) {
        string championName = "";
        string championLink = "";
        if(status)
            cout << "," << endl;
        for(int i = 0;i < champion.size();i++) {
            if(champion[i] != ',')
                championName += champion[i];
            if(champion[i] != ',' && champion[i] != ' ' && champion[i] != 39)
                championLink += champion[i];
        }
        cout << "\t\t{\"champion\": \"" << championName << "\",\"url\":\"https://ddragon.leagueoflegends.com/cdn/9.3.1/img/champion/" << championLink <<  ".png\"}";
        status = true;
    }
    cout << "\n\t]\n}";
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
struct player
{
    string player_name;
    int player_score, player_number;
};

int main()
{
    player fplayer[12];
    int total_score = 0, max_score = 0, index = -1;
    for(int i = 0; i < 12; i++)
    {
        cout << "Details of player " << i + 1 << " : " << endl;
        cout << "Enter the name of the player: ";
        cin.ignore();
        getline(cin, fplayer[i].player_name);
        cout << "Enter the number of the player: ";
        cin >> fplayer[i].player_number;
        while(fplayer[i].player_number < 0)
        {
            cout << "please do not eneter any negative number: ";
            cin >> fplayer[i].player_number;
        } 
        cout << "Enter the score scored by the player: ";
        cin >> fplayer[i].player_score;
        while(fplayer[i].player_score < 0)
        {
            cout << "please do not enter any negative number: ";
            cin >> fplayer[i].player_score;
        }
        cout << endl;
    }
    max_score = fplayer[0].player_score;
    for(int i = 0; i < 12; i++)
    {
        if(max_score < fplayer[i].player_score)
        {
            max_score = fplayer[i].player_score;
            index = i;
        }
    }
    for(int i = 0; i < 12; i++)
    {
        total_score += fplayer[i].player_score;
    }
    cout << "----DETAILS OF THE PLAYER----" << endl;
    for(int i = 0; i < 12; i++)
    {
        cout << fplayer[i].player_name << " || " << fplayer[i].player_number << " || " << fplayer[i].player_score << endl;
    }
    cout << "The total score of the whole team is: " << total_score << endl;
    cout << "The highest score was done by " << fplayer[index].player_name << " with a score of " << fplayer[index].player_score << endl;
    return 0;
}
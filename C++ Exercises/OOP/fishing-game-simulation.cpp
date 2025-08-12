#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;   

class Die
{
    private:
        int sides; // Number of sides on the die
    public:
        // Constructor to initialize the die with a specific number of sides
        Die(int s) : sides(s) {
            srand(static_cast<unsigned int>(time(0))); // Seed for random number generation
        }

        // Function to roll the die and return a random value between 1 and sides
        int roll() {
            return (rand() % sides) + 1;
        }
};

int main()
{
    Die fishingdice(6);
    int points = 0;
    string to_continue;

    do 
    {
        cout << "Do you want to fish?(yes/no) ";
        cin >> to_continue;
        if(to_continue == "yes" || to_continue == "YES")
        {
            int dice = fishingdice.roll();
            switch ((dice))
            {
                case 1:
                    cout << "You caught a huge Fish! (+10 points)" << endl;
                    points+=10;
                    break;
                case 2:
                    cout << "You caught an old shoe (+0 points)" << endl;
                    points+=0;
                    break;
                case 3:
                    cout << "You caught a small Fish! (+2 points)" << endl;
                    points+=2;
                    break;
                case 4:
                    cout << "You caught a can (+1 points)" << endl;
                    points+=1;
                    break;
                case 5:
                    cout << "You caught a medium Fish! (+5 points)" << endl;
                    points+=5;
                    break;
                case 6:
                    cout << "You have hit the jackpot! (+20 points)" << endl;
                    points += 20;
                    break;
                default:
                    cout << "Thank you for playing the game, see you next time" << endl;
                    break;
            }
        }

    }while(to_continue == "yes" || to_continue == "YES");

    cout << "====== SUMMARY OF THE GAME =======" << endl;
    cout << "Total points: " << points << endl; 
    if(points >= 100)
    {
        cout << "🏆 Amazing, You're a fishing legend!" << endl;
    }
    else if(points >= 50)
    {
        cout << "🎉 Congratulations, You're a skilled fisherman." << endl;
    }
    else if(points > 0)
    {
        cout << "🙂 Not bad, keep practising!" << endl;
    }
    else
    {
        cout << "🐟 Better luck next time." << endl;
    }

    return 0;
}
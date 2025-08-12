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
        }

        // Function to roll the die and return a random value between 1 and sides
        int roll() {
            return (rand() % sides) + 1;
        }
};


int main()
{
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation
    Die dice(6);
    int player_points1 = 0, player_points2 = 0, player_points = 0, computer_points1 = 0, computer_points2 = 0, computer_points = 0;
    string to_continue;

    do 
    {
        computer_points1 += dice.roll(); // First roll for computer
        computer_points2 += dice.roll(); // Second roll for computer
        computer_points = (computer_points1 + computer_points2); // Total computer points
        if(player_points <= 21)
        {
            cout << "Do you want to roll the dice?(yes/no) ";
            cin >> to_continue;
            if(to_continue == "yes" || to_continue == "YES")
            {
                player_points1+=dice.roll(); // First roll for player
                player_points2+=dice.roll(); // Second roll for player
                player_points = (player_points1 + player_points2); // Total player points
                if(player_points > 21) // Player busted
                {
                    cout << "Busted." << endl;
                    break;
                }
            }

        }
    }while(to_continue == "yes" || to_continue == "YES");

    cout << "====== SUMMARY OF THE GAME =======" << endl;
    cout << "Total palyer points: " << player_points << endl; 
    cout << "Total computer points: " << computer_points << endl;
    if(player_points > 21) // Player busted
    {
        if(computer_points > 21) // Both busted
        {
            cout << "Both busted" << endl;
        }
        else // Computer won
        {
            cout << "Computer won! player lost" << endl;
        }
    }
    else if(computer_points > 21) // Computer busted
    {
        cout << "Computer busted. Player wins!" << endl;
    }
    else // Both players did not bust
    {
        if(player_points > computer_points) // Player won
        {
            cout << "Player won" << endl;
        }
        else if(computer_points > player_points) // Computer won
        {
            cout << "Computer won" << endl;
        }
        else 
        {
            cout << "Its a tie" << endl;
        }
    }

    return 0;
}
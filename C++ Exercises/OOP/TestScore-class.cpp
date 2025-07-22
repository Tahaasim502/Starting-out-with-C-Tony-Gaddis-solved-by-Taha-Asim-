#include<iostream>
using namespace std;

class TestScores
{
    private:
        int score1, score2, score3;
        double avg;
    public:
        TestScores()
        {
            score1 = 0;
            score2 = 0;
            score3 = 0;
            avg = 0.00;
        }
        TestScores(int s1, int s2, int s3)
        {
            setScore1(s1);
            setScore2(s2);
            setScore3(s3);
            setAvg();
        }
        void setScore1(int s1)
        {
            score1 = s1;
        }
        void setScore2(int s2)
        {
            score2 = s2;
        }
        void setScore3(int s3)
        {
            score3 = s3;
        }
        void setAvg()
        {
            avg = (score1 + score2 + score3) / 3.0;
        }
        int getScore1()
        {
            return score1;
        }
        int getScore2()
        {
            return score2;
        }
        int getScore3()
        {
            return score3;
        }
        double getAvg()
        {
            return avg;
        }
        void display()
        {
            int r1 = getScore1(), r2 = getScore2(), r3 = getScore3();
            double r4 = getAvg();
            cout << "Score 1: " << r1 << " " << "Score 2: " << r2 << " " << "Score 3: " << r3 << " " << "Average: " << r4 << endl;
        }
};

int main()
{
    TestScores t1;
    int s1, s2, s3;
    
    cout << "Enter the test score 1: ";
    cin >> s1;
    while(s1 < 0)
    {
        cout << "Invalid, re-enter(no negative numbers): ";
        cin >> s1;
    }
    
    cout << "Enter test score 2: ";
    cin >> s2;
    while(s2 < 0)
    {
        cout << "Invalid, re-enter(no negative numbers): ";
        cin >> s2;
    }
    
    cout << "Enter test score 3: ";
    cin >> s3;
    while(s3 < 0)
    {
        cout << "Invalid, re-enter(no negative numbers): ";
        cin >> s3;
    }
    
    t1.setScore1(s1), t1.setScore2(s2), t1.setScore3(s3);
    t1.setAvg();
    t1.display();
    return 0;
}
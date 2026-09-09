#include<iostream>
#include<limits>
using namespace std;

//Checks for win and loss
bool win(int t[3][3])
{
    for(int i = 0; i<=2; i++)
    {
        if(t[i][0] == t[i][1] && t[i][1] == t[i][2] && t[i][1] == 2)return true;
        if(t[i][0] == t[i][1] && t[i][1] == t[i][2] && t[i][1] == 3)return true;
        if(t[0][i] == t[1][i] && t[1][i] == t[2][i] && t[2][i] == 2)return true;
        if(t[0][i] == t[1][i] && t[1][i] == t[2][i] && t[2][i] == 3)return true;
    }
    if(t[1][1] == t[2][2] && t[2][2] == t[0][0] && t[2][2] == 2)return true;
    if(t[1][1] == t[2][2] && t[2][2] == t[0][0] && t[2][2] == 3)return true;
    if(t[0][2] == t[2][2] && t[1][1] == t[2][0] && t[1][1] == 2)return true;
    if(t[0][2] == t[2][2] && t[1][1] == t[2][0] && t[1][1] == 3)return true;
    return false;
}
//Check if the element is empty or not
bool check(const int t[3][3], int row, int column)
{
    if(t[row][column] == 1)
    {
        return true;
    }
    return false;
}

//Takes input and verifies it
int input()
{
    int n;
    while(true)
    {
        if(cin>>n)
        {
            if(n > 3 || n < 1)
            {
                cout<<"Please enter either 1, 2 or 3";
                continue;
            }
        }
        else if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"Please enter a valid number";
            continue;
        }
        return n;
    }
}
//This function shows the grid to the user
void show(int t[3][3])
{
    int r = 0, c = 0;
    while(r<3)
    {
        if(t[r][c] == 1)cout<<" ";
        else if(t[r][c] == 2)cout<<"X";
        else if(t[r][c] == 3)cout<<"O";
        if(c<2)
        {
            cout<<"|";
            c++;
            continue;
        }
        else
        {
            cout<<"\n";
            c = 0;
            r++;
        }
    }
}
//The part where i am displaying text for input
void ttt()
{
    //1 is empty space, 2 is X and 3 is O
    int t[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    int i = 1;
    bool x = false;
    while(i<=9)
    {
        if(!x)
        {
        cout<<"Select which row you want to play 'X'";
        int row = input();
        row--;
        cout<<"Select which column you want to play 'X'";
        int column = input();
        column--;
        if(!check(t, row, column))
        {
            cout<<"This space is already played";
            continue;
        }
        else
        {
            t[row][column] = 2;
            x = true;
            i++;
            show(t);
            if(win(t))
            {
                cout<<"X wins!";
                break;
            }
        }
        }
        else if(x)
        {
        cout<<"Select which row you want to play 'O'";
        int row = input();
        row--;
        cout<<"Select which column you want to play 'O'";
        int column = input();
        column--;
        if(!check(t, row, column))
        {
            cout<<"This space is already played\n";
            continue;
        }
        else
        {
            t[row][column] = 3;
            i++;
            x = false;
            show(t);
            if(win(t))
            {
                cout<<"O Wins!";
                break;
            }
        }
        }
    }


}
//main function
int main()
{
    cout<<"--------Tic-Tac-Toe--------\n";
    ttt();
}

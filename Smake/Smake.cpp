#include <iostream>
using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN  };
eDirection dir;

void setup()
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitX = rand() % height;
    score = 0;


}

void draw()
{
    system("cls");
    for(int i = 0; i < width; i++)
    
        cout << "#";
        cout << endl;

        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++) {
                if (j == 0 || j == width - 1)
                    cout << "#";
                cout << " ";
        }
            cout << endl;
    }

    for (int i = 0; i < width; i++)

            cout << "#";
        cout << endl;
    
}

void input() 
{

}

void Logic()
{

}
int main()
{
    setup();
    while (!gameOver)
    {
        draw();
        input();
        Logic();
    }
    return 0;
}


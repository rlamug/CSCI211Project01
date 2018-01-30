//   chart.cpp
//   Lamug , Rodolfo
//   rlamug

#include <iostream>
using namespace std;

const int MAX = 100; //Max number of integers allowed in the array
int values[MAX]; //Array

//Function prototype
int find_largest(); //Finds largest value in array
int input(); //Takes user's inputed values and place them in the array
void draw(int, int); //Draws the array of stars and spaces

int main(){

        int width = input();
        int largest = find_largest();
        draw(largest, width);

        return 0;
}

int find_largest (){ //Returns the largest value in the given array of integers

        int largest = 0;

        for (int i=0; i<MAX; i++) 
        {
                if (values[i]>largest)
                        largest = values[i];
        }

        return largest;
}

int input(){ //Takes user input and puts it into the array of values and also gives the width of the matrix of stars
        int width = 0;
        int input;

        do{
                cin >> input;

                if (input > 0){ //Makes sure inputed values are only positive
                        values[width] = input;
                }

                width++; //Increases width of array everytime user inputs values
        } while (input != 0);

        return width;
}

void draw(int largest, int width){ //Draws the array with stars and spaces

        for(int col = largest; col >= 1; col--){ //Makes Columns for stars/spaces

                for (int row = 0; row < width - 1; row++){ //Makes Rows for star/spaces

                        if (col <= values[row]){ //prints stars
                                cout << "*";

                        }else{
                                cout << " ";
                        }
                }

                cout << endl;
        }
}

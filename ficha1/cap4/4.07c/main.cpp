#include <iostream>
#include<vector>

using namespace std;

void localMax(const vector<vector<int>> matrix, bool option) {
    if (option == true) {
        for (int line = 0; line < 5; line++) {
            for (int column = 0; column < 5; column++) {
                int chosen = matrix[line][column];
                if ((line == 0) && (column == 0)) {  //checking top left
                    int elem1 = matrix[line+1][column];
                    int elem2 = matrix[line][column+1];
                    int elem3 = matrix[line+1][column+1];

                    if ((chosen > elem1) && (chosen > elem2) && (chosen > elem3)) {
                        cout << "\x1B[38;2;112;255;241m" << matrix[line][column] << "\x1B[0m" << " | ";
                    } else {
                        cout << matrix[line][column] << " | ";                        
                    }
                } else if ((line == 0) && (column == 4)) {  //checking top right
                    int elem1 = matrix[line+1][column];
                    int elem2 = matrix[line][column-1];
                    int elem3 = matrix[line+1][column-1];    

                    if ((chosen > elem1) && (chosen > elem2) && (chosen > elem3)) {
                        cout << "\x1B[38;2;112;255;241m" << matrix[line][column] << "\x1B[0m" << "\n";
                    } else {
                        cout << matrix[line][column] << " | ";                        
                    }
                } else if ((line == 4) && (column == 0)) {  //checking bottom left
                    int elem1 = matrix[line-1][column];
                    int elem2 = matrix[line][column+1];
                    int elem3 = matrix[line-1][column+1];   

                    if ((chosen > elem1) && (chosen > elem2) && (chosen > elem3)) {
                        cout << "\x1B[38;2;112;255;241m" << matrix[line][column] << "\x1B[0m" << " | ";
                    } else {
                        cout << matrix[line][column] << " | ";                        
                    }                                   
                } else if ((line == 4) && (column == 4)) {  //checking bottom right
                    int elem1 = matrix[line-1][column];
                    int elem2 = matrix[line][column-1];
                    int elem3 = matrix[line-1][column-1];  

                    if ((chosen > elem1) && (chosen > elem2) && (chosen > elem3)) {
                        cout << "\x1B[38;2;112;255;241m" << matrix[line][column] << "\x1B[0m" << "\n";
                    } else {
                        cout << matrix[line][column] << "";                        
                    }                                  
                } else if ((line == 0) && ((column < 4) && (column > 0))) {  //checking top row
                    int elem1 = matrix[line][column-1];
                    int elem2 = matrix[line][column+1];
                    int elem3 = matrix[line+1][column-1]; 
                    int elem4 = matrix[line+1][column];
                    int elem5 = matrix[line+1][column+1];

                    if ((chosen > elem1) && (chosen > elem2) && (chosen > elem3) && (chosen > elem4) && (chosen > elem5)) {
                        cout << "\x1B[38;2;112;255;241m" << matrix[line][column] << "\x1B[0m" << " | ";
                    } else {
                        cout << matrix[line][column] << " | ";                        
                    }                    
                } else if ((line == 4) && ((column  < 4) && (column > 0))) {  //checking bottom row
                    int elem1 = matrix[line][column-1];
                    int elem2 = matrix[line][column+1];
                    int elem3 = matrix[line-1][column-1]; 
                    int elem4 = matrix[line-1][column];
                    int elem5 = matrix[line-1][column+1];

                    if ((chosen > elem1) && (chosen > elem2) && (chosen > elem3) && (chosen > elem4) && (chosen > elem5)) {
                        cout << "\x1B[38;2;112;255;241m" << matrix[line][column] << "\x1B[0m" << " | ";
                    } else {
                        cout << matrix[line][column] << " | ";                        
                    }                   
                } else if ((column == 0) && ((line < 4) && (line > 0))) {  //checking left column
                    int elem1 = matrix[line-1][column];
                    int elem2 = matrix[line+1][column];
                    int elem3 = matrix[line][column+1]; 
                    int elem4 = matrix[line+1][column+1];
                    int elem5 = matrix[line-1][column+1];     

                    if ((chosen > elem1) && (chosen > elem2) && (chosen > elem3) && (chosen > elem4) && (chosen > elem5)) {
                        cout << "\x1B[38;2;112;255;241m" << matrix[line][column] << "\x1B[0m" << " | ";
                    } else {
                        cout << matrix[line][column] << " | ";                        
                    }
                } else if ((column == 4) && ((line < 4) && (line > 0))) {  //checking right column
                    int elem1 = matrix[line-1][column];
                    int elem2 = matrix[line+1][column];
                    int elem3 = matrix[line][column-1]; 
                    int elem4 = matrix[line+1][column-1];
                    int elem5 = matrix[line-1][column-1];      

                    if ((chosen > elem1) && (chosen > elem2) && (chosen > elem3) && (chosen > elem4) && (chosen > elem5)) {
                        cout << "\x1B[38;2;112;255;241m" << matrix[line][column] << "\x1B[0m" << "\n";
                    } else {
                        cout << matrix[line][column] << "\n";                        
                    }            
                } else if ((line > 0) && (line < 5) && (column > 0) && (column < 5)) {
                        int elem1 = matrix[line-1][column-1];  //stating elements around
                        int elem2 = matrix[line-1][column];
                        int elem3 = matrix[line-1][column+1];
                        int elem4 = matrix[line][column-1];
                        int elem5 = matrix[line][column+1];
                        int elem6 = matrix[line+1][column-1];
                        int elem7 = matrix[line+1][column];
                        int elem8 = matrix[line+1][column+1];
                        int thechosen = matrix[line][column];

                        if ((thechosen > elem1) && (thechosen > elem2) && (thechosen > elem3) && (thechosen > elem4) 
                        && (thechosen > elem5) && (thechosen > elem6) && (thechosen > elem7) && (thechosen > elem8)) {
                            cout << "\x1B[38;2;255;88;77m" << matrix[line][column] << "\x1B[0m" << " | ";

                        } else if (column == 4) {
                            cout << matrix[line][column] << "\n";   
                        } else {
                            cout << matrix[line][column] << " | ";
                        }

                    } else if (column == 4) {
                        cout << matrix[line][column] << "\n";
                    } else {
                        cout << matrix[line][column] << " | ";
                    }                    
                }
            }
        } else {
            for (int line = 0; line < 5; line++) {
                for (int column = 0; column < 5; column++) {

                     if ((line > 0) && (line < 4) && (column > 0) && (column < 4)) {
                        int elem1 = matrix[line-1][column-1];  //stating elements around
                        int elem2 = matrix[line-1][column];
                        int elem3 = matrix[line-1][column+1];
                        int elem4 = matrix[line][column-1];
                        int elem5 = matrix[line][column+1];
                        int elem6 = matrix[line+1][column-1];
                        int elem7 = matrix[line+1][column];
                        int elem8 = matrix[line+1][column+1];
                        int thechosen = matrix[line][column];

                        if ((thechosen > elem1) && (thechosen > elem2) && (thechosen > elem3) && (thechosen > elem4) 
                        && (thechosen > elem5) && (thechosen > elem6) && (thechosen > elem7) && (thechosen > elem8)) {
                            cout << "\x1B[38;2;255;88;77m" << matrix[line][column] << "\x1B[0m" << " | ";

                        } else if (column == 4) {
                            cout << matrix[line][column] << "\n";   
                        } else {
                            cout << matrix[line][column] << " | ";
                        }

                    } else if (column == 4) {
                        cout << matrix[line][column] << "\n";
                    } else {
                        cout << matrix[line][column] << " | ";
                    } 
            }
     
        }
    }
}

int main() {
    char option;

    cout << "Do you want to consider all local maxima? (y/n) ";
    cin >> option;

    const vector<vector<int>> matrix = {
        {7, 3, 4, 1, 3} ,
        {2, 9, 6, 2, 1} ,
        {1, 3, 5, 1, 4} ,
        {6, 5, 2, 7, 5} ,
        {4, 2, 1, 3, 6}
    };

    if (option == 'y') {
        cout << "Matrix:" << endl;
        localMax(matrix, true);        
    } else if (option == 'n') {
        cout << "Matrix:" << endl;
        localMax(matrix, false);     
    } else {
        cout << "Not a valid option." << endl;
    }
    cout << endl;

    return 0;
}
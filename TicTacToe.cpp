/*
 Jiayao Li
 Yang Li
 CSCI_3010 PE_4
 */



#include <iostream>
#include <vector>


/**
Create a 3*3 board using vector
    @param &board
 
    @return a vector representing the board
 
*/
std::vector<char> CreateBoard(){
    std::vector<char> board;
    for(int i=0;i<9;i++){
        board.push_back(' ');
    }
    return board;
}




/**
Display the board vector in a readable format
    @param &board
 
*/
void DisplayBoard(std::vector<char> &board){
    for (int i = 0; i < board.size(); ++i){
        std::cout << board[i]<<"|";
        if(i%3==2){
            std::cout<<std::endl<<"------"<<std::endl;
        }
    }
}


/**
 Pass the location the player chose, the mark of current player and the vector representing the board
    @param loc location to play
    @param mark marker to place their
    @param &v board accordingly to update
*/
void PlaceMarker(int loc, char mark, std::vector<char> &v){
    v[loc] = mark;
}



/**
Ask the player to make a choice of row and column
    @return the location of the board
*/
int GetPlayerChoice(){
    int row;
    int col;
    
    
    
    std::cout<<"Which row?(1-3)"<<std::endl;
    std::cin>>row;
    
    std::cout<<"Which col?(1-3)"<<std::endl;
    std::cin>>col;
    return (row-1)*3+col-1;
}




int main(){
    std::vector<char> board = CreateBoard();//create a board
    
    std::string str="xo";//array of char, representing different player's mark
    DisplayBoard(board);//display the board at the beginning of the game
    
    
    for(int i=0;i<9;i++){//the game last for 9 rounds
        std::cout<<"current turn:"<<str[i%2]<<std::endl;//display the mark of the current player
        int choice = GetPlayerChoice();//ask the player to make a choice
        PlaceMarker(choice,str[i%2], board);//change the board vector
        std::cout<<"next"<<std::endl;
        DisplayBoard(board);//Displaye the board after change
    }
}

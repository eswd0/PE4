#include <iostream>
#include <vector>

std::vector<char> CreateBoard(){
    std::vector<char> board;
    for(int i=0;i<9;i++){
        board.push_back(' ');
    }
    return board;
}

void DisplayBoard(std::vector<char> board){
    for (int i = 0; i < board.size(); ++i){
        std::cout << board[i]<<"|";
        if(i%3==2){
            std::cout<<std::endl<<"------"<<std::endl;
        }
    }
}


/**
    @param a location to play
    @param a marker to place their
    @param a board accordingly to update
*/
void PlaceMarker(int loc, char mark, std::vector<char> &v){
    v[loc] = mark;
}




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
    std::vector<char> board = CreateBoard();
    
    std::string str="xo";
    DisplayBoard(board);
    
    
    for(int i=0;i<9;i++){
        std::cout<<"current turn:"<<str[i%2]<<std::endl;
        int choice = GetPlayerChoice();
        PlaceMarker(choice,str[i%2], board);
        std::cout<<"next"<<std::endl;
        DisplayBoard(board);
    }
}

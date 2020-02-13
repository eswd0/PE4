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

int main(){
    std::vector<char> board = CreateBoard();

    DisplayBoard(board);
    //test
    PlaceMarker(1,'x', board);
    std::cout<<"next"<<std::endl;
    DisplayBoard(board);
}

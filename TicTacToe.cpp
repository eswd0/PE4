#include <iostream>
#include <vector>

std::vector<int> CreateBoard(){
    std::vector<int> board;
    for(int i=0;i<9;i++){
        board.push_back(0);
    }
    return board;
}

void DisplayBoard(std::vector<int> board){
    for (int i = 0; i < board.size(); ++i){
        std::cout << board[i]<<"|";
        if(i%3==2){
            std::cout<<std::endl<<"------"<<std::endl;
        }
    }
}

int main(){
    DisplayBoard(CreateBoard());
}

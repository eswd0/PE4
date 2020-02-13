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
    std::vector<char> board=CreateBoard();
    DisplayBoard(board);
}

#include <iostream>

void CreateBoard(){
    int board[3][3];
}

void DisplayBoard(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cout<<"()";
        }
        std::cout<<std::endl;
    }
}

int main(){
    //CreateBoard();
    CreateBoard();
    DisplayBoard();
}

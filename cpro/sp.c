#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdbool.h>
bool gameOver;
const int width=20;
const int height=20;
void Setup(){
    gameOver=false;
}
void Draw(){
    int i,j;
    system("cls");
    for(i=0;i<width;i++){
        printf("#");
    }
    printf("\n");
    for(i=0;i<height;i++){
        for(j=0;j<width;j++){
            if(j==0||j==(width-1)){
                printf("#");
                }
            else printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<width;i++){
        printf("#");
    }
    printf("\n");

}
void Input(){

}
void Logic(){

}
int main(){
    Setup();
    while(!gameOver){
    Draw();
    Input();
    Logic();
    Sleep(50);
    }
    return 0;
}

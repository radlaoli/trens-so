#include "trem.h"
#include <QtCore>

//Construtor
Trem::Trem(int ID, int x, int y){
    this->ID = ID;
    this->x = x;
    this->y = y;
    velocidade = 100;
}

//Função a ser executada após executar trem->START
void Trem::run(){
    while(true){

        // o trem fica parado, apenas verificando de novo
        if (velocidade == 0){
            msleep(10);
            continue;
        }

        switch(ID){
        case 1: // Trem a  (x: 300-580, y: 20-140)
            if (y == 20 && x > 300) x -= 10;
            else if (x == 300 && y < 140)  y += 10;
            else if (y == 140 && x < 580)  x += 10;
            else y -= 10;
            emit updateGUI(ID, x, y); //emite um sinal
            break;
        case 2: // Trem b  (x: 160-440, y: 140-260)
            if (y == 140 && x > 160) x -= 10;
            else if (x == 160 && y < 260)  y += 10;
            else if (y == 260 && x < 440)  x += 10;
            else y -= 10;
            emit updateGUI(ID, x, y);
            break;
        case 3: // Trem c  (x: 440-720, y: 140-260)
            if (y == 140 && x > 440) x -= 10;
            else if (x == 440 && y < 260)  y += 10;
            else if (y == 260 && x < 720)  x += 10;
            else y -= 10;
            emit updateGUI(ID, x, y);
            break;
        case 4: // Trem d  (x: 20-300, y: 260-380)
            if (y == 260 && x > 20) x -= 10;
            else if (x == 20 && y < 380)   y += 10;
            else if (y == 380 && x < 300)  x += 10;
            else y -= 10;
            emit updateGUI(ID, x, y);
            break;
        case 5: // Trem e  (x: 300-580, y: 260-380)
            if (y == 260 && x > 300) x -= 10;
            else if (x == 300 && y < 380)  y += 10;
            else if (y == 380 && x < 580)  x += 10;
            else y -= 10;
            emit updateGUI(ID, x, y);
            break;
        case 6: // Trem f  (x: 580-860, y: 260-380)
            if (y == 260 && x > 580) x -= 10;
            else if (x == 580 && y < 380)  y += 10;
            else if (y == 380 && x < 860)  x += 10;
            else y -= 10;
            emit updateGUI(ID, x, y);
            break;
        default:
            break;
        }
        //Espera antes do próximo passo. Quanto maior a velocidade, menor a espera:
        usleep((200 - velocidade) * 1000 + 500);
    }
}

void Trem::setVelocidade(int v){
    velocidade = v;
}




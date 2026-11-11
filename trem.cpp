#include "trem.h"
#include <QtCore>
#include <QMutex>

QMutex regiao[10];

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
        case 1: //Trem 1

            if (x == 300 && y == 120){
                regiao[2].lock();
                regiao[1].lock();
            }

            if (y == 20 && x > 300) x -= 10;
            else if (x == 300 && y < 140)  y += 10;
            else if (y == 140 && x < 580)  x += 10;
            else y -= 10;

            emit updateGUI(ID, x, y);

            if (x == 470 && y == 140) regiao[1].unlock();
            if (x == 580 && y == 120) regiao[2].unlock();

            break;

        case 2: //Trem 2

            if (x == 160 && y == 240) regiao[4].lock();
            if (x == 270 && y == 260){
                regiao[3].lock();
                regiao[5].lock();
            }
            if (x == 440 && y == 160) regiao[1].lock();

            if (y == 140 && x > 160) x -= 10;
            else if (x == 160 && y < 260)  y += 10;
            else if (y == 260 && x < 440)  x += 10;
            else y -= 10;

            emit updateGUI(ID, x, y);

            if (x == 330 && y == 260) regiao[4].unlock();
            if (x == 440 && y == 240) regiao[5].unlock();
            if (x == 410 && y == 140) regiao[3].unlock();
            if (x == 270 && y == 140) regiao[1].unlock();

            break;

        case 3: //Trem 3
            if (x == 610 && y == 140) regiao[2].lock();
            if (x == 470 && y == 140) regiao[3].lock();
            if (x == 440 && y == 240) regiao[6].lock();
            if (x == 550 && y == 260) regiao[7].lock();

            if (y == 140 && x > 440) x -= 10;
            else if (x == 440 && y < 260)  y += 10;
            else if (y == 260 && x < 720)  x += 10;
            else y -= 10;

            emit updateGUI(ID, x, y);

            if (x == 440 && y == 160) regiao[2].unlock();
            if (x == 470 && y == 260) regiao[3].unlock();
            if (x == 610 && y == 260) regiao[6].unlock();
            if (x == 720 && y == 240) regiao[7].unlock();

            break;

        case 4: //Trem 4

            if (x == 270 && y == 380){
                regiao[4].lock();
                regiao[8].lock();
            }

            if (y == 260 && x > 20) x -= 10;
            else if (x == 20 && y < 380)   y += 10;
            else if (y == 380 && x < 300)  x += 10;
            else y -= 10;

            emit updateGUI(ID, x, y);

            if (x == 270 && y == 260) regiao[8].unlock();
            if (x == 130 && y == 260) regiao[4].unlock();

            break;

        case 5: //Trem 5
            if (x == 550 && y == 380) regiao[9].lock();
            if (x == 580 && y == 280) regiao[6].lock();
            if (x == 470 && y == 260) regiao[5].lock();
            if (x == 330 && y == 260) regiao[8].lock();

            if (y == 260 && x > 300) x -= 10;
            else if (x == 300 && y < 380)  y += 10;
            else if (y == 380 && x < 580)  x += 10;
            else y -= 10;
            
            emit updateGUI(ID, x, y);

            if (x == 550 && y == 260) regiao[9].unlock();
            if (x == 410 && y == 260) regiao[6].unlock();
            if (x == 300 && y == 280) regiao[5].unlock();
            if (x == 330 && y == 380) regiao[8].unlock();

            break;

        case 6: //Trem 6

            if (x == 750 && y == 260){
                regiao[9].lock();
                regiao[7].lock();
            }

            if (y == 260 && x > 580) x -= 10;
            else if (x == 580 && y < 380)  y += 10;
            else if (y == 380 && x < 860)  x += 10;
            else y -= 10;
            
            emit updateGUI(ID, x, y);

            if (x == 580 && y == 280) regiao[7].unlock();
            if (x == 610 && y == 380) regiao[9].unlock();

            break;

            default:
            break;
        }
        //Espera antes do próximo passo. Quanto maior a velocidade, menor a espera
        usleep((200 - velocidade) * 1000 + 500);
    }
}

void Trem::setVelocidade(int v){
    velocidade = v;
}




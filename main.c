// Jogo da velha criado por Lucas Elias de Andrade Cruvinel
// Email : LucrilhasBR@hotmail.com ou LucrilhasBR@gmail.com
// Obs : Jogo feito para windowns, nao ira funcionar como deveria em outras sistemas

// A seguir est�o as bibliotecas uadas:
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include<time.h>

// A seguir est�o incluindo os arquivos necessario para que funcione o jogo
// Pois este programa foi feito de forma modularizada
#include "vs_player.c"
#include "vs_pcstart.c"
#include "x_vs_pc_facil.c"
#include "x_vs_pc_medio.c"
#include "x_vs_pc_dificil.c"
#include "o_vs_pc_facil.c"
#include "o_vs_pc_medio.c"
#include "o_vs_pc_dificil.c"




void imprime_velha(char velha[3][3], char amostrador[3][3]){ // Funcao que imprime o tabuleiro durante o jogo

    printf("||====================================================||\n");
    printf("||                                                    ||\n");
    printf("||         %c | %c | %c            %c | %c | %c             ||\n", amostrador[0][0], amostrador[0][1], amostrador[0][2], velha[0][0], velha[0][1], velha[0][2]);
    printf("||        ===========          ===========            ||\n");
    printf("||         %c | %c | %c     ==>    %c | %c | %c             ||\n", amostrador[1][0], amostrador[1][1], amostrador[1][2], velha[1][0], velha[1][1], velha[1][2]);
    printf("||        ===========          ===========            ||\n");
    printf("||         %c | %c | %c            %c | %c | %c             ||\n", amostrador[2][0], amostrador[2][1], amostrador[2][2], velha[2][0], velha[2][1], velha[2][2]);
    printf("||                                                    ||\n");
    printf("||====================================================||\n");
}

void imprime_velha_final(char velha[3][3]){ // Funcao que imprime o tabuleiro depois que o jogo acaba

    printf("||====================================================||\n");
    printf("||                                                    ||\n");
    printf("||                %c | %c | %c                           ||\n", velha[0][0], velha[0][1], velha[0][2]);
    printf("||               ===========                          ||\n");
    printf("||                %c | %c | %c                           ||\n", velha[1][0], velha[1][1], velha[1][2]);
    printf("||               ===========                          ||\n");
    printf("||                %c | %c | %c                           ||\n", velha[2][0], velha[2][1], velha[2][2]);
    printf("||                                                    ||\n");
    printf("||====================================================||\n");
}

void main(){ // fun��o main que � por  onde come�a, por�m s� � usada para redirecionar para o menu do jogo
    menu(); // Come�a a fun��o menu que � o menu do jogo
}

void menu(){ // menu do jogo para o jogador decidir o que fazer
        system("cls"); // Limpa a tela do terminal, funciona apenas em windows; ser� usado bastante durante o programa.
        setlocale(LC_ALL, "Portuguese"); // permite usar acentos e cedilhas; ser� usado bastante durante o programa
        system("color 07"); // define a cor mostrada no terminal; ser� usado bastante durante o programa

        //A seguir est� a "arte" inicial do jogo junto com as op��es que o jogador pode ecolher
        // Ele � bem intuitivo mostrando que basta pressionar o numero correspondente a op��o
        printf("***************************************\n");
        printf("*          @  @@@@   @@@@@  @@@@      *\n");
        printf("*          @ @    @ @      @    @     *\n");
        printf("*          @ @    @ @  @@@ @    @     *\n");
        printf("*     @    @ @    @ @    @ @    @     *\n");
        printf("*      @@@@   @@@@  @@@@@@  @@@@      *\n");
        printf("*                                     *\n");
        printf("*           @@@@@   @@@@              *\n");
        printf("*           @    @ @    @             *\n");
        printf("*           @    @ @@@@@@             *\n");
        printf("*           @    @ @    @             *\n");
        printf("*           @@@@@  @    @             *\n");
        printf("*                                     *\n");
        printf("*    @     @ @@@@ @    @   @  @@@@    *\n");
        printf("*    @     @ @    @    @   @ @    @   *\n");
        printf("*     @   @  @@@@ @    @@@@@ @@@@@@   *\n");
        printf("*      @ @   @    @    @   @ @    @   *\n");
        printf("*       @    @@@@ @@@@ @   @ @    @   *\n");
        printf("***************************************\n");
        printf("*                                     *\n");
        printf("*    Feito por:  Lucas Cruvinel.      *\n");
        printf("*                                     *\n");
        printf("***************************************\n");
        printf("*              MENU:                  *\n");
        printf("* Pressione 1 para jogar contra PC.   *\n");
        printf("* Pressione 2 para jogar 1 vs 1.      *\n");
        printf("* Pressione 3 para ler as regras.     *\n");
        printf("* Pressione 4 para sair do jogo.      *\n");
        printf("*                                     *\n");
        printf("***************************************\n");

        int numescolhido; // Esse inteiro funciona como um auxiliar para pegar a escolha do jogador
        numescolhido = getch(); //Reconhece a escolha do jogador para aonde ele quer ir
        if(numescolhido == 49){vs_pc();} //Vai para fun�ao em que come�a o jogo contra maquina
        else if(numescolhido == 50){jog_vs_jog();} // vai para fun�ao em que come�a o jogo entre jogadores
        else if(numescolhido == 51){regras();} // Vai para a funcao que mostra as regras
        else if(numescolhido == 52){exit(0);}//sai do jogo
        else {menunumerrado();} // Caso escolha um numero nao solicitado ele abre um menu diferente com um alerta
}

void menunumerrado(){ // menu do jogo caso ele escolha um numero errado no menu normal
        system("cls"); // Limpa a tela do terminal, funciona apenas em windows; ser� usado bastante durante o programa.
        setlocale(LC_ALL, "Portuguese"); // permite usar acentos e cedilhas; ser� usado bastante durante o programa
        system("color 07"); // define a cor mostrada no terminal; ser� usado bastante durante o programa

        //A seguir est� a "arte" inicial do jogo junto com as op��es que o jogador pode ecolher
        // Ele � bem intuitivo mostrando que basta pressionar o numero correspondente a op��o
        printf("***************************************\n");
        printf("*          @  @@@@   @@@@@  @@@@      *\n");
        printf("*          @ @    @ @      @    @     *\n");
        printf("*          @ @    @ @  @@@ @    @     *\n");
        printf("*     @    @ @    @ @    @ @    @     *\n");
        printf("*      @@@@   @@@@  @@@@@@  @@@@      *\n");
        printf("*                                     *\n");
        printf("*           @@@@@   @@@@              *\n");
        printf("*           @    @ @    @             *\n");
        printf("*           @    @ @@@@@@             *\n");
        printf("*           @    @ @    @             *\n");
        printf("*           @@@@@  @    @             *\n");
        printf("*                                     *\n");
        printf("*    @     @ @@@@ @    @   @  @@@@    *\n");
        printf("*    @     @ @    @    @   @ @    @   *\n");
        printf("*     @   @  @@@@ @    @@@@@ @@@@@@   *\n");
        printf("*      @ @   @    @    @   @ @    @   *\n");
        printf("*       @    @@@@ @@@@ @   @ @    @   *\n");
        printf("***************************************\n");
        printf("*                                     *\n");
        printf("*    Feito por:  Lucas Cruvinel.      *\n");
        printf("*                                     *\n");
        printf("***************************************\n");
        printf("*              MENU:                  *\n");
        printf("* Pressione 1 para jogar contra PC.   *\n");
        printf("* Pressione 2 para jogar 1 vs 1.      *\n");
        printf("* Pressione 3 para ler as regras.     *\n");
        printf("* Pressione 4 para sair do jogo.      *\n");
        printf("*                                     *\n");
        printf("***************************************\n");
        printf("\n");
        printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
        printf("!                                     !\n");
        printf("!  Por favor digite um n�mero v�lido  !\n");
        printf("!                                     !\n");
        printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");

        int numescolhido; // Esse inteiro funciona como um auxiliar para pegar a escolha do jogador
        numescolhido = getch(); //Reconhece a escolha do jogador para aonde ele quer ir
        if(numescolhido == 49){vs_pc();} //Vai para fun�ao em que come�a o jogo contra maquina
        else if(numescolhido == 50){jog_vs_jog();} // vai para fun�ao em que come�a o jogo entre jogadores
        else if(numescolhido == 51){regras();} // Vai para a funcao que mostra as regras
        else if(numescolhido == 52){exit(0);}//sai do jogo
        else {menunumerrado();} // Caso escolha um numero nao solicitado ele abre um menu diferente com um alerta
}

void regras(){ // Fun��o que mostra as regras do jogo.
    system("cls");system("color 0E");setlocale(LC_ALL, "Portuguese");

        //A seguir est�o as regras mostradas
    printf("**************************************************************************\n");
    printf("*                                REGRAS                                  *\n");
    printf("*    O jogo da velha � jogado em turnos alternados entre dois jogadores. *\n");
    printf("*    O jogo passa-se num tabuleiro de 3x3 posi��es nas quais os          *\n");
    printf("* jogadores fazem suas marcas em uma das posi��es durante as rodadas.    *\n");
    printf("*    O jogador que inicia a partida utiliza o s�mbolo �X�, enquanto que  *\n");
    printf("* o segundo jogador utiliza o s�mbolo �O�.                               *\n");
    printf("*    Cada jogador � livre para colocar uma marca em qualquer posi��o no  *\n");
    printf("* seu turno, desde que a posi��o esteja vazia (sem marcas).              *\n");
    printf("*     Ao colocar uma marca no tabuleiro, a jogada passa para o pr�ximo   *\n");
    printf("* jogador, aonde o processo � repetido at� que um dos jogadores ven�a,   *\n");
    printf("* ou at�que o tabuleiro seja completamente preenchido, situa��o na qual  *\n");
    printf("* ocorre empate.                                                         *\n");
    printf("*    A vit�ria ocorre quando um jogador consegue colocar tr�s s�mbolos   *\n");
    printf("* em sequ�ncia, seja em linha, coluna ou na diagonal principal ou        *\n");
    printf("* secund�ria do tabuleiro.                                               *\n");
    printf("*    O objetivo dos jogadores, ent�o, � colocar tr�s marcas numa das     *\n");
    printf("* configura��es v�lidas, enquanto evitam que o seu oponente consiga      *\n");
    printf("* fazer as tr�s marcas antes dele.                                       *\n");
    printf("*                                                                        *\n");
    printf("**************************************************************************\n\n");

    system("pause");// Pausa ate o jogador pressionar alguma tecla, ent�o ele � redirecionado ao menu
    menu(); // vota ao menu
}

void parabeins_X(char velha[3][3], char nomep1[10], char nomep2[10]){ // Func�o caso o jogador X ganhe no pvp
    system("cls");setlocale(LC_ALL, "Portuguese");

    // A seguir est� a messagem para parabenizar o jogador X
    printf("\n");
    printf("   *************************************************\n");
    printf("   *                                               *\n");
    printf("   *         NOTA DE ESCLARECIMENTO                *\n");
    printf("   *                                               *\n");
    printf("   *  Esta nota tem a inten��o de esclarecer que:  *\n");
    printf("     O jogador %s se provou superior ao jogador %s       \n", nomep1, nomep2);
    printf("   *                                               *\n");
    printf("   *          A seguir est� a prova:               *\n");
    printf("   *************************************************\n");

    imprime_velha_final(velha); // Imprime o tabuleiro para que os jogadores possam verificar

    system("pause");// Pausa ate o jogador pressionar alguma tecla, ent�o ele � redirecionado ao menu
    menu();// vota ao menu
}

void parabeins_O(char velha[3][3], char nomep1[10], char nomep2[10]){// Func�o caso o jogador O ganhe no pvp
    system("cls");setlocale(LC_ALL, "Portuguese");

    // A seguir est� a messagem para parabenizar o jogador O
    printf("\n");
    printf("   *************************************************\n");
    printf("   *                                               *\n");
    printf("   *         NOTA DE ESCLARECIMENTO                *\n");
    printf("   *                                               *\n");
    printf("   *  Esta nota tem a inten��o de esclarecer que:  *\n");
    printf("     O jogador %s se provou superior ao jogador %s       \n", nomep2, nomep1);
    printf("   *                                               *\n");
    printf("   *          A seguir est� a prova:               *\n");
    printf("   *************************************************\n");

    imprime_velha_final(velha);// Imprime o tabuleiro para que os jogadores possam verificar

    system("pause");// Pausa ate o jogador pressionar alguma tecla, ent�o ele � redirecionado ao menu
    menu();// vota ao menu
}

void empate(char velha[3][3], char nomep1[10], char nomep2[10]){// Func�o caso aconte�a empate no pvp
    system("cls"); setlocale(LC_ALL, "Portuguese");

    // A seguir est� a messagem de "deu velha"
    printf("\n");
    printf("   *************************************************\n");
    printf("   *                                               *\n");
    printf("   *         NOTA DE ESCLARECIMENTO                *\n");
    printf("   *                                               *\n");
    printf("   *  Esta nota tem a inten��o de esclarecer que:  *\n");
    printf("     Os jogadore %s e %s deram velha \n", nomep1, nomep2);
    printf("   *                                               *\n");
    printf("   *          A seguir est� a prova:               *\n");
    printf("   *************************************************\n");

    imprime_velha_final(velha);// Imprime o tabuleiro para que os jogadores possam verificar

    system("pause");// Pausa ate o jogador pressionar alguma tecla, ent�o ele � redirecionado ao menu
    menu();// vota ao menu
}

void vitoria(char velha[3][3], char nomeplayer[10]){// Fun��o parabenizando o jogador caso ele ganhe contra a CPU
    system("cls"); setlocale(LC_ALL, "Portuguese");

    //A seguir est� a mensagem parabenizando o jogador
    printf("\n");
    printf("   *************************************************\n");
    printf("   *                                               *\n");
    printf("   *         NOTA DE ESCLARECIMENTO                *\n");
    printf("   *                                               *\n");
    printf("   *  Esta nota tem a inten��o de esclarecer que:  *\n");
    printf("     O jogador %s � mais inteligente que uma m�quina       \n", nomeplayer);
    printf("   *                                               *\n");
    printf("   *          A seguir est� a prova:               *\n");
    printf("   *************************************************\n");

    imprime_velha_final(velha);// Imprime o tabuleiro para que os jogadores possam verificar

    system("pause");// Pausa ate o jogador pressionar alguma tecla, ent�o ele � redirecionado ao menu
    menu();// vota ao menu
}

void derrota(char velha[3][3], char nomeplayer[10]){ // Fun��o que mostra que o jogador perdeu para a CPU
    system("cls"); setlocale(LC_ALL, "Portuguese");

    //A seguir est� a mensagem de consolo ao jogador
    printf("\n");
    printf("   *************************************************\n");
    printf("   *                                               *\n");
    printf("   *         NOTA DE ESCLARECIMENTO                *\n");
    printf("   *                                               *\n");
    printf("   *  Esta nota tem a inten��o de esclarecer que:  *\n");
    printf("     O jogador %s � n�o superou a m�quina       \n", nomeplayer);
    printf("   *                                               *\n");
    printf("   *          A seguir est� a prova:               *\n");
    printf("   *************************************************\n");

    imprime_velha_final(velha);// Imprime o tabuleiro para que os jogadores possam verificar

    system("pause");// Pausa ate o jogador pressionar alguma tecla, ent�o ele � redirecionado ao menu
    menu();// vota ao menu
}

void empate_pc(char velha[3][3], char nomeplayer[10]){//Fun��o que mostra que o jogador empatou com a CPU
    system("cls"); setlocale(LC_ALL, "Portuguese");

    //A seguir est� a mensagem de consolo ao jogador
    printf("\n");
    printf("   *************************************************\n");
    printf("   *                                               *\n");
    printf("   *         NOTA DE ESCLARECIMENTO                *\n");
    printf("   *                                               *\n");
    printf("   *  Esta nota tem a inten��o de esclarecer que:  *\n");
    printf("     O jogador %s � t�o inteligente quanto uma m�quina       \n", nomeplayer);
    printf("   *                                               *\n");
    printf("   *          A seguir est� a prova:               *\n");
    printf("   *************************************************\n");

    imprime_velha_final(velha);// Imprime o tabuleiro para que os jogadores possam verificar

    system("pause");// Pausa ate o jogador pressionar alguma tecla, ent�o ele � redirecionado ao menu
    menu();// vota ao menu


}

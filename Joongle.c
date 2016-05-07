#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define caso "Joongle !"
#define aluno "Marcos Antonio Santos de Aquino Junior"
#define professor "Alessandro Miranda Gonçalves"


struct hotel{
		char nome[50];
		char local[30];
		char descricao[500];
		int id;
};
struct hotel dados[10000];
/////////////////////////////// funções /////////////////////////////////////////
void header(){

	printf("--------------------------------------------------------------------------------------------------------\n");
	printf("                                           JOONGLE                                                       \n");
	printf("--------------------------------------------------------------------------------------------------------\n");
	printf("                                 [1] Cadastrar Hotel\n");
	printf("                                 [2] Pesquisar Hotel\n");
	printf("                                 [3] Informações do case\n");
	printf("                                 [ESC] Para Sair\n");
	printf("                            						                                                    \n");
}


void header_2(){

	printf("--------------------------------------------------------------------------------------------------\n");
	printf("                                         JOONGLE                                                   \n");
	printf("--------------------------------------------------------------------------------------------------\n");

}



void pesquisa_id(){ // Pesquisa dos hoteis
    int id;

    do
	{
		header_2();
       	printf("                                  Pesquisa de hotel\n");
		printf("                                  Digite o id a partir de 1000: ");
		scanf("%d", &id);
		
	
		if(id<1000)
		{
			printf("ID INVALIDO, POR FAVOR DIGITE UM VALOR A PARTIR DE 1000.");
			system("pause");
			system("cls");					
		}
		
	}while(id<1000);	
    printf("\n");
    printf("-----------------------------------------------------------------------------------------------------------\n");
	printf("                Nome: %s                    \n", dados[id].nome);
	printf("                Localizando em %s.             \n", dados[id].local);
	printf("-----------------------------------------------------------------------------------------------------------\n");

}
				

void cadastro_hotel(){ // Cadastro de hóteis
    int i, x=1031, sair;
    int saida;

            do{
                header_2();

				printf("                     ID gerado    : %d\n", x);
                i=x;
				printf("                     Nome do Hotel: ");
				scanf("%s", dados[i].nome);
				printf("                     Local do Hotel: ");
				scanf("%s", dados[i].local);

                dados[i].id = x;
                printf("\n");
                printf("Hotel %s, localizado em %s. ID: %d [ CADASTRADO COM SUCESSO :D ].\n", dados[i].nome, dados[i].local, dados[i].id);
                printf("\n");
                printf("Você desejar cadastrar um novo SIM[s] ou NÃO[Outra tecla]\n");
                saida = getch();

                if (saida == 115){
                    x = x+1;
                     system("cls");
                }else{
                    sair=1;
                }


            }while(sair!=1);




}

void db(){ //Hoteis pré cadastrados

            //NOME DOS HOTEIS//
    strcpy(dados[1000].nome, "Resort Rio Quente");
    strcpy(dados[1001].nome, "Jumeira Beach");
    strcpy(dados[1002].nome, "Hotel Pestana");
    strcpy(dados[1003].nome, "Bellagio");
    strcpy(dados[1004].nome, "Fairmont Le Château Frontenac");
    strcpy(dados[1005].nome, "Hotel Sacher");
    strcpy(dados[1006].nome, "Mandarin Oriental Bangkok");
    strcpy(dados[1007].nome, "Monastero Santa Rosa Hotel & SPA");
    strcpy(dados[1008].nome, "Mount Nelson Hotel");
    strcpy(dados[1009].nome, "St. Regis Bal Harbour Resort");
    strcpy(dados[1010].nome, "The Balmoral");
    strcpy(dados[1011].nome, "The Connaught");
    strcpy(dados[1012].nome, "The Dolder Grand");
    strcpy(dados[1013].nome, "Inn at Shelburne Farms");
    strcpy(dados[1014].nome, "Jade Mountain");
    strcpy(dados[1015].nome, "Umaid Bhawan Palace Jodhpur");
    strcpy(dados[1016].nome, "Shinta Mani Resort");
    strcpy(dados[1017].nome, "Bellevue Syrene");
    strcpy(dados[1018].nome, "Hanoi La Siesta Hotel & Spa");
    strcpy(dados[1019].nome, "Achtis Hotel");
    strcpy(dados[1020].nome, "Belmond Le Manoir aux Quat'Saisons");
    strcpy(dados[1021].nome, "Mirihi Island Resort");
    strcpy(dados[1022].nome, "Bucuti & Tara Beach Resort Aruba");
    strcpy(dados[1023].nome, "Calabash Luxury Boutique Hotel & Spa");
    strcpy(dados[1024].nome, "Hotel Ritta Höppner");
    strcpy(dados[1025].nome, "Gili Lankanfushi Maldives");
    strcpy(dados[1026].nome, "Canaves Oia Hotel");
    strcpy(dados[1027].nome, "Orange County Resorts Kabini");
    strcpy(dados[1028].nome, "Hotel Estalagem St Hubertus");
    strcpy(dados[1029].nome, "The Milestone Hotel");
    strcpy(dados[1030].nome, "Tokoriki Island Resort");
                //LOCAIS DOS HOTEIS//
    strcpy(dados[1000].local, "Caldas Novas");
    strcpy(dados[1001].local, "Dubai");
    strcpy(dados[1002].local, "São Luís");
    strcpy(dados[1003].local, "Boston");
    strcpy(dados[1004].local, "Buenos Aires");
    strcpy(dados[1005].local, "Dallas");
    strcpy(dados[1006].local, "Moscovo");
    strcpy(dados[1007].local, "Madrid");
    strcpy(dados[1008].local, "Atlanta");
    strcpy(dados[1009].local, "Toronto");
    strcpy(dados[1010].local, "Sydney");
    strcpy(dados[1011].local, "Mumbai");
    strcpy(dados[1012].local, "Phoenix");
    strcpy(dados[1013].local, "Barcelona");
    strcpy(dados[1014].local, "Calcutá");
    strcpy(dados[1015].local, "Jodhpur, Índia");
    strcpy(dados[1016].local, "Siem Reap, Camboja");
    strcpy(dados[1017].local, "Sorrento, Itália");
    strcpy(dados[1018].local, "Hanói, Vietnã");
    strcpy(dados[1019].local, "Afitos, Grécia");
    strcpy(dados[1020].local, "Great Milton, Reino Unido");
    strcpy(dados[1021].local, "Mirihi, Maldivas");
    strcpy(dados[1022].local, "Palm/Eagle Beach, Aruba");
    strcpy(dados[1023].local, "Lance aux Epines, Grenada");
    strcpy(dados[1024].local, "Gramado, Brasil");
    strcpy(dados[1025].local, "Lankanfushi, Maldivas");
    strcpy(dados[1026].local, "Oiã, Grécia");
    strcpy(dados[1027].local, "Nagarhole National Park, Índia");
    strcpy(dados[1028].local, "Gramado, Brasil");
    strcpy(dados[1029].local, "Londres, Reino Unido");
    strcpy(dados[1030].local, "Tokoriki Island, Fiji");
}

void info(){
    header_2();


    printf ("\n\nCASE: %s  \nAluno: %s \nProfessor: %s \n\n\n",caso,aluno,professor);

    char info_text1[1000] ="SINOPSE: grande multinacional Joongle! Está experimentando novas formas de ordenação e localização de dados,\n";
    char info_text2[300] = "voltado  para hoteis e resorts. E você, sendo visionário, recebeu a missão de criar um sistema em C para\n";
    char info_text3[300] = "percorrer uma estrutura com pelo menos 10.000 linhas de resultados e encontrar um determinado dado. \n";


    strcat(info_text1,info_text2);
    strcat(info_text1,info_text3);


    printf("%s", info_text1);

}
/////////////////////////////////// FUNÇÃO MAIN /////////////////////////////////////////
void main(void)
{
    setlocale(LC_ALL,"Portuguese");
    int menu;
    db();
    do
	{
		header();
		menu = getch();
		switch (menu){

            case 49:
                system("cls");
                cadastro_hotel();
            break;

            case 50:
                system("cls");
                pesquisa_id();
			break;
			case 51:
                system("cls");
                info();
			break;

            case 0x1b:
                system("EXIT");
            break;
		}
		printf("\n");
        system("PAUSE");
        system("cls");

	}while(menu != 0x1b);

}

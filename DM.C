#include<stdio.h>
#include<conio.h>

void main(){
int choice,english,hindi,gujarati;
clrscr();
printf("======================\n");
printf("=======call sevice======\n");
printf("======================\n");

printf("press 1 for english\n");
printf("press 2 for hindi\n");
printf("press 3 for gujarati\n");
printf("enter the number for specific language:");
scanf("%d",&choice);

switch(choice){
  case 1:
  printf("===##===\n");
  printf("===^^===\n");
  printf("\npress 1 for internet recharge");
  printf("\npress 2 for top-up recharge");
  printf("\npress 3 for special recharge");
  scanf("%d",&english);

  switch(english){
  case 1:
  printf("you have succesfully done internet recharge.........");
  break;

  case 2:
  printf("you have syccesfully done top-up recharge........");
  break;

  case 3:
  printf("you have succesfully done special recharge..........");
  break;

  default:
  printf("invalid choice....");
  break;
  }
  break;

  case 2:
  printf("_____________________\n");
  printf("\ninternet recharge ke liye 1 dabaye");
  printf("\ntop-up recharge ke liye 2 dabaye");
  printf("\nspecial recharge ke liye 3 dabaye");
  printf("\nenter your choice:");
  scanf("%d",&hindi);

  switch(hindi){

  case 1:
  printf("\napne safaltapurvak internet recharge kar liya he.....");
  break;

  case 2:
  printf("\napne safaltapurvak top-up recharge kar liya he....");
  break;

  case 3:
  printf("\napne safltapurvak special recharge kar liya he.....");
  break;

  default:
  printf("\napki choice amany he...");
  break;
  }
  break;


  case 3:
  printf("\n=========================================");
  printf("\ninternet recharge mate 1 dabayo");
  printf("\ntop-up recharge mate 2 dabayo");
  printf("\nspecial recarge mate 3 dabayo");
  printf("\ntamari psand nakho");
  scanf("%d",&gujarati);

  switch(gujarati){

  case 1:
  printf("\ntamaru internet recharge safaltapurvak thai gayu che....");
  break;

  case 2:
  printf("\ntamaru top-up recharge safaltapurvak thai gayu che...");
  break;

  case 3:
  printf("\ntamaru special recharge safaltapurvak thai gyu che....");
  break;

  default:
  printf("tamari pasand manny nathi");
  break;
  }

}
getch();
}

#include <stdio.h>
#include <time.h> //necessário para usar localtime() e struct tm
int main(void)
{
  struct tm *data_hora_atual;     
  time_t segundos; 
  time(&segundos);   
  data_hora_atual = localtime(&segundos);

  printf("\nDia..........: %d\n", data_hora_atual->tm_mday); 
  printf("\nMes..........: %d\n", data_hora_atual->tm_mon+1);
  printf("\nAno..........: %d\n\n", data_hora_atual->tm_year+1900);
  printf("\nDia do ano...: %d\n", data_hora_atual->tm_yday);  
  printf("\nDia da semana: %d\n\n", data_hora_atual->tm_wday);
  printf("\nHora ........: %d:",data_hora_atual->tm_hour);//hora   
  printf("%d:",data_hora_atual->tm_min);//minuto
  printf("%d\n",data_hora_atual->tm_sec);
  printf("\nData ........: %d/", data_hora_atual->tm_mday);//dia
  printf("%d/",data_hora_atual->tm_mon+1); //mês
  printf("%d\n\n",data_hora_atual->tm_year+1900); //ano
  
  return 0;
}
#include <stdio.h>

int main()
{
    float P, t;
    printf("¿Quieres una pizza vegetariana?(escribe 1 para Si o  2 para No)\n");
    scanf("%f",&P);

    if(P==1.0){printf("¿Que ingrediente deseas?\n Anota un 1 si quieres pimiento. \n Anota un 2 si quieres tofu.\n");
               scanf("%f",&t);}
               else if(P==2.0){printf("¿Que ingrediente deseas?\n Anota un 1 si quieres peperoni. \n Anota un 2 si quieres jamon.\n Anota un 3 si quieres salmon.\n");
                                scanf("%f",&t);}
                     else{printf("Valor invalido.\n");}

    if(P==1.0){
              if(t==1.0){printf("Tu pizza es vegetariana.\n");
                         printf("Tu pizza tiene pimiento.\n");
                         printf("Tu pizza tiene mozzarella.\n");
                         printf("Tu pizza tiene tomate.\n");}
               else if(t==2.0){printf("Tu pizza es vegetariana.\n");
                               printf("Tu pizza tiene tofu.\n");
                               printf("Tu pizza tiene mozzarella.\n");
                               printf("Tu pizza tiene tomate.\n");}
                    else {printf("No anotaste un valor valido para ingrediente por lo que solo llevara:\n");
                          printf("Mozzarella y tomate.\n");
                         }
              }
                       else if(P==2.0){
                                      if(t==1.0){printf("Tu pizza no es vegetariana.\n");
                                                 printf("Tu pizza tiene peperoni.\n");
                                                 printf("Tu pizza tiene mozzarella.\n");
                                                 printf("Tu pizza tiene tomate.\n");}
                                        else if(t==2.0){printf("Tu pizza no es vegetariana.\n");
                                                        printf("Tu pizza tiene jamon.\n");
                                                        printf("Tu pizza tiene mozzarella.\n");
                                                        printf("Tu pizza tiene tomate.\n");}
                                             else if(t==3.0){printf("Tu pizza no es vegetariana.\n");
                                                             printf("Tu pizza tiene salmon.\n");
                                                             printf("Tu pizza tiene mozzarella.\n");
                                                             printf("Tu pizza tiene tomate.\n");}
                                                else {printf("No anotaste un valor valido para ingrediente por lo que solo llevara:\n");
                                                      printf("Mozzarella y tomate.\n");
                                                     }
                                        }
                                        else{printf("No seleccionaste tipo de pizza.");
                                            }
  return 0;
}

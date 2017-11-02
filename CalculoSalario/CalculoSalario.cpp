#include<stdio.h>
#include <ctype.h>

 main(){

	float sal,imposto,sall,salg;
	int anos;
	char sexo;
	
	printf ("Digite o seu salario bruto: R$ ");
	scanf("%f",&sal);
	
	
	
	printf("\nDigite seu sexo <M/F>: ");
	scanf(" %c",&sexo);
sexo = toupper(sexo);

printf ("\nDigite quantos anos voce tem de servico: ");
	scanf("%d",&anos);

	
	printf("\n\n\n\n----------------IMPOSTO------------------------------------------\n\n\n");
	
	if ((sal>=200) && (sal<=450)){
	
	imposto=sal*0.03;
	
	printf("\nSeu imposto e de:R$%.2f",imposto);
}
	 else if((sal>450) && (sal<=700)){
	 	
	 	imposto=sal*0.08;
	 	printf("\nSeu imposto e de:R$%.2f",imposto);
	 }
	 	
	 	else if(sal>700){
	 		
	 		imposto=sal*0.12;
	 	printf("\nSeu imposto e de:R$%.2f",imposto);
	 		
	 		
		 }
	
	else{
	
	printf("\ninsento de imposto:R$%.2f",sal);
	
	
	
}

	printf("\n\n\n\n----------------GRATIFICACAO POR TEMPO DE SERVICO-------------------------------------\n\n\n");

if((sal > 500)&&(anos <= 3)&&(sexo =='M')){
        salg = (sal + 20);
        printf("\nBonus de: R$ 20.00");}
	else { if((anos > 3)&&(sexo =='M')&&(sal > 500)){

        salg = (sal + 30);
        printf("\nBonus de: R$ 30.00");
		}}
	if((salg > 500)&&(anos <= 3)&&(sexo =='F')){
        salg = (sal + 25);
        printf("\nBonus de: R$ 25.00");
    }
	else { if((anos > 3)&&(sexo =='F')&&(sal > 500)){
	
        salg = (sal + 40);
        printf("\nBonus de: R$ 40.00");
    }}
	if((sal <= 500)&&(anos <= 4)&&(sexo =='M')){
        salg = (sal + 23);
        printf("\nBonus de: R$ 23.00");}
	else { if((anos > 4)&&(sexo =='M')&&(sal <= 500)){

        salg = (sal + 35);
        printf("\nBonus de R$: 35.00");
    }}
	if((sal <= 500)&&(anos <= 4)&&(sexo =='F')){
        salg = (sal + 28);
        printf("\nBonus de R$: 28.00");
    }
	else { if((anos > 4)&&(sexo =='F')&&(sal <= 500)){
        salg = (sal + 33);
        printf("\nBonus de R$: 33.00");
    }}

	
	
	printf("\n\n\n\n----------------SALARIO LIQUIDO-------------------------------------\n\n\n");
	if((sal > 500)&&(anos <= 3)&&(sexo =='M')){
       sall=sal+20;
	sall-=sal*0.08;
	
	printf("\n\n\n\nSeu salario liquido: R$%.2f",sall);
	
	}
	
	else { if((anos > 3)&&(sexo =='M')&&(sall > 500)){

        sall=sal+30;
	sall-=sal*0.08;
	
	printf("\nSeu salario liquido: R$%.2f",sall);
		}}
	if((sal > 500)&&(anos <= 3)&&(sexo =='F')){
        
	
	sall=sal+25;
	sall-=sal*0.08;
	
	printf("\nSeu salario liquido: R$%.2f",sall);
    }
	else { if((anos > 3)&&(sexo =='F')&&(sal > 500)){
	
		
        sall=sal+40;
        sall-=sal*0.08;
	
	
	printf("\nSeu salario liquido: R$%.2f",sall);
    }}
	if((sal <= 500)&&(anos <= 4)&&(sexo =='M')){
        sall=sal+23;
	sall-=sal*0.08;
	
	printf("\nSeu salario liquido: R$%.2f",sall);
	}
        
        
	else { if((anos > 4)&&(sexo =='M')&&(sal <= 500)){

        	sall=sal+35;
	sall-=sal*0.08;
	
	printf("\nSeu salario liquido: R$%.2f",sall);
    }}
	if((sal <= 500)&&(anos <= 4)&&(sexo =='F')){
		
		
        sall=sal+28;
	sall-=sal*0.08;
	
	printf("\nSeu salario liquido: R$%.2f",sall);
	
    }
    
	else { if((anos > 4)&&(sexo =='F')&&(sal <= 500)){
        sall=sal+33;
	sall-=sal*0.08;
	
	printf("\nSeu salario liquido: R$%.2f",sall);
	
    }}
	
	
	printf("\n\n----------------------------CATEGORIA---------------------------------");

	if(sall <= 350)
	{
		printf("\n\nMAL REMUNERADO");
    
	}	else if ((sall > 350)&&(sall <= 600))
		{
            	printf("\n\nREMUNERACAO NORMAL");
    	}		
				else{
            		printf("\n\nBEM REMUNERADO");
         			}
	
	
		
	
	 return 0;
	
	
}

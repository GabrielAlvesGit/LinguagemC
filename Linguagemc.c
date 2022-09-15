printf("Informe seu Nome\n");
scanf("%s", &Nome);
printf("Informe o peso (em kgs):\n\n");
scanf("%d", &peso);
printf("nInforme a altura (em metros):\n\n");
scanf("%f", &altura);

imc = peso / (altura * altura);


if (imc < 20){
    printf(" (abaixo do peso)."); 
}
else if ((imc >= 20) && (imc < 25)){
    printf(" (peso normal).");
}
else if ((imc >= 25) && (imc < 30)){
    printf(" (acima do peso).");
}
else if ((imc >= 30) && (imc < 34)){
    printf(" (obeso).");
}
else{
	printf(" (muito obeso).");
}

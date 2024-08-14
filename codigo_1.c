# include <stdio.h> //standar input/output heater
float a;
float b;
void saludar();
void suma();
void multiplicacion();
void ingreseValor();
int main(){
    saludar();
    suma();
    multiplicacion();
    return 0;
}

void saludar(){
    printf("Hola, gente de electronica digital III\n");
}
void ingreseValor(){
    printf("ingrese el primer valor: \n");
    scanf("%f",&a);
    printf("ingrese el segundo valor:\n");
    scanf("%f",&b);

}
void suma(){
    ingreseValor();
    printf("El resultado de la suma es: %f \n",a+b);

}
void multiplicacion(){
    ingreseValor();
    printf("El resultado de la suma es: %f \n",a*b);
}


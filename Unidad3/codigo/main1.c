#include <stdio.h>
float calcularPromedioFinal(int nu);
float calcularACD();
float calcularAPE();
float calcularAA(); 
float calcularES();
int  main(){
    int numeroUnidades = 3;
    float promedioFinal;

    promedioFinal = calcularPromedioFinal(numeroUnidades);

    printf("Promedio Final %.2f\n", promedioFinal);
    printf("\n--- RESULTADOS DEL ESTUDIANTE ---\n");
    if(promedioFinal >= 7.0){
        printf("Estado: APROBADO\n");
    }else if( promedioFinal < 7 && promedioFinal >= 2.5){
        printf("Estado: SUPLETORIO\n");
    }else if(promedioFinal < 2.5){
        printf("Estado: REPROBADO\n");
    }

    return 0;
}
float calcularPromedioFinal( int nu){//3
    float notaUnidad;
    float notaSuma;
    float promFinal;

    for(int i=1; i<=nu; i++){ //Ingresa 3 veces
        printf("Unidad %i\n", i);

        notaUnidad = calcularACD() + calcularAPE() + calcularAA() + calcularES();
        printf("Promedio de la Unidad %i: %.2f\n", i, notaUnidad);
        notaSuma += notaUnidad;
    }
    promFinal = notaSuma / nu;  
    return promFinal;
}
float calcularACD(){
    int numActividades;
    float notaActividad;
    float notaAcumulativa;
    float notaPromedio;
    printf("Ingrese el numero de actividades en ACD: ");
    scanf("%i", &numActividades);

    notaAcumulativa = 0;

    for(int i=1; i<=numActividades; i++){

        printf("Ingrese la nota de la actividad %i: ", i);
        scanf("%f", &notaActividad);

        while (notaActividad < 0.0 || notaActividad > 10.0) {
            printf("Nota invalida. Ingrese nuevamente (0 - 10): "); 
            scanf("%f", &notaActividad); 
        }

        notaAcumulativa += notaActividad;

    }
    notaPromedio = notaAcumulativa / numActividades;
    notaPromedio = notaPromedio *0.2;
    return notaPromedio;
}
float calcularAPE(){    
    int numActividades;
    float notaActividad;
    float notaAcumulativa;
    float notaPromedio;
    printf("Ingrese el numero de actividades en APE: ");
    scanf("%i", &numActividades);

    notaAcumulativa = 0;

    for(int i=1; i<=numActividades; i++){

        printf("Ingrese la nota de la actividad %i: ", i);
        scanf("%f", &notaActividad);
        while (notaActividad < 0.0 || notaActividad > 10.0) {
            printf("Nota invalida. Ingrese nuevamente (0 - 10): "); 
            scanf("%f", &notaActividad); 
            
        }

        notaAcumulativa += notaActividad;

    }
    notaPromedio = notaAcumulativa / numActividades;
    notaPromedio = notaPromedio *0.25;
    return notaPromedio;

}
float calcularAA(){   
    int numActividades;
    float notaActividad;
    float notaAcumulativa;
    float notaPromedio;
    printf("Ingrese el numero de actividades en AA: ");
    scanf("%i", &numActividades);

    notaAcumulativa = 0;
       
    for(int i=1; i<=numActividades; i++){

        printf("Ingrese la nota de la actividad %i: ", i);
        scanf("%f", &notaActividad);
        while (notaActividad < 0.0 || notaActividad > 10.0) {
            printf("Nota invalida. Ingrese nuevamente (0 - 10): "); 
            scanf("%f", &notaActividad); 
            
        }
        notaAcumulativa += notaActividad;

    }
    notaPromedio = notaAcumulativa / numActividades;
    notaPromedio = notaPromedio *0.2;
    return notaPromedio;

}
float calcularES(){  
    float notaPortafolio;
    float notaABP;
    float ponderadoInterno;
    float notaPromedio;

    printf("Ingrese la nota de Portafolio digital (40 del ES): ");
    scanf("%f", &notaPortafolio);
    while (notaPortafolio < 0.0 || notaPortafolio > 10.0) {
        printf("Nota invalida. Ingrese nuevamente (0 - 10): "); 
        scanf("%f", &notaPortafolio); 
            
    }

    printf("Ingrese la nota de Actividad de Aprendizaje Basado en Problemas (60 del ES): ");
    scanf("%f", &notaABP);
    while (notaABP < 0.0 || notaABP > 10.0) {
        printf("Nota invalida. Ingrese nuevamente (0 - 10): "); 
        scanf("%f", &notaABP); 
            
    }

    ponderadoInterno = (notaABP * 0.6) + (notaPortafolio * 0.4);
    notaPromedio = (ponderadoInterno * 0.35) ;

    return notaPromedio;
}

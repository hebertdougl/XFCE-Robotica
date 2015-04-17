#define COMPRIMENTO 10.83
#define POTENCIA 75

int defineAngulo(int distancia){
    int total = distancia * 360;
    int angulo = total/COMPRIMENTO;
     
    return angulo;
}

void andarFrente(int distancia){
    int angulo = defineAngulo(distancia);
    RotateMotor(OUT_AC, POTENCIA, angulo);
}

void andarTras(int distancia){
    int angulo = defineAngulo(distancia);
    RotateMotor(OUT_AC, -POTENCIA, angulo);
}

int girar(int angulo){
    int converte = (38.5*angulo/180);

    return converte;
}

void virarEsquerda(int angulo){
    int distancia = girar(angulo);
    int anguloR = defineAngulo(distancia);

    RotateMotorEx(OUT_AC, POTENCIA, anguloR, -100, true, true);
}

void virarDireita(int angulo){
    int distancia = girar(angulo);
    int anguloR = defineAngulo(distancia);

    RotateMotorEx(OUT_AC, POTENCIA, anguloR, 100, true, true);
}

void baixarGarra(int angulo){
    RotateMotor(OUT_B, 50, angulo);
}

void levantarGarra(int angulo){
    RotateMotor(OUT_B, 50, -angulo);
}
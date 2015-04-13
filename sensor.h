#define NEAR 15 //cm

//usar sensor na porta 4
void sensorUltrassonico(){
    SetSensorLowspeed(IN_4);
    while(true){
        OnFwd(OUT_AC,50);
        while(SensorUS(IN_4)>NEAR);
        Off(OUT_AC);
        OnRev(OUT_AC,100);
        Wait(800);
    }
}
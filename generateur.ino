int source = 2;
int sortiesin = 10;
int sortiedds = 11; 
int sortiecr = 12;
int freq = 1;

void setup(){
    pinMode(source,OUTPUT);
    pinMode(sortiesin,OUTPUT);
}

void loop(){
    sinwave(freq);
}

void sinwave (freq) {
    ApplySignal(SIN_WAVE,sortiesin,freq);
}
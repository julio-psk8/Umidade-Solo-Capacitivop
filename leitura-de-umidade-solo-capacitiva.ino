/*
            SENSOR DE UMIDADE CAPACITIVA 
            DIA : 06-11-2023 
            TITULO: Leitura simples do sensor
             
*/

//-------------------------------------------------
//------ Variaveis Globais -----

int sensor = A0;


//-------------------------------------------------
//------ configuração inicial -----
void setup() {
  pinMode(sensor, INPUT);
  pinMode(13, OUTPUT);      // aciona led do arduino
  Serial.begin(9600);

  Serial.print("umidade de solo...");



}

void loop() {
  
  int rang = analogRead(sensor);
  Serial.println("Valor: ");
  Serial.println(rang);
  delay(250);


}

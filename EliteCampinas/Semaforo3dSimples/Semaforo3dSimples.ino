int verde1 = 2, amarelo1 = 3, vermelho1 = 4, verde2 = 5, amarelo2 = 6, vermelho2 = 7;

void setup() {
  pinMode(verde1, OUTPUT);
  pinMode(amarelo1, OUTPUT);
  pinMode(vermelho1, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(amarelo2, OUTPUT);
  pinMode(vermelho2, OUTPUT);

}

void loop() {
  digitalWrite(verde1, HIGH);
  digitalWrite(vermelho2, HIGH);
  delay(2000);
  digitalWrite(verde1, LOW);
  digitalWrite(amarelo1, HIGH);
  delay(1000);
  digitalWrite(amarelo1, LOW);
  digitalWrite(vermelho1, HIGH);
  digitalWrite(vermelho2, LOW);
  digitalWrite(verde2, HIGH);
  delay(2000);
  digitalWrite(verde2, LOW);
  digitalWrite(amarelo2, HIGH);
  delay(1000);
  digitalWrite(amarelo2, LOW);
  digitalWrite(vermelho1, LOW);
}

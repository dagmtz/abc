int number = 0, setPins[8] = {15, 4, 18, 19, 21, 22, 23} , matrixNumbers[10][7] = {{1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0}, {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1}, {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1}, {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0}, {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}}; 

void setup() {
  pinMode(5, INPUT);
  for(int i=0; i<7; i++) pinMode(setPins[i], OUTPUT);
}
void loop() {
  while(digitalRead(5)==HIGH);
  for(int i=0; i<7; i++) digitalWrite(setPins[i],matrixNumbers[number][i]);
  number = (number+1)%10; 
  while(digitalRead(5)==LOW);
}




// Pins {a, b,  c,  d,  e,  f,  g}

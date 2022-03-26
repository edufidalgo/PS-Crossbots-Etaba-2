/**
 * Função para avançar ou recuar, passando a potência e o sentido do motor.
 * Analizar como vai funcionar a ponte H para determinar como fazer pra ele recuar se for preciso.
 */
void andar(int pot, bool frente){
  if(!frente){
    pot *= -1;
  }
  digitalWrite(PORTAMOTOR1, pot);
  digitalWrite(PORTAMOTOR2, pot); 
}

/**
 * Funçao para girar, passando as potências para o motor.
 */
void girar(int pot1, int pot2){
  digitalWrite(PORTAMOTOR1, pot1);
  digitalWrite(PORTAMOTOR2, pot2);
}

/**
 * Funcao para girar pra direita.
 * Possivelmente dá pra melhorar passando por parâmetro a potência para o segundo motor.
 */
void girarPraDireita(int pot){
  girar(10, pot);
  
}

/**
 * Funcao para girar pra esquerda.
 * Possivelmente dá pra melhorar passando por parâmetro a potência para o segundo motor.
 */
void girarPraEsquerda(int pot){
  girar(pot, 10);
}

/**
 * Função para avançar, passando apenas a potÊncia do motor.
 */
void avancar(int pot){
  andar(pot, true);
}

/*
 * Função para recuar, passando apenas a potência do motor.
 */
void recuar(int pot){
  andar(pot, false);
}
/**
 * Função para parar.
 */
void parar(){
  avancar(0);
}

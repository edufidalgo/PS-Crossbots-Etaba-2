/**
 * Retorna o valor correspondente ao sensor, caso o sensor detecte algo.
 */
int verificaPresenca(int sensor) {
  int result = 0;
  if(digitalread(sensor))
      result=sensoresPresenca[sensor][1];

  return result;
}

/**
 * Verifica os sensores de presença (inimigo).
 * Possíveis valores de retorno:
 * = 100: Inimigo à frente.
 * > 100: Inimigo à direita.
 * < 100: Inimigo à esquerda.
 * = 0 : Inimigo não encontrado.
 */
int verificaPresenca() {
  int result = 0;
  for (int i = 0; i < 5; i++) {
    result += verificaPresenca(sensoresPresenca[i][0]);
  }
  return result;
}


/**
 * Retorna o valor correspondente ao sensor de borda, caso o sensor detecte algo.
 */
int verificaBorda(int sensor){
  int result = 0;
  if(digitalRead(sensor)){
    result = sensoresBorda[sensor][1];
  }
  return result;
}

/**
 * Verifica os sensores de borda (segurança).
 * Possíveis valores de retorno:
 * > 0: Borda da frente detectada.
 * < 0: Borda de trás detectada.
 * = 0: Nenhuma borda detectada.
 */
int verificaBorda(){
  int result = 0;
  for(int i = 0; i < 4; i++){
    result += verificaBorda(sensoresBorda[i][0]);
  }
  return result;
}

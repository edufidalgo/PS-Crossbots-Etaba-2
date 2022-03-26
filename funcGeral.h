#include "config.h"
#include "funcMotor.h"
#include "funcSensor.h"
/**
  Função para verificar se os sensores acharam borda.
*/
boolean achouBorda() {
  //Inicializa variável de retorno.
  boolean result = true;
  //Obtém a leitura dos sensores.
  valorBorda = verificaBorda();
  //Se o sensor de trás foi acionado.
  if (valorBorda < 0) {
    //Anda pra frente
    avancar(255);
    //Se o sensor da frente foi acionado.
  } else if (valorBorda > 0) {
    //Anda pra trás.
    recuar(255);
  }
  //Caso nenhum dos sensores tenha sido acionado.
  else {
    //Atualiza variável de retorno.
    result = false;
  }
  return result;
}

/**
   Função para verificar se os sensores de inmigo detectou algo.
*/
boolean achouInimigo() {
  valorPresenca = verificaPresenca();

  if(valorPresenca != 0)
    boolean result = true;
  else
    result = false;
  // termine esse codigo
  return result;
}

/**
 * Funcao para rodar todo o funcionamento do sistema.
 */
void Main(){

  if (!achouBorda()) {

    if (!achouInimigo()) {
        girarPraEsquerda(150);
    }
    else
    {
      boolean inimigoPraDireita;
      if(verificaPresenca() < 100)
        inimigoPraDireita = 0;

      if (inimigoPraDireita) {
        girarPraEsquerda(150);
      }

      else if (!inimigoPraDireita) {
        girarPraDireita(150);
      }
      recuar(255);
    }
  }
}

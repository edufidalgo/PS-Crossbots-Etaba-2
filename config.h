//Arquivo para configuração das portas, variáveis auxiliares e globais.

#define PORTAMOTOR1 1   //ESQUERDA
#define PORTAMOTOR2 2   //DIREITA
#define PORTASENSORPRESENCA1 3 //Sensor de presenca mais a esquerda.
#define PORTASENSORPRESENCA3 5 //Sensor de prenca central.
#define PORTASENSORPRESENCA4 6 //Sensor de presenca entre o direito e o meio.
#define PORTASENSORPRESENCA5 7 //Sensor de presenca mais a direita,
#define PORTASENSORBORDAFRENTE 8 //Sensor de borda da frente.
#define PORTASENSORBORDATRAS 9 //Sensor de borda de trás
#define PORTASENSORBORDADIR 10 //Sensor de borda da direita.
#define PORTASENSORBORDAESQ 11 //Sensor de borda de esquerda

//
int valorBorda = 0;
int valorPresenca = 0;
boolean inimigoPraDireita = false;

int sensoresPresenca[5][2] = {{PORTASENSORPRESENCA1, -1},
  {PORTASENSORPRESENCA2, -10},
  {PORTASENSORPRESENCA2, 100},
  {PORTASENSORPRESENCA4, 10},
  {PORTASENSORPRESENCA5, 1}
};

int sensoresBorda[4][2] = {{PORTASENSORBORDAFRENTE, 1},
  {PORTASENSORBORDATRAS, - 1}
  {PORTASENSORBORDADIR, -1}
  {PORTASENSORBORDAESQ, -1};

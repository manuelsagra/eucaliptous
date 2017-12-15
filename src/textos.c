#include "textos.h"

const u8 *statuses[STATUSES];
const u8 *headers[TEXT_ITEMS];
const u8 *texts[TEXT_ITEMS];

const u8 options[TEXT_ITEMS][4] = {
	{2, 3, 255, 255},
	{5, 4, 255, 255},
	{5, 4, 255, 255},
	{5, 255, 255, 255},
	{7, 6, 255, 255},
	{0, 255, 255, 255},
	{8, 11, 255, 255},
	{10, 9, 255, 255},
	{0, 255, 255, 255},
	{11, 255, 255, 255},
	{12, 13, 255, 255},
	{0, 255, 255, 255}
};

void ec_initTexts() {
	headers[0] = "�LLEG� EL GRAN D�A?";
	headers[1] = "ALGO EXTRA�O OCURRE EN LA PANTALLA";
	headers[2] = "FAN DE POK�MON";
	headers[3] = "ES OPQA Y LO SABES";
	headers[4] = "COMIENZAN LOS PROBLEMAS";
	headers[5] = "LA CAGASTES BURT LANCASTER";
	headers[6] = "�QU� PASA TRON?";
	headers[7] = "NUNCANUNKA STUDIOS";
	headers[8] = "ESCLAVO DIGITAL";
	headers[9] = "POR LOS PELOS";
	headers[10] = "VIEJO ARCHIVERO";
	headers[11] = "EN LA C�RCEL";

	texts[0] = "  Acabas de recibir el paquete que llevabas esperando durante varios d�as. Lo abres y descubres la edici�n f�sica del juego del que todo el mundo habla: \"EUCALIPTOUS\".\n\n  Sacas la cinta de la caja, la introduces en tu CPC y te dispones a cargar el juego.\n\n\n� Esperas pacientemente a que cargue.\n\n� Vas a la cocina a preparar un bocata\n  de Nocilla.";
	texts[1] = "  Ves como aparece una pantalla de presentaci�n en la que hay cosas que no te cuadran. Parece que hay m�s colores de los que soporta tu CPC 464 y la carga se te pasa en un suspiro.\n\n  Aparece el men� y decides qu� hacer a continuaci�n...\n\n\n� Das directamente al bot�n del joystick\n  para empezar.\n\n� Redefines teclas para jugar con\n  teclado.";
	texts[2] = "  Abres el bote de Nocilla que compraste con dibujos de Pok�mon. Mientras piensas lo maravilloso que ser�a tener pareja y ser padre alg�n d�a, vas untando una generosa cantidad de Nocilla en el pan.\n\n  Vuelves y ves que el juego ya est� cargado.\n\n\n� Das directamente al bot�n del joystick\n  para empezar.\n\n� Redefines teclas para jugar con\n  teclado.";
	texts[3] = "  A tus cuarenta y pico a�os ya te sientes m�s c�modo jugando con el teclado que usando un joystick. El juego te pregunta qu� teclas quieres usar para izquierda, derecha, arriba, abajo y disparo y no dudas en introducir la secuencia OPQA y la barra espaciadora.\n\n\n� Pulsas la barra espaciadora para\n  empezar.";
	texts[4] = "  Despu�s de que suene una simp�tica melod�a, comienza el juego. Sin embargo, los gr�ficos de la pantalla empiezan a corromperse de forma extra�a y sientes como tu cuerpo empieza a ser absorbido a trav�s del monitor del ordenador.\n\n\n� Como has visto TRON doscientas veces\n  te dejas llevar.\n\n� Entras en p�nico y decides salir\n  corriendo de la habitaci�n a pedir\n  ayuda.";
	texts[5] = "  Te crees muy listo, pero todo el mundo sabe que una vez que empieza una movida de estas no hay que cruzar los rayos ni hacer nada raro. �Acaso eras de los que usabas el ordenador normalmente cu�ndo grababas un CD? �EST�S LOCO?\n\n\n� Volver a empezar...";
	texts[6] = "  No sabes si los programadores de este juego son los primos de Satan�s o si el de Correos ha metido el paquete en uranio enriquecido, pero el caso es que has aparecido dentro de una especie de universo digital.\n\n  A la izquierda ves un edificio extra�o y a tu lado hay un viejete con pinta entra�able.\n\n\n� Te dirijes al edificio.\n\n� Hablas con el viejete.";
	texts[7] = "  Entras en las oficinas de lo que parece una compa��a de videojuegos. Ves a un currante picando c�digo sin parar y a un tipo muy extra�o que no para de sonreir.\n\n  El tipo se te acerca y te dice: \"Hola amigo, soy Paco Encinas y tengo planeada una saga de juegos que LO VA A PETAR. �Quieres ser colaborador nuestro?\"\n\n\n� Sales escopetado como si no hubiese\n  ma�ana.\n\n� Ya que no tienes nada que hacer en\n  este mundo, aceptas encantado.";
	texts[8] = "  Paco Encinas te pasa el brazo por encima del hombro y te empieza a comer la cabeza con unos proyectos que parece que est�n a punto de caramelo.\n\n  Cuarenta a�os despu�s sigues \"echando un cable\" a Paco en el cuarto proyecto, sin haber terminado el primero.\n\n\n� Como en casa no se est� en ning�n\n  sitio...";
	texts[9] = "  Algo no te ol�a bien y le dices a Paco que luego vuelves...\n\n  Regresas al lugar donde apareciste y piensas que a lo mejor es una buena idea hablar con el viejete.\n\n\n� Hablar con el viejete.";
	texts[10] = "  El viejete te mira de arriba abajo y te dice:\n\n  -T� no eres de por aqu�, joven.\n\n  Piensas que a lo mejor este viejete puede ayudarte...\n\n\n� Le cuentas lo que te ha pasado.\n\n� Le dices que eres un aventurero y que\n  necesitas alguna pista.";
	texts[11] = "  Cuando le cuentas lo que te ha ocurrido te toma por un loco y empieza a llamar a la polic�a a gritos.\n\n  Los cuerpos de seguridad te apresan y te meten en la c�rcel indefinidamente por considerarte un loco peligroso...\n\n\n� \"Beam me up, Scotty\"";

	statuses[0] = "Elige... sabiamente";
	statuses[1] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
}
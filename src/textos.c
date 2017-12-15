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
	headers[0] = "¿LLEGÓ EL GRAN DÍA?";
	headers[1] = "ALGO EXTRAÑO OCURRE EN LA PANTALLA";
	headers[2] = "FAN DE POKÉMON";
	headers[3] = "ES OPQA Y LO SABES";
	headers[4] = "COMIENZAN LOS PROBLEMAS";
	headers[5] = "LA CAGASTES BURT LANCASTER";
	headers[6] = "¿QUÉ PASA TRON?";
	headers[7] = "NUNCANUNKA STUDIOS";
	headers[8] = "ESCLAVO DIGITAL";
	headers[9] = "POR LOS PELOS";
	headers[10] = "VIEJO ARCHIVERO";
	headers[11] = "EN LA CÁRCEL";

	texts[0] = "  Acabas de recibir el paquete que llevabas esperando durante varios días. Lo abres y descubres la edición física del juego del que todo el mundo habla: \"EUCALIPTOUS\".\n\n  Sacas la cinta de la caja, la introduces en tu CPC y te dispones a cargar el juego.\n\n\nä Esperas pacientemente a que cargue.\n\në Vas a la cocina a preparar un bocata\n  de Nocilla.";
	texts[1] = "  Ves como aparece una pantalla de presentación en la que hay cosas que no te cuadran. Parece que hay más colores de los que soporta tu CPC 464 y la carga se te pasa en un suspiro.\n\n  Aparece el menú y decides qué hacer a continuación...\n\n\nä Das directamente al botón del joystick\n  para empezar.\n\në Redefines teclas para jugar con\n  teclado.";
	texts[2] = "  Abres el bote de Nocilla que compraste con dibujos de Pokémon. Mientras piensas lo maravilloso que sería tener pareja y ser padre algún día, vas untando una generosa cantidad de Nocilla en el pan.\n\n  Vuelves y ves que el juego ya está cargado.\n\n\nä Das directamente al botón del joystick\n  para empezar.\n\në Redefines teclas para jugar con\n  teclado.";
	texts[3] = "  A tus cuarenta y pico años ya te sientes más cómodo jugando con el teclado que usando un joystick. El juego te pregunta qué teclas quieres usar para izquierda, derecha, arriba, abajo y disparo y no dudas en introducir la secuencia OPQA y la barra espaciadora.\n\n\nä Pulsas la barra espaciadora para\n  empezar.";
	texts[4] = "  Después de que suene una simpática melodía, comienza el juego. Sin embargo, los gráficos de la pantalla empiezan a corromperse de forma extraña y sientes como tu cuerpo empieza a ser absorbido a través del monitor del ordenador.\n\n\nä Como has visto TRON doscientas veces\n  te dejas llevar.\n\në Entras en pánico y decides salir\n  corriendo de la habitación a pedir\n  ayuda.";
	texts[5] = "  Te crees muy listo, pero todo el mundo sabe que una vez que empieza una movida de estas no hay que cruzar los rayos ni hacer nada raro. ¿Acaso eras de los que usabas el ordenador normalmente cuándo grababas un CD? ¿ESTÁS LOCO?\n\n\nä Volver a empezar...";
	texts[6] = "  No sabes si los programadores de este juego son los primos de Satanás o si el de Correos ha metido el paquete en uranio enriquecido, pero el caso es que has aparecido dentro de una especie de universo digital.\n\n  A la izquierda ves un edificio extraño y a tu lado hay un viejete con pinta entrañable.\n\n\nä Te dirijes al edificio.\n\në Hablas con el viejete.";
	texts[7] = "  Entras en las oficinas de lo que parece una compañía de videojuegos. Ves a un currante picando código sin parar y a un tipo muy extraño que no para de sonreir.\n\n  El tipo se te acerca y te dice: \"Hola amigo, soy Paco Encinas y tengo planeada una saga de juegos que LO VA A PETAR. ¿Quieres ser colaborador nuestro?\"\n\n\nä Sales escopetado como si no hubiese\n  mañana.\n\në Ya que no tienes nada que hacer en\n  este mundo, aceptas encantado.";
	texts[8] = "  Paco Encinas te pasa el brazo por encima del hombro y te empieza a comer la cabeza con unos proyectos que parece que están a punto de caramelo.\n\n  Cuarenta años después sigues \"echando un cable\" a Paco en el cuarto proyecto, sin haber terminado el primero.\n\n\nä Como en casa no se está en ningún\n  sitio...";
	texts[9] = "  Algo no te olía bien y le dices a Paco que luego vuelves...\n\n  Regresas al lugar donde apareciste y piensas que a lo mejor es una buena idea hablar con el viejete.\n\n\nä Hablar con el viejete.";
	texts[10] = "  El viejete te mira de arriba abajo y te dice:\n\n  -Tú no eres de por aquí, joven.\n\n  Piensas que a lo mejor este viejete puede ayudarte...\n\n\nä Le cuentas lo que te ha pasado.\n\në Le dices que eres un aventurero y que\n  necesitas alguna pista.";
	texts[11] = "  Cuando le cuentas lo que te ha ocurrido te toma por un loco y empieza a llamar a la policía a gritos.\n\n  Los cuerpos de seguridad te apresan y te meten en la cárcel indefinidamente por considerarte un loco peligroso...\n\n\nä \"Beam me up, Scotty\"";

	statuses[0] = "Elige... sabiamente";
	statuses[1] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
}
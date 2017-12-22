#include "textos.h"

const u8 *statuses[STATUSES];
const u8 *headers[TEXT_ITEMS];
const u8 *texts[TEXT_ITEMS];

const u8 options[TEXT_ITEMS][4] = {
	{2, 3, 255, 255},
	{5, 4, 255, 255},
	{4, 5, 255, 255},
	{5, 255, 255, 255},
	{6, 7, 6, 255},
	{0, 255, 255, 255},
	{8, 11, 255, 255},
	{10, 9, 255, 255},
	{0, 255, 255, 255},
	{11, 255, 255, 255},
	{12, 13, 255, 255},
	{0, 255, 255, 255},
	{14, 15, 8, 255},
	{17, 16, 18, 255},
	{19, 20, 255, 255},
	{21, 15, 255, 255},
	{0, 255, 255, 255},
	{17, 16, 255, 255},
	{0, 255, 255, 255},
	{0, 255, 255, 255},
	{15, 22, 255, 255},
	{0, 255, 255, 255}
};

void ec_initTexts() {
	headers[0] = "EL DÍA DEL UNBOXING";
	headers[1] = "ALGO EXTRAÑO OCURRE EN LA PANTALLA";
	headers[2] = "FAN DE POKÉMON";
	headers[3] = "ES OPQA Y LO SABES";
	headers[4] = "COMIENZAN LOS PROBLEMAS";
	headers[5] = "LA CAGASTE... BURT LANCASTER";
	headers[6] = "¿QUÉ PASA TRON?";
	headers[7] = "NUNCANUNKA STUDIOS";
	headers[8] = "ESCLAVO DIGITAL";
	headers[9] = "POR LOS PELOS";
	headers[10] = "VIEJO ARCHIVERO";
	headers[11] = "EN LA CÁRCEL";
	headers[12] = "LOS CÁRPATOS";
	headers[13] = "HORA DE AVENTURAS LLEGÓ";
	headers[14] = "BUSCÁNDOTE LA VIDA...";
	headers[15] = "ERES UN HÉROE";
	headers[16] = "COBARDE, PECADORRR";
	headers[17] = "EL MILENARISMO VA A LLEGAR";
	headers[18] = "GOLPE DE... ¿SUERTE?";
	headers[19] = "LA CURIOSIDAD MATÓ AL GATO...";
	headers[20] = "SIEMPRE TIENEN QUE DECIRLO";
	headers[21] = "SOY VEGANO";

	texts[0] = "  Acabas de recibir un paquete que llevabas esperando durante varios días. Lo abres con ilusión y por fin contemplas el juego del que todo el mundo habla: \"EUCALIPTOUS\".\n\n  Sacas la cinta de la caja, la introduces en tu CPC y te dispones a cargar el juego.\n\n\nä Esperas pacientemente a que cargue.\n\në Vas a la cocina a preparar un bocata\n  de Nocilla.";
	texts[1] = "  Ves como aparece una pantalla de presentación en la que hay cosas que no te cuadran. Parece que hay más colores de los que soporta tu CPC 464 y la carga te ha parecido demasiado rápida.\n\n  Aparece el menú y piensas qué hacer a continuación...\n\n\nä Das directamente al botón del joystick\n  para empezar.\n\në Redefines teclas para jugar con\n  teclado.";
	texts[2] = "  Abres el bote de Nocilla que compraste con dibujos de Pokémon. Mientras piensas lo maravilloso que sería tener pareja y ser padre algún día, vas untando una generosa cantidad de Nocilla en el pan.\n\n  Vuelves a la habitación y ves que el juego ya está cargado.\n\n\nä Redefines teclas para jugar con\n  teclado.\n\në Pulsas el botón del joystick para\n  empezar.";
	texts[3] = "  A tus cuarenta y pico años ya te sientes más cómodo jugando con el teclado que usando un joystick.\n\n  El juego te pregunta qué teclas quieres usar para izquierda, derecha, arriba, abajo y disparo y no dudas en introducir la secuencia OPQA y la barra espaciadora.\n\n\nä Pulsas la barra espaciadora para\n  empezar.";
	texts[4] = "  Después de que suene una enigmática melodía, comienza el juego. Sin embargo, los gráficos de la pantalla empiezan a corromperse de forma extraña y sientes como tu cuerpo empieza a ser absorbido a través del monitor del ordenador.\n\n\nä Entras en pánico y sales corriendo de\n  la habitación a pedir ayuda.\n\në Como has visto TRON doscientas veces,\n  te dejas llevar.\n\nï Tiras del cable de alimentación en un\n  intento desesperado por salvarte.";
	texts[5] = "  Te crees muy listo, pero tu cuerpo desaparece con un simpático \"puf\". Pareces estar un poco muerto.\n\n  Todo el mundo sabe que una vez que empieza una movida de estas no hay que cruzar los rayos ni hacer nada raro. ¿Acaso eras de los que usaba el ordenador normalmente cuándo se estaba grabando un CD? ¿ESTÁS LOCO?\n\n\nä Pues nada, otra vez a empezar...";
	texts[6] = "  No sabes si los programadores de este juego son los primos de Satanás o si el de Correos ha metido el paquete en uranio enriquecido, pero el caso es que tu cuerpo y tu mente se han transportado a una especie de universo digital.\n\n  A la izquierda ves un edificio con una forma peculiar y a tu lado hay un viejete con pinta entrañable.\n\n\nä Te diriges al edificio.\n\në Hablas con el viejete.";
	texts[7] = "  Entras en las oficinas de lo que parece una compañía de videojuegos. Ves a un currante picando código sin parar y a un tipo muy extraño que no para de sonreír.\n\n  El tipo se te acerca y te dice: \"Hola amigo, soy Paco Encinas y tengo planeada una saga de juegos que LO VA A PETAR. ¿Quieres ser colaborador nuestro?\"\n\nä Sales escopetado como si no hubiese\n  mañana.\n\në Ya que no tienes nada que hacer en\n  este mundo, aceptas la oferta.";
	texts[8] = "  Paco Encinas te pasa el brazo por encima del hombro y te empieza a comer la cabeza con unos proyectos que parece que están a punto de caramelo.\n\n  Cuarenta años después sigues \"echando un cable\" a Paco en el cuarto proyecto, sin haber terminado el primero.\n\n\nä Como en casa no se está en ningún\n  sitio...";
	texts[9] = "  Algo no te olía bien y le dices a Paco que luego vuelves...\n\n  Regresas al lugar donde apareciste y piensas que a lo mejor es una buena idea hablar con el viejete.\n\n\nä Vas a hablar con el viejete.";
	texts[10] = "  El viejete te mira de arriba abajo y te dice:\n\n  - Tú no eres de por aquí, joven.\n\n  Piensas que a lo mejor este viejete puede ayudarte...\n\n\nä Le cuentas lo que te ha pasado.\n\në Le dices que eres un aventurero y que\n  necesitas alguna pista.";
	texts[11] = "  Cuando le cuentas lo que te ha ocurrido te toma por un loco y empieza a llamar a la policía a gritos.\n\n  Los cuerpos de seguridad te apresan y te meten en la cárcel indefinidamente por considerarte un peligro para la sociedad de este extraño mundo...\n\n\nä Ala, a ver el logo del juego otra vez.";
	texts[12] = "  Le dices al viejete que eres un aventurero que se ha perdido y observas como empiezan a brillarle los ojos.\n\n  - Me recuerdas a mí cuando era joven en los Cárpatos. Ve hacia ese parque y quizás encuentres tu camino...\n\n\nä Vas hacia el parque.\n\në Decides buscarte la vida por ti mismo.\n\nï A lo mejor lo del edificio no era mala\n  idea.";
	texts[13] = "  En el parque ves a una chica acosada por un tipo que no parece muy normal, y de hecho te recuerda ligeramente a Gollum.\n\n  No parece muy fuerte, así que seguramente no te supondrá ningún problema conseguir que deje de molestar a la chica.\n\nä No es tu problema.\n\në Ayudas a la chica sin dudarlo.\n\nï Te acercas sigilosamente para escuchar\n  bien lo que está diciendo.";
	texts[14] = "  Vas dando tumbos por la ciudad en busca de algo que te ayude a volver... sin mucha suerte. Sin embargo, en unos cubos de basura oyes unos ruidos extraños al pasar cerca de ellos.\n\n\nä Pasas de largo, ya has tenido\n  demasiadas sorpresas por hoy.\n\në La curiosidad puede contigo y te\n  acercas a los cubos de basura.";
	texts[15] = "  Te acercas decididamente a ayudar a la chica y el hombrecillo al verte sale corriendo despavorido mientras te grita \"¡sinvergüenza!\". La chica te mira agradecida y te dice:\n\n  - Gracias por librarme de este brasas, no sabía qué hacer para que me dejase en paz. Si quieres te invito a tomar algo...\n\n\nä Aceptas la invitación de buena gana.\n\në Prefieres seguir buscándote la vida\n  por tu cuenta.";
	texts[16] = "  Aunque piensas que tampoco es para tanto y que la chica puede arreglárselas ella sola, de repente el tipo se gira, centra en ti su mirada y se acerca rápidamente.\n\n  Pasan los minutos, las horas y los días y te sigue dando la murga con las bondades de su ordenador favorito y de cómo la gente lo ha ignorado durante estos años. Mueres de aburrimiento. Literalmente.\n\n\nä Vuelve a empezar cuando tengas algo de\n  coraje.";
	texts[17] = "  Acercándote un poco escuchas que el tipo no es realmente un acosador, sino un brasas de cuidado:\n\n  - No tienes ni idea. Mi máquina fue la más vendida. Es un complot. La gente no tiene ni idea. ¡NO TENÉIS NI IDEA!\n\n\nä Crees que es mejor no complicarte la\n  vida.\n\në Salvas a la chica de la turra.";
	texts[18] = "  El día ya ha estado demasiado movido y decides pasar de largo. Sin embargo, te descuidas, tropiezas y caes al suelo.\n\n  Al abrir los ojos, te das cuenta de que estás en tu habitación, con las teclas de tu CPC marcadas en la cara y que son las tantas de la noche.\n\n  El kilo de torreznos que te habías tomado para merendar te ha pasado factura.\n\n\nä ¿Final feliz?";
	texts[19] = "  Al acercarte a los cubos de basura, ves que alguien ha abandonado un gatito. Te da pena y te acercas a cogerlo, pero se te olvida que en este mundo digital las reglas no tienen que ser como en el \"de verdad\".\n\n  El gato abre la boca y te engulle como si fueses un canario. Mala suerte, vaquero.\n\n\nä Maldita sea, si yo odiaba a los\n  gatos...";
	texts[20] = "  La chica te lleva a un bar cercano y tomáis unas cervezas. Eso sí, lo malo es que en este mundo sólo tienen San Miguel.\n\n  Para colmo, pasado un rato, te suelta LA BOMBA:\n\n  - ¿Sabes qué? Soy vegana.\n\n\nä Te disculpas para ir al baño y te\n  escapas del bar.\n\në No te importa y sigues adelante con la\n  conversación.";
	texts[21] = "  Una cosa lleva a la otra, y al final te casas con la chica en este mundo extraño que te ha tocado vivir.\n\n  Se acabaron los videojuegos retro, los torreznos, sólo bebes San Miguel y os guiais por el Método Ogino, pero los ocho hijos que habéis tenido (y el que está en camino) lo compensan con creces.\n\n\nä ¿Hace otra partidita?";

	statuses[0] = "Elige... sabiamente";
	statuses[1] = "O elige lo que sea, pero elige algo";
	statuses[2] = "También puedes no elegir";
	statuses[3] = "Pero esto sería bastante aburrido";
	statuses[4] = "Aunque a lo mejor a ti te gusta eso";
	statuses[5] = "Oye, que yo lo entiendo, ¿eh?";
	statuses[6] = "Si lees esto es que te aburres mazo";
	statuses[7] = "A lo mejor piensas que daré pistas";
	statuses[8] = "A ver si realmente lees esto...";
	statuses[9] = "¡Caca, culo, pedo, pis!";
	statuses[10] = "Eso no te lo esperabas, ¡eh pillín!";
	statuses[11] = "Bueno, creo que te tengo que dejar";
	statuses[12] = "Que me ha entrado un apretón";
	statuses[13] = "Bufff, creo que no voy a llegar...";
	statuses[14] = "Falsa alarma, al final me dio tiempo";
	statuses[15] = "Eso sí, no vayas al baño en un rato";
	statuses[16] = "Si lees esto eres un poco cansino";
	statuses[17] = "A lo mejor te crees muy gracioso";
	statuses[18] = "Eso o es que te aburres DE VERDAD";
	statuses[19] = "Que el juego este es cortito leñe";
	statuses[20] = "Deja de dar vueltecitas y acaba YA";
	statuses[21] = "Te prometo que cuelgo el CPC, ¿eh?";
	statuses[22] = "Pues ala, vuelvo a empezar...";
}
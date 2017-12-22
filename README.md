# EucaliptouS

Juego en formato "Elige tu propia aventura" programadado para Amstrad CPC. Participante en el [concurso Aventura 2017 de Bytemaniacos](http://www.bytemaniacos.com/?page_id=3473).

## Tecnología

El juego hace uso de la [CPCtelera](http://lronaldo.github.io/cpctelera/) de [Fran Gallego](https://twitter.com/FranGallegoBR), que simplifica enormemente el desarrollo para este ordenador de 8 bits.

Para generar el array de textos, hay un projecto Maven que convierte un fichero de texto con un formato sencillo en un fichero .c y otro .h.

El fichero makecdt.sh genera el fichero de cinta con la pantalla de carga, ya que no he modificado el Makefile por defecto.
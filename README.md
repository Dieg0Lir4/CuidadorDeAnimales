# AsistenteParaCrearUnEquipoPokemon

#### Problema
El problema radica en que hay varios jugadores de Pokemon que no tienen ni la menor idea de como crear un equipo decente en pokemon. Esto se debe a que desconocen varias de las mecánicas de Pokemon, una de ellas siendo los ataques super efectivos. Este programa ayudará a que los usuarios puedan meter a su equipo y el programa les dirá contra qué tipo de pokemon su equipo es débil y de esa manera poder ajustarlo a un equipo mejor.

#### Que tiene que hacer el programa
El programa debe de ser capaz de recibir los datos necesarios para cada pokémon. En estos datos debe incluirse, el tipo del pokémon, su nombre, su nivel, sus estadísticas, si es shiny, su habilidad y si tiene un segundo tipo. Debe de ser capaz de recibir hasta 6 pokemons, pues es el máximo que puede tener un jugador en su party. Una vez llenada la party el programa debe poder calcular las debilidades de cada pokemon y de esa manera regresarle al jugador la información de contra qué tipo de pokemons su equipo es débil.

#### Como se usa
Al iniciar el programa se te pedirá que ingreses los datos necesarios de los 6 pokémon en tu party, habrá partes en donde podrás decirle al programa que las llene por ti, de no ser así, las respuestas que tecles tienen que ser exactamente iguales a las opciones que te da el programa. Una vez terminado de llenar los datos de los 6 pokemons, podrás pedirle que calcule la debilidad de tu equipo. Ahora ya hay más funciones, ya puedes reajustar los datos de tu pokémon y pedirle al programa que te imprima las estadísticas de los pokemons, además de decirte que pokemon tienes en la party.
Pronto podrás ponerle movimientos a tus pokemons y tener más parties


#### Correciones
Agregue las funciones para imprimir los datos de los pokemons y para poder reajustar los datos de un pokemon por si te equivocaste

### SUPER IMPORTANTE
A la hora de crear a tu pokemon escribe tal cual como dice el programa que se escribe o si no no funcionara el programa.

## COMPETENCIAS

### SICT0302A
Se encuentran en el archivo PokemonUML.png

### SICT0303A
### (constructores, getters, setters)
Hay varios getters, constructores y setter
Contructores: puedes encontrar unos ejemplos en “Pokemon.h” línea 20 a 28, línea 30 a 39 o línea 143 a 146
Setter y Getter: Puedes encontrarlos en “Stadistics.h” de la línea 40 a 87

### (Encapsulamiento)
El ejemplo más claro es en “Stadistics.h” de la línea 8 a 87, todo está encapsulado ya sea en private o public.

### (Herencia)
La herencia la puedes encontrar en “Pokemon.h” de la línea 131 a la linea 178, donde se crea la clase hija Captured de la clase padre Pokemon

### (Composición o agregación)
La composición se encuentra en “Pokemon.h” línea 14 o en la línea 27 o 37, en donde se crea un objeto de la clase “Stadistics” y si se borra el objeto pokémon también el objeto stadistics.

La agregación está en “Party.h” en las líneas 249 a 256 en donde recibe objetos de la clase Pokemon, pero si yo borro el objeto party, no se borran los objetos pokemons, porque party solo hace referencia a estos y no los puede afectar. 


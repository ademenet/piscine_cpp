# Learning C++ 11

Here is some notes about my C++ learning, in **french**.

### namespace

Le symbole `::` permet de créer ou accéder à un nouveau scope.

Par exemple, la std est souvent utilisé :

``` c++
std::cout
```

### this

Permet d'accéder aux attributs membres, c'est à dire qui sont instanciées.

### initialization list

Permet d'initialiser des attributs directement avec le constructeur.

``` c++
// Constructeur:
Sample::Sample( void var2 ): var1(var2) {
	...
}
```

Va stocker var2 ---> var1.

### const

Pour un attribut : comme en C.
Pour une fonction : veut dire qu'elle ne modifie aucune variable du scope.

Bon usage : faire en sorte de l'utiliser le plus souvent possible car cela permet, si on fait des modifications, d'éviter de tout casser.

### class vs Struct

Une structure est toujours _public_ par défaut (si on ne précise pas de visibility), alors qu'une class est _private_ par défaut.

### accessors

Ce sont juste des fonctions qui débutent par `get` ou `set` et qui permettent d'accéder à des attributs de manière contrôlée et sûre.

### static

Le mot clé `static` permet de définir si on travaille au niveau de l'instance ou de la class. C'est à peu près le même concept qu'en C.

On parle de _membres_ pour les variables et fonctions d'instances, et de _non-membres_ pour les variables et fonctions de classe. Qu'est ce que ça change ? Pour les membres, il faut instancier une class pour pouvoir accéder à ces attibuts et méthodes. Ils sont donc unique.

Pour une fonction non-membre on ne peut pas assigner de pointeur `this` car on ne possède pas dans ce scope l'adresse de l'instance (puisqu'on se trouve au niveau de la class et pas des instances).

Il faut ne pas oublier d'initialiser les attributs non-membres dans le fichier `cpp`.

### mutable

`mutable` est un mot clé qui permet de signifier qu'une fonction `const` peut modifier cette variable.

(Un _mutateur_ désigne une fonction capable de modifier un attribut privé.)

### pointeurs

Comme en C on a des pointeurs de tout types. Attention à en pas se perdre là-dessus : pointeurs sur membres, pointeurs sur non-membres, etc. Il faut bien vérifier de quel pointeur on parle.

### allocation

On utilise les mots clés `new` and `delete`, super easy.

``` c++
// Pour allouer une seule instance
className *instance = new className;
delete instance;

// Pour 42 instances
className *instance = new className[42];
delete [] instance;
```

_Attention_ : il est impossible d'allouer _N_ elements en passant des arguments. Deux solutions semblent repondre a cette problematique :

``` c++
// la plus elegante utilise std::vector
std::vector<Point> v(k, Point{5});
// sinon, si on connait le nombre d'allocation souhaite
ClassName *newClass = new ClassName[5]{{1}, {2}, {3}, {4}, {5}};
// enfin on peut allouer avec `new` et utiliser une boucle `for`
// pour les initialiser un a un
```

### references

`&` permet de faire des references.

### filestream

``` c++
ifs()
ofs()
```
## How to...

### generate random number each time you run the program?

``` c++
// This solution use the timestamp
std::srand(time(NULL));
std::cout << rand() << std::endl;
```

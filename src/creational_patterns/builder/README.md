# Builder Pattern

## Définition

Le Builder pattern est une classe intermédiaire, située à l'intérieur ou à l'extérieur de la classe principale que l'on souhaite instancier. 

Il est particulièrement utile lorsque l'objet à créer possède de nombreux paramètres et qu'il est difficile de distinguer un constructeur unique pour tous les cas.

Le Builder permet de créer l'objet progressivement, en accumulant les paramètres via des méthodes spécialisées. Une méthode `build()` de la classe Builder permet de renvoyer l'objet final construit.

---

## Quand l'utiliser ?

- Un objet possède **beaucoup de paramètres**, dont certains optionnels
- On veut éviter les **constructeurs à rallonge** difficiles à lire
- On veut pouvoir construire **différentes variantes** d'un même objet

---

## Comparaison avec un constructeur classique

Avec un constructeur classique, plus le nombre de paramètres augmente, plus le code devient illisible :
```cpp
// On ne sait pas à quoi correspond chaque valeur sans regarder la signature
Car car("Corsa", "Opel", "IV", 5, false);
```

Avec plusieurs variantes d'un objet, on se retrouve vite avec une multitude de constructeurs :
```cpp
Car(string brand);
Car(string brand, string name);
Car(string brand, string name, int gate);
Car(string brand, string name, int gate, bool gps);
// ...
```

Le Builder résout ces deux problèmes : chaque paramètre est nommé explicitement via sa méthode `set`, et seuls les paramètres souhaités sont renseignés :
```cpp
Car car = CarBuilder()
    .setBrand("Opel")
    .setModel("Corsa")
    .setGate(5)
    .build();
```

---

## Le method chaining

Pour faciliter l'enchaînement de méthodes, les méthodes de configuration doivent retourner une référence vers le Builder (`Builder& set(...)`), afin que plusieurs paramètres puissent être configurés successivement sur le même objet :
```cpp
Car car = CarBuilder()
    .setBrand("Opel")
    .setModel("Corsa")
    .setGate(5)
    .build();
```

---

## Points importants

- **Constructeur par défaut et personnalisé** peuvent coexister dans le même code.
- Si l'objet ne possède **qu'un constructeur personnalisé**, la méthode `build()` basée sur le constructeur par défaut échouera.
- Si les méthodes `set` retournent des **copies plutôt que des références**, les paramètres accumulés ne seront pas conservés — le chaining ne fonctionnera pas correctement.
- Marquer le constructeur de la classe principale avec `explicit` force l'utilisation de `build()` et interdit la conversion implicite depuis le Builder.

---

## Inconvénients

- **Verbeux** — nécessite une classe supplémentaire pour chaque objet à construire
- **Redondance** — les attributs sont souvent dupliqués entre la classe principale et le Builder
- **Pas de validation** — sans logique dans `build()`, rien ne garantit que l'objet est dans un état cohérent à la construction

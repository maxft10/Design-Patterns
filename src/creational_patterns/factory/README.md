# Factory Pattern

## Définition

Le Factory pattern est utilisé pour créer des objets sans instancier directement leur classe concrète. Contrairement au Builder, ici on veut créer des objets qui partagent une interface ou des caractéristiques communes, souvent via une classe abstraite ou une interface.

Les objets sont créés par une méthode de la classe Factory, ce qui permet au code client de rester découplé de la classe concrète.

---

## Quand l'utiliser ?

- On veut créer des objets **sans connaître leur classe concrète** à l'avance
- Plusieurs classes partagent une **interface ou une classe abstraite** commune
- On veut **centraliser** la logique de création pour faciliter la maintenance

---

## Comparaison avec le Builder

| | Builder | Factory |
|---|---|---|
| **Objectif** | Construire un objet complexe étape par étape | Créer un objet parmi plusieurs variantes |
| **Paramètres** | Nombreux, optionnels | Généralement un type ou un identifiant |
| **Résultat** | Toujours le même type | Peut retourner des types différents |

---

## Les trois variantes

### 1. Simple Factory (ou statique)
Une classe avec une méthode statique qui instancie et retourne l'objet selon un paramètre. Ce n'est pas un pattern officiel du Gang of Four, mais c'est le point d'entrée le plus simple pour comprendre le concept.

### 2. Factory Method
Une classe abstraite définit une méthode virtuelle de création. Chaque sous-classe concrète surcharge cette méthode pour instancier le bon objet. Cela permet d'étendre les types créés sans modifier le code existant.

### 3. Abstract Factory
Permet de créer une **famille d'objets cohérents** entre eux, sans connaître leurs classes concrètes. Plutôt qu'une seule méthode, on a une interface avec plusieurs méthodes de création liées.

---

## Inconvénients

- **Multiplication des classes** — chaque nouveau type peut nécessiter une nouvelle sous-classe
- **Complexité accrue** — les variantes Factory Method et Abstract Factory peuvent être difficiles à appréhender au premier abord

# Singleton Pattern

## Définition

Le Singleton pattern garantit qu'une classe ne peut avoir qu'une seule instance, et fournit un point d'accès global à cette instance. Après la première création, toute tentative d'instanciation renvoie la même instance déjà créée.

---

## Quand l'utiliser ?

Le Singleton est utile quand une seule instance doit être partagée dans tout le programme :

- **Logger** — un seul système de logs pour toute l'application
- **Configuration** — un seul objet qui lit et stocke les paramètres
- **Connexion à une base de données** — éviter d'ouvrir plusieurs connexions inutilement
- **Gestionnaire de fenêtre** — une seule fenêtre principale

---

## Variantes implémentées

### 1. Singleton classique avec pointeur dynamique
L'instance est allouée dynamiquement sur le tas. Simple à comprendre, mais la mémoire n'est jamais libérée et ce n'est pas thread-safe.

### 2. Meyers Singleton
Repose sur une variable statique locale, initialisée une seule fois à la première utilisation et détruite automatiquement en fin de programme. C'est la version **recommandée** en C++ moderne — thread-safe depuis C++11, sans fuite mémoire.

### 3. Singleton avec `unique_ptr`
L'instance est gérée par un pointeur intelligent, ce qui garantit sa destruction automatique. Plus explicite sur la gestion mémoire, mais nécessite des précautions supplémentaires pour être thread-safe.

---

## Inconvénients

Le Singleton est souvent critiqué :

- **Difficile à tester** — l'état persiste entre les tests, ce qui peut créer des effets de bord
- **Couplage fort** — les classes qui l'utilisent en dépendent directement
- **Masque les dépendances** — on ne voit pas facilement qu'une classe utilise un Singleton
- **Problèmes en multithreading** — les versions naïves ne sont pas thread-safe

## Résumé

| Variante | Thread-safe | Mémoire libérée | Recommandée |
|---|---|---|---|
| Pointeur dynamique | ❌ | ❌ | ❌ |
| Meyers Singleton   | ✅ | ✅ | ✅ |
| `unique_ptr`       | ❌ | ✅ | ⚠️ |

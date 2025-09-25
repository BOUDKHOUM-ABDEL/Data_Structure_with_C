🏰 The Stack Tower (Pile Magique)

Welcome, brave coder! ⚔️
You now hold the keys to the Tower of the Stack — a magical structure where values are placed one on top of the other, and only the topmost one can be removed. Just like stacking enchanted scrolls 📜: you can only grab the last one you placed!

✨ Key Spells (Features)

📦 Empiler (Push): Place a new magical item on top of the stack.

🗡️ Dépiler (Pop): Remove the last item added (beware: once gone, it vanishes forever!).

🔍 Inspection (Show): Reveal all the treasures stacked inside the tower.

🚪 Empty Check: Warns you if the tower is empty before trying to remove something.

🎮 Menu of Possibilities

When you run the program (main.c), you’ll see this enchanted menu:

1. Empiler une valeur (push)
2. Dépiler une valeur (pop)
3. Afficher la pile
0. Quitter


Choose wisely, adventurer:

Option 1 → Add a new scroll on top of the tower.

Option 2 → Remove the top scroll.

Option 3 → See the entire stack from top to bottom.

Option 0 → Leave the magical tower (quit program).

🧩 How It Works

The tower (stack) is built using a linked structure of enchanted nodes:

Each node stores a value and points to the next below it.

The sommet (top) is always where the last scroll rests.

Only the top can be accessed or removed — the ancient LIFO law (Last In, First Out).

🚀 Applications in the Realms

Undo/Redo spells in text editors ✍️

Recursion tracking in enchanted functions 🔄

Expression evaluation (like magic potions mixing order) 🧪

Backtracking algorithms (finding paths in labyrinths 🌀)

⚡ License & Call to Arms

This code is free as the wind 🌬️ — use it, improve it, and share it with fellow adventurers.
Every great mage (programmer) started with a simple spell (stack).
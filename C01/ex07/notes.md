Como funciona:
- i começa no início (0) e vai até o meio (size / 2).
- temp guarda o valor de tab[i].
- tab[i] recebe o valor de tab[size - 1 - i] (posição oposta no array).
- A posição oposta recebe o valor original de tab[i] que está em temp.
- Quando i chega no meio, o array está invertido.

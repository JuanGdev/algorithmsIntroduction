# Insertion sort
The basis of the *insertion sort algorithm* is an input of n numbers
$$
\begin{array}{c}
<a_1, a_2, \ldots, a_n >\\
\end{array}
$$

that are processed to return an ordered list of numbers such that:

$$
\begin{array}{c}
<a_1' <= a_2 <= a_3 <= \ldots<= a_n' >\\
\end{array}
$$

You can represent the algorithm with this graphic process:

```mermaid
sequenceDiagram
    participant A as Elemento A
    participant B as Elemento B
    participant C as Elemento C
    participant D as Elemento D
    participant E as Elemento E
    participant F as Elemento F

    A ->> B: Comparar
    B ->> A: Intercambiar (si es necesario)
    B ->> C: Comparar
    C ->> B: Intercambiar (si es necesario)
    C ->> D: Comparar
    D ->> C: Intercambiar (si es necesario)
    D ->> E: Comparar
    E ->> D: Intercambiar (si es necesario)
    E ->> F: Comparar
    F ->> E: Intercambiar (si es necesario)
```

The insertion sorting algorithm is simple because it is only a matter of going through each element (from the beginning) and comparing it with the element in front and, if necessary, making a change of position with that element.

